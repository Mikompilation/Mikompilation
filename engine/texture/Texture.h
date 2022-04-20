#pragma once

#include "ZeroShader.h"
#include "tim2.h"

struct Tim2Converted
{
  int Height;
  int Width;
  char *image;
};

Tim2Converted *LoadTim2Texture(const char* file);

void TexInit();
void TexDo();

class Texture
{
 public:
  GLuint ID;
  GLenum type;
  Texture(const char* image, GLenum texType, GLenum slot, GLenum format, GLenum pixelType);
  void texUnit(Shader *shader, const char* uniform, GLuint unit);
  void Bind();
  void Unbind();
  void Delete();
};