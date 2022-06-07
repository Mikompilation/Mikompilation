#pragma once

struct MC_INFO
{
  int accessPort;
  int cardSlot;
  int FreeCluster;
  int format;
};

inline MC_INFO mc_info;

void MemoryCardSetAccessPort(int accessPort);
void* MemoryCardInfoCtrlInit();