#include "perf_measure.h"

void C_PERFORMANCE_MEASURE::FrameStart()
{
  //REG_RCNT1_MODE = 0xc82;
  //REG_RCNT1_COUNT = 0;
  //this->m_MarkCnt = REG_RCNT1_COUNT;
  this->m_MarkCnt = 1;
}

int C_PERFORMANCE_MEASURE::Get()
{
  //return REG_RCNT1_COUNT;

  return 1;
}

void C_PERFORMANCE_MEASURE::SetMark()
{
  /// Reads from a register
  //this->m_MarkCnt = REG_RCNT1_COUNT;
  this->m_MarkCnt = 1;
}

int C_PERFORMANCE_MEASURE::GetFromMark()
{
  //return REG_RCNT1_COUNT - this->m_MarkCnt;
  return 1;
}