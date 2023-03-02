#include "heapctrl.h"
#include "../../sce/klib.h"
#include "logging/logging.h"
#include "spdlog/spdlog.h"

void heapCtrlInit(HEAP_WRK *wrk, void *adrs, unsigned int size)
{
  SemaParam semap;

  semap.maxCount = 1;
  semap.initCount = 1;
  wrk->memory_sema = CreateSema(&semap);

  const auto programLogger = spdlog::get(PROGRAM_LOGGER);
  programLogger->info("WRK[{:#x}] heapCtrlInit() adrs = {:#x} size = {:#x}",
                     (int64_t) wrk, (int64_t) adrs, size);

  heapCtrlReset(wrk, adrs, size);
}

void heapCtrlReset(HEAP_WRK *wrk, void *adrs, unsigned int size)
{
  WaitSema(wrk->memory_sema);
  my_mallocInit(&wrk->malloc, adrs, size);
  wrk->heap_num = 0;
  SignalSema(wrk->memory_sema);
}
