#include "printing.h"

void printVectorC(Vector4 *vector, const char *details)
{
  printf("%s (%ff,%ff,%ff,%ff)\n", details, vector->x, vector->y, vector->z, vector->w);
}
