#include "snd_bank.h"
#include "logging/logging.h"

static int snd_bank_max;
static SND_BANK *snd_bank;
static SND_BANK_FILE *snd_bd_file;
static SND_BANK_FILE *snd_hxd_file;
static int snd_bank_load_priority;

int SndBankNew(int file_no, int header_file_no, int size)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
  return 0;
}
