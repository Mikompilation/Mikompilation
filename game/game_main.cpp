#include "game_main.h"
#include "file/file_util.h"
#include "gphase.h"
#include "logging/printing.h"
#include "player/plyr_mdl.h"
#include "texture/Texture.h"

const char* code_file = "game_main.cpp";

bool soft_reset_disable;

ZeroTexture::Texture2d* texture2d;
ZeroTexture::Texture2d* texture2d2;

SPRT_DAT logo_dat {
    0x20058805E1312BC0,
    0x1,
    0x1,
    0xE2,
    0x2D,
    0xC5,
    0x0,
    0xC9,
    0x0,
    0x0,
    0x80,
    0x0,
    {0x0, 0x0}
};

SPRT_DAT logo_dat_zero {
    0x2005980621312BC0,
    0x1,
    0x1,
    0xC3,
    0x8A,
    0xE5,
    0x0,
    0x97,
    0x0,
    0x0,
    0x80,
    0x0,
    {0x0, 0x0}
};

SPRT_DAT logo_dat_zero2 {
    0x2005980621312BC0,
    0x1,
    0x8D,
    0x67,
    0x11,
    0x0,
    0x0,
    0x0,
    0x0,
    0x0,
    0x80,
    0x0,
    {0x0, 0x0}
};

void game_init()
{
  InitGPhaseSys();

  auto textureFile = ReadFullFile("D:\\zero_logo.tm2"); // D:\zero_logo.tm2
  texture2d = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) textureFile, &logo_dat_zero2, GL_TEXTURE0);
  //texture2d2 = new ZeroTexture::Texture2d((TIM2_FILEHEADER*) textureFile, &logo_dat_zero, GL_TEXTURE0);

  texture2d->InitTexture();
  //texture2d2->InitTexture();

  delete[] textureFile;
}

void game_main()
{
  GPhaseSysMain();
  texture2d->RenderTexture();
  //texture2d2->RenderTexture();
}

void init_super()
{
  InitCostume();
  soft_reset_disable = false;
  printNotImplemented("init_super", code_file);
}

void end_super()
{
  return;
}

GPHASE_ID pre_super(GPHASE_ID gphaseId)
{
  printNotImplemented("pre_super", code_file);

  return SUPER;
}

GPHASE_ID after_super(GPHASE_ID gphaseId)
{
  printNotImplemented("after_super", code_file);

  return DEFAULT;
}

void end_Boot_Init()
{
  printNotImplemented("end_Boot_Init", code_file);
}

void init_Boot_Init()
{
  printNotImplemented("init_Boot_Init", code_file);
}

GPHASE_ID one_Boot_Init(GPHASE_ID gphaseId)
{
  printNotImplemented("one_Boot_Init", code_file);
  return STORY_EFFECT;
}
