#include "mc_check_dir.h"
#include "CONFIG.h"
#include "logging/printing.h"

char *MemoryCardGetDirInfoInit(int param1, int param2, char *dirname)
{
  mc_check_dir_ctrl.eMcCheckDirCtrl2 = MC_CHECK_DIR::E4;
  mc_check_dir_ctrl.eMcCheckDirCtrl = MC_CHECK_DIR::INIT;
  mc_check_dir_ctrl.unknown_0x04 = param1;
  mc_check_dir_ctrl.unknown_0x08 = param2;
  std::memset(mc_check_dir_ctrl.dir, 0, sizeof(mc_check_dir_ctrl.dir));
  return std::strcpy(mc_check_dir_ctrl.dir, dirname);
}

int MemoryCardGetDirInfoMain()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

  auto var1 = mc_check_dir_ctrl.eMcCheckDirCtrl2;

  if (mc_check_dir_ctrl.eMcCheckDirCtrl == MC_CHECK_DIR::INIT)
  {
    MemoryCardGetDirInfoReq(mc_check_dir_ctrl.unknown_0x04,
                            mc_check_dir_ctrl.unknown_0x08,
                            mc_check_dir_ctrl.dir);
  }

  return 0;
}

char *MemoryCardGetDirInfoReq(int param1, int param2, char *dirname)
{
  auto fullSavePath = saveFolder / std::string(dirname);
  return (char *) fullSavePath.c_str();
}
