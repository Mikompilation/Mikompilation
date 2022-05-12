#include "Texture.h"
#include "EBO.h"
#include "VAO.h"
#include "PS2_HARDWARE_CONFIG.h"
#include <algorithm>

GLuint indices[] = {
        0, 2, 1, // Upper triangle
        0, 3, 2 // Lower triangle
};

Tim2Converted *LoadTim2Texture(TIM2_FILEHEADER *pTim2FileHeader, const SPRT_DAT *sprtDat)
{
  auto ph = (TIM2_PICTUREHEADER *) (sizeof(TIM2_FILEHEADER) + (int) pTim2FileHeader);
  unsigned int *texture = new unsigned int[static_cast<int>(sprtDat->size_frame_x) * static_cast<int>(sprtDat->size_frame_y)];

  for (int i = 0; i < (int)sprtDat->size_frame_y; i++)
  {
    for (int k = 0; k < (int)sprtDat->size_frame_x; k++)
    {
      const auto pixelInfo = Tim2GetTextureColor(ph, 0, 0, k + (int)sprtDat->shift_x, i + (int)sprtDat->shift_y);

      texture[i * (int) sprtDat->size_frame_x + k] = pixelInfo;
    }
  }

  Tim2Converted *convertedTexture = new Tim2Converted
      {
          (int) sprtDat->size_frame_y,
          (int) sprtDat->size_frame_x,
          texture
      };

  return convertedTexture;
}

void FlipYTexture(unsigned width, unsigned height, unsigned int *data)
{
  auto row_offset = [&](unsigned row) {
    return row * height;
  };

  // pointer arithmetic once up front
  auto first_row = data + row_offset(0);
  auto last_row = data + row_offset(height / 2);
  auto other_row = data + row_offset(height);

  // swap each row
  for (; first_row != last_row; first_row += width)
  {
    other_row -= width;
    std::swap_ranges(first_row, first_row + width, other_row);
  }
}

TextureInfo* MapTexturePoints(const SPRT_DAT* spriteData)
{
  // Set up the TextureInfo
  TextureInfo *texInfo = new TextureInfo;
  texInfo->vertices = new TextureVertex[4];
  texInfo->numVertex = 10;
  texInfo->numIndex = 6;
  texInfo->indices = indices;

  // Set the color for each Vertex

  // Lower left corner
  texInfo->vertices[0].r = 1.0f;
  texInfo->vertices[0].g = 0.0f;
  texInfo->vertices[0].b = 0.0f;

  // Upper left corner
  texInfo->vertices[1].r = 0.0f;
  texInfo->vertices[1].g = 1.0f;
  texInfo->vertices[1].b = 0.0f;

  // Upper right corner
  texInfo->vertices[2].r = 0.0f;
  texInfo->vertices[2].g = 0.0f;
  texInfo->vertices[2].b = 1.0f;

  // Lower right corner
  texInfo->vertices[3].r = 1.0f;
  texInfo->vertices[3].g = 1.0f;
  texInfo->vertices[3].b = 1.0f;

  // Calculate location on screen
  float adjustmentX = PS2_RESOLUTION_X_FLOAT / 2;
  float adjustmentY = PS2_RESOLUTION_Y_FLOAT / 2;

  //ndc.x = ((2.0 * screen.x) - (2.0 * x)) / w) - 1.0
  //ndc.y = ((2.0 * screen.y) - (2.0 * y)) / h) - 1.0

  // Upper left corner
  texInfo->vertices[0].coordX = ((float)spriteData->offset_frame_x - adjustmentX) / adjustmentX;
  texInfo->vertices[0].coordY = ((float)spriteData->offset_frame_y - adjustmentY) / adjustmentY;
  texInfo->vertices[0].coordZ = 0.0f;

  // Bottom left corner
  texInfo->vertices[1].coordX = ((float)spriteData->offset_frame_x - adjustmentX) / adjustmentX;
  texInfo->vertices[1].coordY = ((float)spriteData->offset_frame_y - adjustmentY + (float)spriteData->size_frame_y) / adjustmentY;
  texInfo->vertices[1].coordZ = 0.0f;

  // Bottom right corner
  texInfo->vertices[2].coordX = ((float)spriteData->offset_frame_x - adjustmentX + (float)spriteData->size_frame_x) / adjustmentX;
  texInfo->vertices[2].coordY = ((float)spriteData->offset_frame_y - adjustmentY + (float)spriteData->size_frame_y) / adjustmentY;
  texInfo->vertices[2].coordZ = 0.0f;

  // Upper right corner
  texInfo->vertices[3].coordX = ((float)spriteData->offset_frame_x - adjustmentX + (float)spriteData->size_frame_x) / adjustmentX;
  texInfo->vertices[3].coordY = ((float)spriteData->offset_frame_y - adjustmentY) / adjustmentY;
  texInfo->vertices[3].coordZ = 0.0f;

  // Calculate Texture frame Coordinate

  // Upper left corner
  texInfo->vertices[0].texCoordX = 0.0f;
  texInfo->vertices[0].texCoordY = 1.0f;

  // Bottom left corner
  texInfo->vertices[1].texCoordX = 0.0f;
  texInfo->vertices[1].texCoordY = 0.0f;

  // Bottom right corner
  texInfo->vertices[2].texCoordX = 1.0f;
  texInfo->vertices[2].texCoordY = 0.0f;

  // Upper right corner
  texInfo->vertices[3].texCoordX = 1.0f;
  texInfo->vertices[3].texCoordY = 1.0f;

  return texInfo;
}

ZeroTexture::Texture::Texture(unsigned int* textureData, int width, int height, GLenum texType, GLenum slot, GLenum format, GLenum pixelType)
{
  // Assigns the type of the texture ot the texture object
  type = texType;

  // Generates an OpenGL texture object
  glGenTextures(1, &ID);

  // Assigns the texture to a Texture Unit
  glActiveTexture(slot);
  glBindTexture(texType, ID);

  // Configures the type of algorithm that is used to make the image smaller or bigger
  glTexParameteri(texType, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
  glTexParameteri(texType, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  // Configures the way the texture repeats (if it does at all)
  glTexParameteri(texType, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(texType, GL_TEXTURE_WRAP_T, GL_REPEAT);

  // Assigns the image to the OpenGL Texture object
  glTexImage2D(texType, 0, GL_RGBA, width, height, 0, format, pixelType, textureData);

  // Generates MipMaps
  glGenerateMipmap(texType);

  // Unbinds the OpenGL Texture object so that it can't accidentally be modified
  glBindTexture(texType, slot);
}

void ZeroTexture::Texture::texUnit(Shader* shader, const char* uniform, GLuint unit)
{
  GLuint texUni = glGetUniformLocation(shader->ID, uniform);
  shader->Activate();
  glUniform1i(texUni, unit);
}

void ZeroTexture::Texture::Bind()
{
  glBindTexture(type, ID);
}

void ZeroTexture::Texture::Unbind()
{
  glBindTexture(type, ID);
}

void ZeroTexture::Texture::Delete()
{
  glDeleteTextures(1, &ID);
}

ZeroTexture::Texture2d::Texture2d(TIM2_FILEHEADER *pTim2FileHeader, SPRT_DAT *spriteData, GLenum slot)
{
  this->slot = slot;
  this->pTim2FileHeader = pTim2FileHeader;
  this->spriteData = spriteData;
  this->textureInfo = MapTexturePoints(this->spriteData);
  this->shaderProgram = new Shader("resources/shader.vert", "resources/shader.frag");
  this->VAO1 = new VAO();
  this->VAO1->Bind();
}

void ZeroTexture::Texture2d::InitTexture()
{
  this->VBO1 = new VBO((GLfloat*) textureInfo->vertices, sizeof(TextureVertex) * textureInfo->numVertex);
  this->EBO1 = new EBO(textureInfo->indices, sizeof(GLuint) * textureInfo->numIndex);

  this->VAO1->LinkAttrib(this->VBO1, 0, 3, GL_FLOAT, 8 * sizeof(float), (void*)0);
  this->VAO1->LinkAttrib(this->VBO1, 1, 3, GL_FLOAT, 8 * sizeof(float), (void*)(3 * sizeof(float)));
  this->VAO1->LinkAttrib(this->VBO1, 2, 2, GL_FLOAT, 8 * sizeof(float), (void*)(6 * sizeof(float)));

  this->VAO1->Unbind();
  this->VBO1->Unbind();
  this->EBO1->Unbind();

  this->uniID = glGetUniformLocation(this->shaderProgram->ID, "scale");

  Tim2Converted *tim2 = LoadTim2Texture(pTim2FileHeader, this->spriteData);

  this->texture = new Texture(tim2->image, (int)tim2->Width, (int)tim2->Height, GL_TEXTURE_2D, this->slot, GL_RGBA, GL_UNSIGNED_BYTE);
  this->texture->texUnit(this->shaderProgram, "tex0", 0);
}

void ZeroTexture::Texture2d::RenderTexture()
{
  this->shaderProgram->Activate();
  glUniform1f(this->uniID, 0.5f);
  this->texture->Bind();
  this->VAO1->Bind();
  glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
}
