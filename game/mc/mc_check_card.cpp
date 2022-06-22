#include "mc_check_card.h"
#include "logging/printing.h"
#include <iostream>

void MemoryCardSetAccessPort(int accessPort)
{
  mc_info.accessPort = accessPort;
}

void* MemoryCardInfoCtrlInit()
{
  auto returnValue = std::memset(&mc_info, 0, sizeof(MC_INFO));
  mc_info.accessPort = -1;
  mc_info.cardSlot = -1;

  return returnValue;
}

void MemoryCardGetCardInfoInit(int param1, int param2)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

int MemoryCardGetCardInfoMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  return 0;
}
