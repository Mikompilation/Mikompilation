#include "zero2_perf.h"
#include "../graphics/graph2d/message.h"

C_ZERO2_PERF_CNT c_zero2_perf_cnt;

void C_ZERO2_PERF_CNT::FrameInit()
{
  this->m_NowCnt = 0;
  this->c_performance_measure.FrameStart();
  this->c_performance_measure.SetMark();
}

void C_ZERO2_PERF_CNT::AddDraw(char *str)
{
  SetASCIIString2(0, 50.0, (float) (this->m_NowCnt * 0x19 + 0x14), 0, 0xa0,
                  0xff, 0xa0, str);
  SetASCIIString2(0, 300.0, (float) (this->m_NowCnt * 0x19 + 0x14), 0, 0xa0,
                  0xa0, 0xa0, ":");
  this->GetPercentFromMark();

  SetString2(0, 320.0, (float) (this->m_NowCnt * 0x19 + 0x14), 0, 0xff, 0xff,
             0xff, "%4d A5h %2d%%");
  this->m_NowCnt += 1;
  this->c_performance_measure.SetMark();
}

void C_ZERO2_PERF_CNT::SetMark()
{
  this->c_performance_measure.SetMark();
}

float C_ZERO2_PERF_CNT::GetPercent()
{
  return this->c_performance_measure.Get() / 20480.0;
}

float C_ZERO2_PERF_CNT::GetPercentFromMark()
{
  return this->c_performance_measure.GetFromMark() / 20480.0;
}
