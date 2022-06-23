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
  mc_check_card_ctrl.eMcCheckCardCtrl = MC_CHECK_CARD::INIT;
  mc_check_card_ctrl.unknown_0x01 = 4;
  mc_check_card_ctrl.unknown_0x02 = 0;
  mc_check_card_ctrl.unknown_0x04 = param1;
  mc_check_card_ctrl.unknown_0x08 = param2;
}

int MemoryCardGetCardInfoMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  return 0;
}
