#include "ol_load.h"
#include "heapctrl.h"

static HEAP_WRK ol_load_heap_wrk;

void ol_loadHeapInit(void *adrs, unsigned int size)
{
  heapCtrlInit(&ol_load_heap_wrk, adrs, size);
}
