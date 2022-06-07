#include "autoload.h"
#include "mc.h"
#include "mc_check_card.h"
#include <iostream>

void init_AutoLoad_Main()
{
  MemoryCardExeInit();
  AutoLoadInit();
}

GPHASE_ID one_AutoLoad_Main(GPHASE_ID gphase)
{
  return DEFAULT;
}

void end_AutoLoad_Main()
{
  return;
}

void AutoLoadInit()
{
  auto_load_ctrl.unknown_0x00 = 0;
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