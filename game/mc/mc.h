#pragma once

struct MC_PLAY_DATA_HEAD
{
  char unknown[0x84];
};

inline MC_PLAY_DATA_HEAD mc_play_data_head;

void MemoryCardInit();
void MemoryCardExeInit();
void MemoryCardEnd();