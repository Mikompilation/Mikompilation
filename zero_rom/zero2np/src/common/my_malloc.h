#pragma once

struct _MALLOC_HEADER
{
  _MALLOC_HEADER *pre;
  _MALLOC_HEADER *next;
  int use_size;
  int vac_size;
};

typedef _MALLOC_HEADER MALLOC_HEADER;

struct _MY_MALLOC
{
  MALLOC_HEADER wrk;
  void *adrs;
  int size;
};

typedef _MY_MALLOC MY_MALLOC;

void my_mallocInit(MY_MALLOC *my_malloc, void *adrs, int size);
void* my_mallocMalloc(MY_MALLOC *my_malloc, int size, int align_bit);
void my_mallocFree(MY_MALLOC *my_malloc, void *adrs);
int my_mallocQueryTotalFreeMem(MY_MALLOC *my_malloc);
int my_mallocQueryMaxFreeMem(MY_MALLOC *my_malloc);
void my_mallocDrawMemory(MY_MALLOC *my_malloc, void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);
