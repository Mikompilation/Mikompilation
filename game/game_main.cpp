#include "game_main.h"
#include "gphase.h"
#include "logging/printing.h"
#include "logo/logo_main.h"
#include "menu/menu_main.h"
#include "player/plyr_mdl.h"

const char* code_file = "game_main.cpp";

bool soft_reset_disable;
int frameCounter = 0;

void game_init()
{
  InitGPhaseSys();
  InitLogo();
  InitMenu();
}

void game_main()
{
  frameCounter += 1;
  GPhaseSysMain();

  if (frameCounter < 1000)
  {
    RenderLogo(frameCounter > 500);
  }
  else
  {
    RenderMenu();
  }
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
