#include "utility2.h"

unsigned int GetAlignUp(unsigned int a, int power)

{
  return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
}
