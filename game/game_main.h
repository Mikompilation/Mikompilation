#pragma once
#include "gphaseTypes.h"

void game_main();
void game_init();

/// Super GPHASE
void init_super();
void end_super();
GPHASE_ID pre_super(GPHASE_ID gphaseId);
GPHASE_ID after_super(GPHASE_ID gphaseId);

/// BOOT_INIT GPHASE
void end_Boot_Init();
void init_Boot_Init();
GPHASE_ID one_Boot_Init(GPHASE_ID gphaseId);

/// SOFT_RESET_MAIN GPHASE
/// end_SoftResetMain(void)
/// init_SoftResetMain(void)
/// one_SoftResetMain(GPHASE_ENUM)

/// SoftResetUnlock(void)

/// GetSubTitleAddr(void)
/// DebugMemoryCheck(void)
/// SoftResetLock(void)
/// newAssert(char *)
