#pragma once

#include "../gphase_types.h"

struct AUTO_LOAD_CTRL
{
  char8_t unknown_0x00;
  char8_t unknown_0x01;
  char16_t unknown_0x02;
  int unknown_0x04;
};

inline AUTO_LOAD_CTRL auto_load_ctrl;
inline void* auto_load_data_buff;

void init_AutoLoad_Main();
GPHASE_ID one_AutoLoad_Main(GPHASE_ID gphase);
void end_AutoLoad_Main();
void AutoLoadInit();