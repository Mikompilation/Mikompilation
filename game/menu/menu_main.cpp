#include "menu_main.h"
#include "file/file_util.h"
#include "texture/Texture.h"

ZeroTexture::Texture2d* menu_texture;
ZeroTexture::Texture2d* menu_lower_right_texture;
ZeroTexture::Texture2d* menu_2_texture;
ZeroTexture::Texture2d* menu_3_texture;
ZeroTexture::Texture2d* menu_4_texture;
ZeroTexture::Texture2d* menu_5_texture;
ZeroTexture::Texture2d* menu_6_texture;
ZeroTexture::Texture2d* menu_7_texture;

void InitMenu()
{
  auto menuTextureFile = ReadFullFile("game_files/menu.tm2");
  auto menuTextureFile2 = ReadFullFile("game_files/menu_2.tm2");

  menu_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile, &menudat[0], GL_TEXTURE0);
  menu_lower_right_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[1], GL_TEXTURE0);
  menu_2_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[2], GL_TEXTURE0);
  menu_3_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[3], GL_TEXTURE0);
  menu_4_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[4], GL_TEXTURE0);
  menu_5_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[5], GL_TEXTURE0);
  menu_6_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[6], GL_TEXTURE0);
  menu_7_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) menuTextureFile2, &menudat[7], GL_TEXTURE0);

  menu_texture->InitTexture();
  menu_lower_right_texture->InitTexture();
  menu_2_texture->InitTexture();
  menu_3_texture->InitTexture();
  menu_4_texture->InitTexture();
  menu_5_texture->InitTexture();
  menu_6_texture->InitTexture();
  menu_7_texture->InitTexture();

  delete[] menuTextureFile;
  delete[] menuTextureFile2;
}

void RenderMenu()
{
  menu_texture->RenderTexture();
  menu_lower_right_texture->RenderTexture();
  menu_2_texture->RenderTexture();
  menu_3_texture->RenderTexture();
  menu_4_texture->RenderTexture();
  menu_5_texture->RenderTexture();
  menu_6_texture->RenderTexture();
  menu_7_texture->RenderTexture();
}

