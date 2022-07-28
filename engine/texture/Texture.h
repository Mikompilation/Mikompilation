#pragma once

#include "Sprite.h"
#include "tim2.h"

struct TextureVertex
{
  float coordX;
  float coordY;
  float coordZ;
  float r;
  float g;
  float b;
  float texCoordX;
  float texCoordY;
};

struct TextureInfo
{
  int numVertex;
  TextureVertex* vertices;
  int numIndex;
  int* indices;
};

void FlipYTexture(unsigned width, unsigned height, unsigned int *data);
TextureInfo* MapTexturePoints(const SPRT_DAT* spriteData);
Tim2Converted *LoadTim2Texture(TIM2_FILEHEADER *pTim2FileHeader, const SPRT_DAT *sprtDat);
float ConvertPixelToNdcX(float x);
float ConvertPixelToNdcY(float y);