#include "mc_set_data.h"
#include "../game_main.h"
#include "mc.h"
#include <iostream>

void MemoryCardSoftResetLock()
{
  SoftResetLock();
}

void* MemoryCardPlayDataHeadInit()
{
  return std::memset(&mc_play_data_head, 0, sizeof (MC_PLAY_DATA_HEAD));
}
