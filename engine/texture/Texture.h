#pragma once

#include "EBO.h"
#include "VAO.h"
#include "ZeroShader.h"
#include "tim2.h"

struct TextureVertex
{
  GLfloat coordX;
  GLfloat coordY;
  GLfloat coordZ;
  GLfloat r;
  GLfloat g;
  GLfloat b;
  GLfloat texCoordX;
  GLfloat texCoordY;
};

struct TextureInfo
{
  int numVertex;
  TextureVertex* vertices;
  int numIndex;
  GLuint* indices;
};

struct SPRT_DAT
{
  /// PS2 Gs Register address
  unsigned __int64 GsTex0;

  /// Shift the image content within the texture's frame
  unsigned short shift_x;
  unsigned short shift_y;

  /// Size of the frame for the texture
  unsigned short size_frame_x;
  unsigned short size_frame_y;

  /// Absolute coordinate of the texture's (upper-left corner) on the screen
  unsigned short offset_frame_x;
  unsigned short empty;
  unsigned short offset_frame_y;

  unsigned int field_0x16;
  unsigned short field_0x1A;
  unsigned char field_0x1C;
  unsigned char flip;
  unsigned char pad[2];
};

namespace ZeroTexture
{
class Texture
{
 public:
  GLuint ID;
  GLenum type;
  Texture(unsigned int* textureData, int width, int height, GLenum texType, GLenum slot, GLenum format, GLenum pixelType);
  void texUnit(Shader *shader, const char* uniform, GLuint unit);
  void Bind();
  void Unbind();
  void Delete();
};

class Texture2d
{
 public:
  Texture2d(TIM2_FILEHEADER* pTim2FileHeader, SPRT_DAT *spriteData, GLenum slot);
  void InitTexture();
  void RenderTexture();

 private:
  TIM2_FILEHEADER* pTim2FileHeader;
  SPRT_DAT* spriteData;
  TextureInfo* textureInfo;
  GLenum slot;
  VAO *VAO1;
  EBO *EBO1;
  VBO *VBO1;
  Shader *shaderProgram;
  Texture *texture;
  GLuint uniID;
};
}

void FlipYTexture(unsigned width, unsigned height, unsigned int *data);
TextureInfo* MapTexturePoints(const SPRT_DAT* spriteData);
Tim2Converted *LoadTim2Texture(TIM2_FILEHEADER *pTim2FileHeader, const SPRT_DAT *sprtDat);