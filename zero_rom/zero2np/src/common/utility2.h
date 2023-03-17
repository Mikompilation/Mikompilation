#pragma once

#include <stdint.h>

template<typename T>
T *OffsetToPtr(const void *ptr, const int offset)
{
#if INTPTR_MAX == INT64_MAX
  return (T *) ((int64_t) ptr + offset);
#elif INTPTR_MAX == INT32_MAX
  return (T *) ((int) ptr + (int) offset);
#endif
}

inline bool isMemoryAligned(const void *ptr)
{
#if INTPTR_MAX == INT64_MAX
  return ((int64_t)ptr & 0xf) == 0;
#elif INTPTR_MAX == INT32_MAX
  return ((int)ptr & 0xf) == 0;
#endif
}