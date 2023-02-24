#include "system.h"
#include "../../common/mem_util.h"
#include "../../common/ol_load.h"
#include "../eeiop/ee_iop.h"
#include "glob.h"

#include "../../debug/mem_dbg.h"
#include "logging/logging.h"
#include "spdlog/spdlog.h"

static HEAP_WRK system_heap_wrk;

void InitSysWrk()
{
  sys_wrk.sreset_count = 0;
  sys_wrk.video_mode = '\x03';
  sys_wrk.language = '\0';
}

void InitSystemON()
{
  const auto programLogger = spdlog::get(PROGRAM_LOGGER);
  programLogger->info("Init System");
  programLogger->info("Init Memory Component");

  HEAP_WRK *wrk = GetSystemHeapWrkP();

  heapCtrlInit(wrk, (void *) 0x4d6c00, 0xc8000);
  mem_utilInit((void *) 0x15fbc00, 0x2b1400);
  ol_loadHeapInit((void *) 0x5a6c00, 0x7a8000);
  mem_dbgInit((void *) 0x3100000, 0x1000000);

  static EEIOP_DEF eeIopDef = {systemGetMem,
                               systemFreeMem,
                               0,
                               "cdrom0:\\IOPRP280.IMG;1",
                               "cdrom0:\\ZERO2IRX.HIL;1",
                               "cdrom0:\\ZERO2IRX.HIL;1",
                               0x2,
                               0x32,
                               0x1E,
                               0xA,
                               0x5,
                               0x1,
                               0x6,
                               0x1,
                               0x1};

  ee_iopInit(&eeIopDef);
  InitSysWrk();

  // Not yet implemented
  //InitGraphics();
  //InitVBlank();
  //SetDefaultKeyType();
  //InitPad();
  //PadAnalogInit();
  //C_ZERO2_PERF_CNT::FrameInit(&c_zero2_perf_cnt);
  //AddDmacHandler(1, 0x2647c8, -1);
  //EnableDmac(1);
  //SystemBankSetup();
  //MapSavePushFirstDat();
  //MissionSelTblInit();
  //DebugInit();
}

void *systemGetMem(int size)
{
  return nullptr;
}

void systemFreeMem(void *adrs)
{
}

HEAP_WRK *GetSystemHeapWrkP()
{
  return &system_heap_wrk;
}
