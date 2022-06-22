#include "mc_check.h"
#include "logging/printing.h"
#include "mc_check_card.h"
#include "mc_check_dir.h"
#include "spdlog/spdlog.h"
#include <cstring>

char *MemoryCardCheckInit(int param1, int param2, char *filename)
{
  mc_check_ctrl.eMcCheckCtrl = INIT;
  mc_check_ctrl.unknown_0x04 = param1;
  mc_check_ctrl.unknown_0x08 = param2;

  std::memset(mc_check_ctrl.filename, 0, sizeof(mc_check_ctrl.filename));

  return std::strcpy(mc_check_ctrl.filename, filename);
}

int MemoryCardCheckMain()
{
  if (mc_check_ctrl.eMcCheckCtrl != UNKNOWN2)
  {
    if (UNKNOWN2 < mc_check_ctrl.eMcCheckCtrl)
    {
      if (mc_check_ctrl.eMcCheckCtrl == UNKNOWN3)
      {
        MemoryCardGetDirInfoInit(mc_check_ctrl.unknown_0x04,
                                 mc_check_ctrl.unknown_0x08,
                                 mc_check_ctrl.filename);
        mc_check_ctrl.eMcCheckCtrl = UNKNOWN4;
      }
      else
      {
        auto logger = spdlog::get(GAME_LOGGER);
        logger->error("Error! MemoryCardCheckMain");

        return 0;
      }

      auto mcReady = MemoryCardGetDirInfoMain();

      if (mcReady != 1 && -1 < mcReady)
      {
        return 0;
      }

      return mcReady;
    }

    if (mc_check_ctrl.eMcCheckCtrl != INIT)
    {
      auto logger = spdlog::get(GAME_LOGGER);
      logger->error("Error! MemoryCardCheckMain");
      return 0;
    }

    MemoryCardGetCardInfoInit(mc_check_ctrl.unknown_0x04,
                              mc_check_ctrl.unknown_0x08);
    mc_check_ctrl.eMcCheckCtrl = UNKNOWN2;
  }

  auto mcReady = MemoryCardGetCardInfoMain();

  if (mcReady != 1)
  {
    if (-1 < mcReady)
    {
      return 0;
    }
    if (mcReady != -1)
    {
      return mcReady;
    }
  }

  mc_check_ctrl.eMcCheckCtrl = UNKNOWN3;

  return 0;
}
