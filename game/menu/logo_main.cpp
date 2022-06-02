#include "logo_main.h"
#include "file/file_util.h"
#include "texture/Texture.h"

ZeroTexture::Texture2d* tecmo_texture;
ZeroTexture::Texture2d* zero_texture;
ZeroTexture::Texture2d* zero_texture_2;

void InitLogo()
{
  auto tecmoTextureFile = ReadFullFile("game_files/2.bin");
  auto zeroTextureFile = ReadFullFile("game_files/3.bin");

  tecmo_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) tecmoTextureFile, &logodat[0], GL_TEXTURE0);
  zero_texture = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) zeroTextureFile, &logodat[1], GL_TEXTURE0);
  zero_texture_2 = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) zeroTextureFile, &logodat[2], GL_TEXTURE0);

  tecmo_texture->InitTexture();
  zero_texture->InitTexture();
  zero_texture_2->InitTexture();

  delete[] tecmoTextureFile;
  delete[] zeroTextureFile;
}

void RenderLogo(bool isProjectLogo)
{
  if (!isProjectLogo)
  {
    tecmo_texture->RenderTexture();
  }
  else
  {
    zero_texture->RenderTexture();
    zero_texture_2->RenderTexture();
  }
}

void LoadingInit()
{
  loading_tex_addr = nullptr;
}
