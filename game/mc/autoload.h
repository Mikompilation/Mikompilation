#pragma once

#include "../gphase/gphase_types.h"

enum LOAD_CTRL : char
{
  CheckInit = 0,
  CheckWait = 1,
  LoadInit = 2,
  LoadWait = 3,
  LoadConf = 4,
  ErrorConf = 5,
  DefStartConf = 6,
  EmptyError = 7,
  EmptyWarning = 8
};

struct AUTO_LOAD_CTRL
{
  LOAD_CTRL eLoadCtrl;
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
void AutoLoadMain();
void AutoLoadDispMain();
void AutoLoadMcCheckInit();
void AutoLoadMcCheckWait();
void AutoLoadMcLoadInit();
void AutoLoadMcLoadWait();
void AutoLoadMcLoadConf();
void AutoLoadMcErrorConf();
void AutoLoadMcDefStartConf();
void AutoLoadMcEmptyError();
void AutoLoadMcEmptyWarning();