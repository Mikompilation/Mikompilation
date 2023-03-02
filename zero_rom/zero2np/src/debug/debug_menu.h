#pragma once

struct DEBUG_VAR
{
  int hit_disp;
  int ene_stop;
  int fog_sw;
  int near;
  int far;
  int min;
  int max;
  int fog_r;
  int fog_g;
  int fog_b;
  int hi_spd;
  int perf_count_sw;
  int move_speed;
  int cut_len;
  int muteki;
  int fl_sw;
  float fl_intens;
  float fl_range;
  float fl_py;
  float fl_pz;
  float fl_y;
  float fl_z;
  int fl_line;
  float flrf_y;
  float flrf_z;
  float flrf_range;
  float flrf_si_rate;
  float pl_amb;
  float sis_para_r;
  float sis_para_g;
  float sis_para_b;
  float fStaticDirLightColStepR;
  float fStaticDirLightColStepG;
  float fStaticDirLightColStepB;
  float fYFlashlightStep;
  float fRangeFlashlightStep;
  float fl2_range;
  int shadow_model_disp;
  int sis_tr_point;
  float dummy[4];
};

extern DEBUG_VAR debug_var;

void DebugInit();