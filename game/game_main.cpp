#include "game_main.h"
#include "gphase.h"
#include "logging/printing.h"
#include "player/plyr_mdl.h"

bool soft_reset_disable;

void game_init()
{
  InitGPhaseSys();
}

void game_main()
{
  GPhaseSysMain();
}

void init_super()
{
  InitCostume();
  soft_reset_disable = false;

  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void end_super()
{
  return;
}

GPHASE_ID pre_super(GPHASE_ID gphaseId)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  return SUPER;
}

GPHASE_ID after_super(GPHASE_ID gphaseId)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  return DEFAULT;
}

void end_Boot_Init()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void init_Boot_Init()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

GPHASE_ID one_Boot_Init(GPHASE_ID gphaseId)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
  return DEFAULT;
}
