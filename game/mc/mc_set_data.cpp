#include "mc_set_data.h"
#include "../game_main.h"
#include "mc.h"
#include <cstring>

void MemoryCardSoftResetLock()
{
  SoftResetLock();
}

void *MemoryCardPlayDataHeadInit()
{
  return std::memset(&mc_play_data_head, 0, sizeof(MC_PLAY_DATA_HEAD));
}

char *MemoryCardMakeSearchDirPath(char *filename, int dir)
{
  std::memset(filename, 0, 0x37);
  MemoryCardSetDirName(filename, dir);
  return std::strcat(filename, "/*");
}

char *MemoryCardSetDirName(char *filename, int dir)
{
  std::memset(filename, 0, 0x15);

  return dir < 6 ? std::strcpy(filename, game_dir_name[dir].c_str()) : nullptr;
}
