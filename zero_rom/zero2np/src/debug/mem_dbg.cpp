#include "mem_dbg.h"
#include "heapctrl.h"

static HEAP_WRK mem_dbg_heap_wrk;

void mem_dbgInit(void *adrs, int size)
{
  heapCtrlInit(&mem_dbg_heap_wrk, adrs, size);
}
