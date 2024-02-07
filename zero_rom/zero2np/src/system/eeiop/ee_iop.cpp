#include "ee_iop.h"
#include "../../../sce/sce_types.h"
#include "../../../sce/klib.h"
#include "logging/logging.h"
#include "snd.h"
#include "spdlog/spdlog.h"

#include <utility2.h>

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

void WaitMainRpc()
{
}

void ee_iopMain()
{
  SndMain();
  WaitMainRpc();
  //pcVar2 = iop_ret_buffer;
  //pIVar1 = &iop_ret;

  //do
  //{
  //  iop_ret.stream_ret[0] = *(IOP_STREAM_RET *) ((int) iop_ret_buffer + 8);
  //  iop_ret.stream_ret[1] = *(IOP_STREAM_RET *) ((int) iop_ret_buffer + 0x10);
  //  iop_ret.pcm_stream_ret[0] = *(IOP_STREAM_RET *) ((int) iop_ret_buffer + 0x18);
  //  iop_ret.voice_end = iop_ret_buffer;
  //  pcVar2 = (char *) ((int) pcVar2 + 0x20);
  //  pIVar1 = (IOP_RET_STATUS *) (pIVar1->pcm_stream_ret + 1);
  //} while (iop_ret_buffer != iop_ret_buffer + 0x1a0);

  //*(undefined8 *)pIVar1->voice_end = iop_ret_buffer._416_8_;

  iopCommandRegister(IOP_COM_END, nullptr, 0);
  FlushCache();
  unsigned int ssize = GetAlignUp(iop_com_offset, 4);
  unsigned int rsize = GetAlignUp(0x1a8, 4);
  //sceSifCallRpc(&sif_cli_data, 0, 1, iop_com_buffer, ssize, iop_ret_buffer, rsize, nullptr, nullptr);
  iopCommandFrameInit();
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