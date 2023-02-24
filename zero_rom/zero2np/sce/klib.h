#pragma once

#include "basic_types.h"

struct SemaParam
{
  int currentCount;
  int maxCount;
  int initCount;
  int numWaitThreads;
  u_int attr;
  u_int option;
};

void SignalSema(int sema);
void WaitSema(int sema);
int CreateSema(SemaParam *sema);
int GetThreadId();
