#include "system.h"
#include "logging/logging.h"
#include "spdlog/spdlog.h"

SYS_WRK sys_wrk;

void InitSysWrk()
{
  sys_wrk.sreset_count = 0;
  sys_wrk.video_mode = '\x03';
  sys_wrk.language = '\0';
}

void InitSystemON()
{
  const auto engineLogger = spdlog::get(ENGINE_LOGGER);
  engineLogger->info("Init System");
  InitSysWrk();
}
