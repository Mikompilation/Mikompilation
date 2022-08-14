#pragma once
#include <stdint.h>

struct INGAME_WRK
{
  uint8_t ChapterNo;
  uint8_t Difficulty;
  uint8_t ClearCnt;
  uint8_t ClearSaveFlag;
  int MenuLockCnt;
  int PauseLockCnt;

  void Init();
  void MenuLock();
  void MenuUnlock();
  bool MenuIsLocked();
  void PauseLock();
  void PauseUnlock();
  bool PauseIsLocked();
};
