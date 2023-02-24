#include "ee_iop.h"
#include "logging/logging.h"
#include "snd.h"
#include "spdlog/spdlog.h"

static void *ee_iopInitSub(EEIOP_DEF *def, void *buffer)
{
  return nullptr;
}

int ee_iopInit(EEIOP_DEF *def)
{
  const auto programLogger = spdlog::get(PROGRAM_LOGGER);

  programLogger->info("{}: Original game sets up PS2 hardware modules",
                      __FUNCTION__);
  programLogger->info("pre ee_iopInit");
  auto buffer = ee_iopInitSub(def, nullptr);

  programLogger->info("pre SndInit");
  SndInit(def, buffer);

  return 0;
}