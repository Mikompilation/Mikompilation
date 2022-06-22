#pragma once

enum MC_CHECK_CTRL_ENUM : int
{
  INIT,
  UNKNOWN2,
  UNKNOWN3,
  UNKNOWN4
};

struct MC_CHECK_CTRL
{
  MC_CHECK_CTRL_ENUM eMcCheckCtrl;
  int unknown_0x04;
  int unknown_0x08;
  char filename[0x37];
};

inline MC_CHECK_CTRL mc_check_ctrl;

char *MemoryCardCheckInit(int param1, int param2, char *filename);
int MemoryCardCheckMain();