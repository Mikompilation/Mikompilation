#include "mc_check_dir.h"
#include "logging/printing.h"

char *MemoryCardGetDirInfoInit(int param1, int param2, char *dirname)
{
  mc_check_dir_ctrl.eMcCheckDirCtrl2 = E4;
  mc_check_dir_ctrl.eMcCheckDirCtrl = MC_CHECK_DIR_CTRL_ENUM_INIT;
  mc_check_dir_ctrl.unknown_0x04 = param1;
  mc_check_dir_ctrl.unknown_0x08 = param2;
  std::memset(mc_check_dir_ctrl.dir, 0, 0x37);
  return std::strcpy(mc_check_dir_ctrl.dir, dirname);
}

int MemoryCardGetDirInfoMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  return 0;
}
