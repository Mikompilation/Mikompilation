#include "game_main.h"
#include "gphase.h"
#include "logging/printing.h"
#include "controller/GameInput.h"

const char* code_file = "game_main.cpp";

void game_main()
{
  mainGameInput = new Input::Controller(0);
  InitGPhaseSys();

  do
  {
    mainGameInput->Update();
    GPhaseSysMain();
  } while (!shutDownGame);
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
