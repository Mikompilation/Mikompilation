#include "ee_iop.h"
#include "../../../sce/sce_types.h"
#include "logging/logging.h"
#include "snd.h"
#include "spdlog/spdlog.h"

static void *(*ee_iop_malloc)(int /* size */);
static void (*ee_iop_free)(void * /* adrs */);
static char iop_com_buffer[4096];
static IOP_RET_STATUS iop_ret;
static char iop_ret_buffer[448];
static int iop_com_offset;
static sceSifClientData sif_cli_data;

static void *ee_iopInitSub(EEIOP_DEF *def, void *buffer)
{
  return nullptr;
}

int ee_iopInit(EEIOP_DEF *def)
{
  const auto programLogger = spdlog::get(PROGRAM_LOGGER);

  programLogger->info("{}: Original game sets up PS2 hardware modules",
                      __FUNCTION__);

  ee_iop_malloc = def->malloc64;
  ee_iop_free = def->free64;

  programLogger->info("pre ee_iopInit");
  auto buffer = ee_iopInitSub(def, nullptr);

  programLogger->info("pre SndInit");
  SndInit(def, buffer);

  return 0;
}

void ee_iopMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

int iopCommandRegister(IOP_COMMAND_ENUM command, char *buf, int size2)
{
  IOP_COMMAND_ENUM *cp;
  int size;

  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  assert((size2 & 3U) == 0 && "EEIOP COMMON Struct Is Not 4Byte Align!!");

  if (iop_com_offset + size2 + 4 < sizeof(iop_com_buffer))
  {
    size = iop_com_offset + 4;
    cp = (IOP_COMMAND_ENUM *) (iop_com_buffer + iop_com_offset);
    iop_com_offset += 4;
    *cp = command;

    if (size2 != 0)
    {
      memcpy(iop_com_buffer + size, buf, size2);
      iop_com_offset = iop_com_offset + size2;
    }

    size = 1;
  }
  else
  {
    printMessage(GAME_LOGGER, "iop_command_buffer over");
    size = 0;
  }

  return size;
}

void iopCommandFrameInit()
{
  iop_com_offset = 0;
}
