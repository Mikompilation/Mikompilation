#include "game_main.h"
#include "fs/eecdvd.h"
#include "fs/iopsys.h"
#include "gphase.h"
#include "logging/printing.h"
#include "player/plyr_mdl.h"
#include "menu/logo_main.h"
#include "menu/title_menu.h"

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
  // InitSystemON();
  // InitGraph2dBoot();
  // playPssInit();
  InitLogo();
  // LoadingInit();
  TitleInit();
  // InitOptionSetup((OPTION_WRK *) opt_wrk);
  // ClearFlgCtrlInit();
  // MemoryCardInit();
  // MemoryCardDebugReqSizeDisp();
  // dmaVif1Init();
  // cddatInit(param 1, param 2, param 3);
  // InitDrawEnv_FPFv_PA3_iT0PFPA3_i_vT2();
  // SetPrintWarning();
  // SetPrintAsset();
  // gra3dInit();
  // FinderBankSetup();
  // SceneEffectInit();
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
