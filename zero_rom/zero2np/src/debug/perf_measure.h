#pragma once

class C_PERFORMANCE_MEASURE
{
 public:
  int m_MarkCnt;
  void FrameStart();
  int Get();
  void SetMark();
  int GetFromMark();
};