#pragma once

#include "heapctrl.h"

void InitSysWrk();
void InitSystemON();
void* systemGetMem(int size);
void systemFreeMem(void *adrs);
HEAP_WRK *GetSystemHeapWrkP();