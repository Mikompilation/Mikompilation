#include "gameFunctions.h"
#include "logging/printing.h"

/// Init functions
void init_super()
{
  printNotImplemented("init_super", "gameFunctions.cpp");
}

/// End functions
void end_super()
{
  return;
}

/// Pre functions
GPHASE_ID pre_super(GPHASE_ID gphaseId)
{
  printNotImplemented("pre_super", "gameFunctions.cpp");

  return SUPER;
}

/// After functions
GPHASE_ID after_super(GPHASE_ID gphaseId)
{
  printNotImplemented("after_super", "gameFunctions.cpp");

  return DEFAULT;
}
