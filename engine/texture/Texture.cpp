#include "Texture.h"
#include "EBO.h"
#include "VAO.h"
#include "file/file_util.h"
#include <algorithm>

VAO *VAO1;
EBO *EBO1;
VBO *VBO1;
Shader *shaderProgram;
Texture *popCat;
GLuint uniID;

GLfloat vertices[] =
    {
        //     COORDINATES                    /        COLORS      /             TexCoord  //
        -0.5f, -0.5f, 0.0f,     1.0f, 0.0f, 0.0f,	0.0f, 0.0f, // Lower left corner
        -0.5f,  0.5f, 0.0f,     0.0f, 1.0f, 0.0f,	0.0f, 1.0f, // Upper left corner
        0.5f,  0.5f, 0.0f,     0.0f, 0.0f, 1.0f,	1.0f, 1.0f, // Upper right corner
        0.5f, -0.5f, 0.0f,     1.0f, 1.0f, 1.0f,	1.0f, 0.0f  // Lower right corner
};

GLuint indices[] =
    {
        0, 2, 1, // Upper triangle
        0, 3, 2 // Lower triangle
};

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

Tim2Converted *LoadTim2Texture(const char* file)
{
  char *image = ReadFullFile(file);

  auto ph = (TIM2_PICTUREHEADER *) (sizeof(TIM2_FILEHEADER) + image);
  unsigned int *texture = new unsigned int[static_cast<int>(ph->ImageHeight) * static_cast<int>(ph->ImageWidth)];

  for (int i = 0; i < ph->ImageHeight; i++)
  {
    for (int k = 0; k < ph->ImageWidth; k++)
    {
      const auto pixelInfo = Tim2GetTextureColor(ph, 0, 0, k, i);

      texture[i * ph->ImageWidth + k] = pixelInfo;
    }
  }

  FlipYTexture(ph->ImageWidth, ph->ImageHeight, texture);

  Tim2Converted *convertedTexture = new Tim2Converted
      {
          static_cast<int>(ph->ImageHeight),
          static_cast<int>(ph->ImageWidth),
          reinterpret_cast<char *>(texture)
      };

  return convertedTexture;
}

void TexInit()
{
  shaderProgram = new Shader("D:\\Programming\\Git\\Github\\Mikompilation\\engine\\texture\\shader.vs", "D:\\Programming\\Git\\Github\\Mikompilation\\engine\\texture\\shader.fs");

  // Generates Vertex Array Object and binds it
  VAO1 = new VAO();
  VAO1->Bind();

  // Generates Vertex Buffer Object and links it to vertices
  VBO1 = new VBO(vertices, sizeof(vertices));

  // Generates Element Buffer Object and links it to indices
  EBO1 = new EBO(indices, sizeof(indices));

  // Links VBO attributes such as coordinates and colors to VAO
  VAO1->LinkAttrib(VBO1, 0, 3, GL_FLOAT, 8 * sizeof(float), (void*)0);
  VAO1->LinkAttrib(VBO1, 1, 3, GL_FLOAT, 8 * sizeof(float), (void*)(3 * sizeof(float)));
  VAO1->LinkAttrib(VBO1, 2, 2, GL_FLOAT, 8 * sizeof(float), (void*)(6 * sizeof(float)));

  // Unbind all to prevent accidentally modifying them
  VAO1->Unbind();
  VBO1->Unbind();
  EBO1->Unbind();

  // Gets ID of uniform called "scale"
  uniID = glGetUniformLocation(shaderProgram->ID, "scale");

  // Texture
  popCat = new Texture("D:\\2.bin", GL_TEXTURE_2D, GL_TEXTURE0, GL_RGBA, GL_UNSIGNED_BYTE);
  popCat->texUnit(shaderProgram, "tex0", 0);
}

void TexDo()
{
  shaderProgram->Activate();

  // Assigns a value to the uniform; NOTE: Must always be done after activating the Shader Program
  glUniform1f(uniID, 0.5f);

  // Binds texture so that is appears in rendering
  popCat->Bind();

  // Bind the VAO so OpenGL knows to use it
  VAO1->Bind();

  glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

Texture::Texture(const char* image, GLenum texType, GLenum slot, GLenum format, GLenum pixelType)
{
  // Assigns the type of the texture ot the texture object
  type = texType;

  Tim2Converted *tim2 = LoadTim2Texture(image);

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

  // Extra lines in case you choose to use GL_CLAMP_TO_BORDER
  // float flatColor[] = {1.0f, 1.0f, 1.0f, 1.0f};
  // glTexParameterfv(GL_TEXTURE_2D, GL_TEXTURE_BORDER_COLOR, flatColor);

  // Assigns the image to the OpenGL Texture object
  glTexImage2D(texType, 0, GL_RGBA, tim2->Width, tim2->Height, 0, format, pixelType, tim2->image);

  // Generates MipMaps
  glGenerateMipmap(texType);

  // Unbinds the OpenGL Texture object so that it can't accidentally be modified
  glBindTexture(texType, 0);
}

void Texture::texUnit(Shader* shader, const char* uniform, GLuint unit)
{
  // Gets the location of the uniform
  GLuint texUni = glGetUniformLocation(shader->ID, uniform);

  // Shader needs to be activated before changing the value of a uniform
  shader->Activate();

  // Sets the value of the uniform
  glUniform1i(texUni, unit);
}

void Texture::Bind()
{
  glBindTexture(type, ID);
}

void Texture::Unbind()
{
  glBindTexture(type, 0);
}

void Texture::Delete()
{
  glDeleteTextures(1, &ID);
}
