#pragma once

namespace MC_CHECK
{
enum MC_CHECK_CTRL_ENUM
{
  INIT,
  UNKNOWN1,
  UNKNOWN2,
  UNKNOWN3
};

enum MC_CHECK_CTRL2_ENUM
{
  E0,
  E1,
  E2,
  E3,
  E4
};
}


struct MC_CHECK_CTRL
{
  MC_CHECK::MC_CHECK_CTRL_ENUM eMcCheckCtrl;
  MC_CHECK::MC_CHECK_CTRL2_ENUM eMcCheckCtrl2;
  short pad;
  int unknown_0x04;
  int unknown_0x08;
  char filename[0x37];
};

inline MC_CHECK_CTRL mc_check_ctrl;

char *MemoryCardCheckInit(int param1, int param2, char *filename);
int MemoryCardCheckMain();