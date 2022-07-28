#include "Texture.h"
#include "PS2_HARDWARE_CONFIG.h"
#include <algorithm>

int indices[] = {
    0, 2, 1,// Upper triangle
    0, 3, 2 // Lower triangle
};

Tim2Converted *LoadTim2Texture(TIM2_FILEHEADER *pTim2FileHeader,
                               const SPRT_DAT *sprtDat)
{
  auto ph = (TIM2_PICTUREHEADER *) (sizeof(TIM2_FILEHEADER)
                                    + (char *) pTim2FileHeader);
  unsigned int *texture =
      new unsigned int[static_cast<int>(sprtDat->size_frame_x)
                       * static_cast<int>(sprtDat->size_frame_y)];

  for (int i = 0; i < (int) sprtDat->size_frame_y; i++)
  {
    for (int k = 0; k < (int) sprtDat->size_frame_x; k++)
    {
      const auto pixelInfo = Tim2GetTextureColor(
          ph, 0, 0, k + (int) sprtDat->shift_x, i + (int) sprtDat->shift_y);

      texture[i * (int) sprtDat->size_frame_x + k] = pixelInfo;
    }
  }

  Tim2Converted *convertedTexture = new Tim2Converted {
      (int) sprtDat->size_frame_y, (int) sprtDat->size_frame_x, texture};

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

float ConvertPixelToNdcX(float x)
{
  float adjustmentX = PS2_RESOLUTION_X_FLOAT / 2;
  return (x - adjustmentX) / adjustmentX;
}

float ConvertPixelToNdcY(float y)
{
  return 1.0f - (((2.0f * y)) / PS2_RESOLUTION_Y_FLOAT);
}

TextureInfo *MapTexturePoints(const SPRT_DAT *spriteData)
{
  TextureInfo *texInfo = new TextureInfo;
  texInfo->vertices = new TextureVertex[4];
  texInfo->numVertex = 4;
  texInfo->numIndex = 6;
  texInfo->indices = indices;

  // Set the color for each Vertex
  for (int i = 0; i < texInfo->numVertex; i++)
  {
    texInfo->vertices[i].r = 0.0f;
    texInfo->vertices[i].g = 0.0f;
    texInfo->vertices[i].b = 0.0f;
  }

  // Calculate location on screen,
  // convert from pixel coord to ndc coord

  // Upper left corner
  texInfo->vertices[0].coordX =
      ConvertPixelToNdcX((float) spriteData->offset_frame_x);
  texInfo->vertices[0].coordY =
      ConvertPixelToNdcY((float) spriteData->offset_frame_y);
  texInfo->vertices[0].coordZ = 0.0f;

  // Bottom left corner
  texInfo->vertices[1].coordX =
      ConvertPixelToNdcX((float) spriteData->offset_frame_x);
  texInfo->vertices[1].coordY = ConvertPixelToNdcY(
      (float) spriteData->offset_frame_y + (float) spriteData->size_frame_y);
  texInfo->vertices[1].coordZ = 0.0f;

  // Bottom right corner
  texInfo->vertices[2].coordX = ConvertPixelToNdcX(
      (float) spriteData->offset_frame_x + (float) spriteData->size_frame_x);
  texInfo->vertices[2].coordY = ConvertPixelToNdcY(
      (float) spriteData->offset_frame_y + (float) spriteData->size_frame_y);
  texInfo->vertices[2].coordZ = 0.0f;

  // Upper right corner
  texInfo->vertices[3].coordX = ConvertPixelToNdcX(
      (float) spriteData->offset_frame_x + (float) spriteData->size_frame_x);
  texInfo->vertices[3].coordY =
      ConvertPixelToNdcY((float) spriteData->offset_frame_y);
  texInfo->vertices[3].coordZ = 0.0f;

  // Calculate Texture frame Coordinate

  // Upper left corner
  texInfo->vertices[0].texCoordX = 0.0f;
  texInfo->vertices[0].texCoordY = 0.0f;

  // Bottom left corner
  texInfo->vertices[1].texCoordX = 0.0f;
  texInfo->vertices[1].texCoordY = 1.0f;

  // Bottom right corner
  texInfo->vertices[2].texCoordX = 1.0f;
  texInfo->vertices[2].texCoordY = 1.0f;

  // Upper right corner
  texInfo->vertices[3].texCoordX = 1.0f;
  texInfo->vertices[3].texCoordY = 0.0f;

  return texInfo;
}