#pragma once

#include "gphaseTypes.h"

/// Init functions, no arguments
void init_super();

/// End functions, no arguments
void end_super();

/// Pre functions, contains GPHASE_ID argument
/// and returns GPHASE_ID
GPHASE_ID pre_super(GPHASE_ID gphaseId);

/// After functions, contains GPHASE_ID argument
/// and returns GPHASE_ID
GPHASE_ID after_super(GPHASE_ID gphaseId);