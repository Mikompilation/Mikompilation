#pragma once

#include <cstdint>

namespace MC_CHECK_CARD
{
enum MC_CHECK_DIR_CTRL_ENUM
{
  INIT
};
}

struct MC_INFO
{
  int accessPort;
  int cardSlot;
  int FreeCluster;
  int format;
};

struct MC_CHECK_CARD_CTRL
{
  MC_CHECK_CARD::MC_CHECK_DIR_CTRL_ENUM eMcCheckCardCtrl;
  int8_t unknown_0x01;
  short unknown_0x02;
  int unknown_0x04;
  int unknown_0x08;
  char dir[12];
};

inline MC_CHECK_CARD_CTRL mc_check_card_ctrl;
inline MC_INFO mc_info;

void MemoryCardSetAccessPort(int accessPort);
void *MemoryCardInfoCtrlInit();
void MemoryCardGetCardInfoInit(int param1, int param2);
int MemoryCardGetCardInfoMain();