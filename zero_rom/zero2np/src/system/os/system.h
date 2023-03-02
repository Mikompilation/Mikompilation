#pragma once

#include "../eeiop/snd_3d.h"
#include "heapctrl.h"

extern SND_3D_ENV s3d_env;
extern int system_sound_bank_id;

void InitSysWrk();
void InitSystemON();
void* systemGetMem(int size);
void systemFreeMem(void *adrs);
HEAP_WRK *GetSystemHeapWrkP();
void SetVBlankWaitNum(int iWaitNum);
void SystemSetVCallback();
void SystemBankSetup();