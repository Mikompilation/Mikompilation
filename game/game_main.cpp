#include "game_main.h"
#include "gphase.h"
#include "logging/printing.h"
#include "texture/Texture.h"
#include "file/file_util.h"

const char* code_file = "game_main.cpp";

bool init = false;

Texture2d* texture2d;

void game_main()
{
  if (!init)
  {
    InitGPhaseSys();
    auto textureFile = ReadFullFile("resources/testTexture_256x128.tm2");
    texture2d = new Texture2d((TIM2_FILEHEADER *) textureFile, GL_TEXTURE0);
    texture2d->InitTexture();

    delete[] textureFile;
    init = true;
  }

  texture2d->RenderTexture();
  GPhaseSysMain();
}

void init_super()
{
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
