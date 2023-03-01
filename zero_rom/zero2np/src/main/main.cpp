#include "main.h"
#include "../system/eeiop/ee_iop.h"
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
  //ClearFlgCtrlInit();
  //MemoryCardInit();
  //MemoryCardDebugReqSizeDisp();
  //dmaVif1Init((void *) 0x0, 0, (void *) 0x31aa1500, 0x1ec30);
  //InitDrawEnv(dmaVif1GetPacketFLUSH_DIRECT, dmaVif1GetPacketFLUSH_DIRECT,
  //            dmaVif1SetPacketFLUSH_DIRE CT, dmaVif1SetPacketFLUSH_DIRECT);
  //SetPrintWarning(Zero2PrintWarningFunc);
  //SetPrintAssert(newAssert);
  //gra3dInit((void *) 0x1a91b00, 64000);
  //IngameWrkInit(0, 1);
  //sceSifAllocSysMemory(1, 0x600000, nullptr);
  //FinderBankSetup();
  //SceneEffectInit();

  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void end_super()
{
  return;
}

GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  //EachDebugMain();
  ee_iopMain();
  //SendDMAMain();
  return (GPHASE_ENUM)(CheckSoftReset() != 0);
}

GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  void *pvVar1;

  //ClearDrawEnv();
  //pvVar1 = GetDrawEnv(0);
  //SetScissorRegister(0,*(long *)((int)pvVar1 + 0x30));
  //pvVar1 = GetDrawEnv(1);
  //SetScissorRegister(1,*(long *)((int)pvVar1 + 0x30));
  //GET_SCISSOR_REGISTER(0);
  //PadSyncCallback();
  //PadAnalogMain();

  return GPHASE_CONTINUE;
}

int CheckSoftReset()
{
  return 0;
}
