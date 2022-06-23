#include "autoload.h"
#include "logging/printing.h"
#include "mc.h"
#include "mc_check.h"
#include "mc_check_card.h"
#include "mc_set_data.h"

void init_AutoLoad_Main()
{
  MemoryCardExeInit();
  AutoLoadInit();
}

GPHASE_ID one_AutoLoad_Main(GPHASE_ID gphase)
{
  AutoLoadMain();
  AutoLoadDispMain();
  return DEFAULT;
}

void end_AutoLoad_Main()
{
  if (auto_load_data_buff != nullptr)
  {
    std::free(auto_load_data_buff);
    auto_load_data_buff = nullptr;
  }

  MemoryCardEnd();
}

void AutoLoadInit()
{
  auto_load_ctrl.eLoadCtrl = CheckInit;
  auto_load_ctrl.unknown_0x01 = 1;
  auto_load_ctrl.unknown_0x02 = 0;
  auto_load_ctrl.unknown_0x04 = 0;

  if (auto_load_data_buff != nullptr)
  {
    std::free(auto_load_data_buff);
    auto_load_data_buff = nullptr;
  }

  MemoryCardSetAccessPort(0);
}

void AutoLoadMain()
{
  char info[64];
  std::memset(&info, 0, sizeof(info));

  switch (auto_load_ctrl.eLoadCtrl)
  {
    case CheckInit:
      AutoLoadMcCheckInit();
    case CheckWait:
      AutoLoadMcCheckWait();
      break;
    case LoadInit:
      AutoLoadMcLoadInit();
    case LoadWait:
      AutoLoadMcLoadWait();
      break;
    case LoadConf:
      AutoLoadMcLoadConf();
      break;
    case ErrorConf:
      AutoLoadMcErrorConf();
      break;
    case DefStartConf:
      AutoLoadMcDefStartConf();
      break;
    case EmptyError:
      AutoLoadMcEmptyError();
      break;
    case EmptyWarning:
      AutoLoadMcEmptyWarning();
      break;
  }
}

void AutoLoadDispMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcCheckInit()
{
  char filename[64];
  std::memset(&filename, 0, sizeof(filename));
  MemoryCardMakeSearchDirPath(filename, 0);
  MemoryCardCheckInit(0, 0, filename);
  auto_load_ctrl.eLoadCtrl = CheckWait;
}

void AutoLoadMcCheckWait()
{
  auto var1 = MemoryCardCheckMain();
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcLoadInit()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcLoadWait()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcLoadConf()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcErrorConf()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcDefStartConf()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcEmptyError()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void AutoLoadMcEmptyWarning()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}
