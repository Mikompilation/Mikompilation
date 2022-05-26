#include <iostream>
#include <iomanip>

#define MB(x) ((size_t) (x) << 20)

static uint32_t ps2MaxMemory = MB(32);
static uint32_t xboxMaxMemory = MB(64);
static uint32_t debugMaxMemory = MB(128);

struct Memory
{
   uint32_t* memory;
   uint32_t malloc(uint32_t mem);
   void free();
};