#pragma once
#include <stdint.h>

struct SYS_WRK
{
  unsigned long count;
  short int sreset_count;
  unsigned char sreset_ng;
  unsigned char video_mode;
  unsigned char language;
  int game_mode;
  unsigned char interrupt;
};

void InitSysWrk();
void InitSystemON();