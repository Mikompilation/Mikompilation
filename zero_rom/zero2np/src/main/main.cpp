#include "main.h"
#include "../system/os/system.h"
#include "../system/playpss/playpss.h"
#include "ingame.h"
#include "loading.h"
#include "logging/logging.h"
#include "logo.h"
#include "option.h"
#include "title.h"

static int soft_reset_disable;

int main(int argc, char **args)
{
  InitGPhaseSys();

  do
  {
    GPhaseSysMain();
  }
  while (true);

  return 0;
}

void init_super()
{
  InitLogging();
  InitCostume();
  soft_reset_disable = 0;
  InitSystemON();
  playPssInit();
  InitLogo();
  LoadingInit();
  TitleInit();
  InitOptionSetup(&opt_wrk);

  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void end_super()
{
  return;
}

GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  return GPHASE_CONTINUE;
}

GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  return GPHASE_CONTINUE;
}
