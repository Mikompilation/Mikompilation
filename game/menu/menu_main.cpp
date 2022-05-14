#include "menu_main.h"
#include "file/file_util.h"
#include "texture/Texture.h"

ZeroTexture::Texture2d* menu_texture;

void InitMenu()
{
  auto menuTextureFile = ReadFullFile("D:\\menu.tm2");
  menu_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile, &menudat[0], GL_TEXTURE0);
  menu_texture->InitTexture();

  delete[] menuTextureFile;
}

void RenderMenu()
{
  menu_texture->RenderTexture();
}

