#include "printing.h"
#include "spdlog/spdlog.h"

int printVectorC(Vector4 *vector, const char *message)
{
  return printf("%s (%ff,%ff,%ff,%ff)\n", message, vector->x, vector->y,
                vector->z, vector->w);
}

int printLMatC(Vector4 *pVector4, const char *message)
{
  Vector4 *pVVar1;
  Vector4 *pVVar2;
  int iVar3;
  float fVar5;

  printf("%s", message);
  int i = 2;

  fVar5 = pVector4->x;
  Vector4 *currVector;

  while (i > 0)
  {
    i += -1;
    pVVar1 = pVector4 + 1;
    pVVar2 = pVector4 + 2;
    pVector4 = (Vector4 *) &pVector4->y;
    iVar3 = printf("%f %f %f\n", (double) fVar5, (double) pVVar1->x,
                   (double) pVVar2->x);
    fVar5 = *(float *) pVector4;
  }

  return iVar3;
}

void printNotImplemented(const char *loggerName, const char *methodName,
                         const char *fileName)
{
  const auto logger = spdlog::get(loggerName);
  logger->info("{} in {} not implemented", methodName, fileName);
}

void printError(const char *loggerName, const char *methodName,
                const char *error)
{
  const auto logger = spdlog::get(loggerName);
  logger->error("{} in {} error", methodName, error);
}