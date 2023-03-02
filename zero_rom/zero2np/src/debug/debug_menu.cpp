#include "debug_menu.h"
#include <cstring>

DEBUG_VAR debug_var;

void DebugInit()
{
  memset(&debug_var, 0, sizeof(DEBUG_VAR));
  debug_var.fog_sw = 0.0f;
  debug_var.pl_amb = 0.5;
  debug_var.sis_para_b = 0.04f;
  debug_var.fStaticDirLightColStepR = 0.29999998f;
  debug_var.fStaticDirLightColStepB = 0.099999994f;
  debug_var.fYFlashlightStep = -270.0f;
  debug_var.fRangeFlashlightStep = 311.0f;
  debug_var.fl2_range = 1000.0f;
  debug_var.shadow_model_disp = 0;
  debug_var.sis_para_r = 0.04f;
  debug_var.sis_para_g = 0.04f;
  debug_var.fStaticDirLightColStepG = 0.099999994f;
}
