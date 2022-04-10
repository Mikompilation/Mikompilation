#pragma once

#include "gphaseData.h"

const int gphase_sys_num = 4;
GPHASE_STRUCT* gphase_sys[gphase_sys_num];

void InitGPhaseSys();
void SetNextGPhase(GPHASE_ID gphaseId);
