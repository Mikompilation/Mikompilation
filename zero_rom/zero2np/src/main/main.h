#pragma once

#include "gphase.h"
#include "ingame.h"

int main(int argc, char **args);
void DebugMemoryCheck();
void newAssert(char *pStr);
void init_super();
void end_super();
GPHASE_ENUM pre_super(GPHASE_ENUM super);
GPHASE_ENUM after_super(GPHASE_ENUM result);
void init_Boot_Init();
void end_Boot_Init();
GPHASE_ENUM one_Boot_Init(GPHASE_ENUM dummy);
int CheckSoftReset();
void SoftResetLock();
void SoftResetUnlock();
void CallSoftReset();
int *GetSubTitleAddr();
void init_SoftResetMain();
GPHASE_ENUM one_SoftResetMain(GPHASE_ENUM dummy);
void end_SoftResetMain();