#pragma once

#include "perf_measure.h"

class C_ZERO2_PERF_CNT
{
 public:
  int m_NowCnt;
  C_PERFORMANCE_MEASURE c_performance_measure;
  void FrameInit();
  void AddDraw(char *str);
  void SetMark();
  float GetPercent();
  float GetPercentFromMark();
};

extern C_ZERO2_PERF_CNT c_zero2_perf_cnt;
