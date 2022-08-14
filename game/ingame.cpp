#include "ingame.h"
#include "logging/printing.h"

void INGAME_WRK::Init()
{
  MenuLockCnt = 0;
  PauseLockCnt = 0;
}

void INGAME_WRK::MenuLock()
{
  MenuLockCnt += 1;
}

void INGAME_WRK::MenuUnlock()
{
  MenuLockCnt -= 1;

  if (MenuLockCnt < 0)
  {
    printError(GAME_LOGGER, "MenuUnlock", "MenuLock null or negative");
  }
}

bool INGAME_WRK::MenuIsLocked()
{
  return MenuLockCnt > 0;
}

void INGAME_WRK::PauseLock()
{
  PauseLockCnt += 1;
}

void INGAME_WRK::PauseUnlock()
{
  PauseLockCnt -= 1;

  if (PauseLockCnt < 0)
  {
    printError(GAME_LOGGER, "PauseUnlock", "PauseLock null or negative");
  }
}

bool INGAME_WRK::PauseIsLocked()
{
  return PauseLockCnt > 0;
}
