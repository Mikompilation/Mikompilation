#pragma once

void mem_utilInit(void *adrs, int size);
void mem_utilReset(void *adrs, int size);
void *mem_utilGetMem(int size);
void mem_utilFreeMem(void *adrs);
void mem_utiDrawMemory(void (*draw_rect_func)(/* parameters unknown */),
                       void (*draw_line_func)(/* parameters unknown */), int xx,
                       int yy, int ww, int hh);
unsigned int mem_utilQueryMaxFreeSize();
unsigned int mem_utilQueryTotalFreeSize();