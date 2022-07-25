#include "mc.h"
#include "logging/printing.h"
#include "mc_check_card.h"
#include "mc_set_data.h"

void MemoryCardInit()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void MemoryCardExeInit()
{
  MemoryCardSoftResetLock();
  MemoryCardInfoCtrlInit();
  MemoryCardPlayDataHeadInit();
}

void MemoryCardEnd()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}