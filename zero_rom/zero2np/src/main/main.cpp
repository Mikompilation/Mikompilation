#include "main.h"

int main(int argc, char** args)
{
  InitGPhaseSys();

  do
  {
    GPhaseSysMain();
  }
  while (true);

  return 0;
}

void init_super()
{
}

void end_super()
{
}

GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  return GPHASE_CONTINUE;
}

GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  return GPHASE_CONTINUE;
}