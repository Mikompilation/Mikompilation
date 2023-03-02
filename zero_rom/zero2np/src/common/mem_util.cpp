#include "mem_util.h"
#include "heapctrl.h"

static HEAP_WRK mem_util_heap_wrk;

void mem_utilInit(void *adrs, int size)
{
  heapCtrlInit(&mem_util_heap_wrk, adrs, size);
}