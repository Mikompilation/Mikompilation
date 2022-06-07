#include "game_main.h"
#include "fs/eecdvd.h"
#include "fs/iopsys.h"
#include "gphase.h"
#include "logging/printing.h"
#include "player/plyr_mdl.h"

#include "menu/logo_main.h"
#include "menu/title_menu.h"

#include "system/option.h"
#include "system/system.h"
#include "scene/scene_effect.h"

#include "flag/clear_flg.h"
#include "gra3d/gra3d.h"
#include "g2d/g2d_main.h"
#include "finder/finder.h"

#include "MemoryCard/mc.h"
#include "Vif1/dmaVif1.h"
#include "glob.h"

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
  soft_reset_disable = 0;
  InitSystemON();
  InitGraph2dBoot();
  InitLogo();
  LoadingInit();
  TitleInit();
  InitOptionSetup(&opt_wrk);
  ClearFlgCtrlInit();
  MemoryCardInit();
  dmaVif1Init(nullptr, 0, nullptr, 0);
  gra3dInit();
  FinderBankSetup();
  SceneEffectInit();
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
  return;
}

void init_Boot_Init()
{
  LoadReq(SYSTEM_TEXTURES_PAK2, (void *) 0x1E79B0);
  LoadReq(GAME_TEXT, (void *) 0xD9EC00);

  SubTitleAddr = (int*) malloc(GetFileSize_L(SUBTITLE_TEXT));
  LoadReq(SUBTITLE_TEXT, SubTitleAddr, true);
}

GPHASE_ID one_Boot_Init(GPHASE_ID gphaseId)
{
  auto isAllFilesLoaded = IsLoadEndAll();

  if (isAllFilesLoaded)
  {
    SetNextGPhase(AUTOLOAD_MAIN);
  }

  return DEFAULT;
}

int *GetSubTitleAddr()
{
  return SubTitleAddr;
}

void SoftResetLock()
{
  sys_wrk.unknown_0x10 = 0;
  soft_reset_disable += 1;
}
