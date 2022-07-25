#pragma once

#include <string>

inline const std::string game_dir_name[6] = {
    "BESLES-52384ZERO-BD",
    "BESLES-52384ZERO-BA1",
    "BESLES-52384ZERO-BA2",
    "BESLES-52384ZERO-BA3",
    "BESLES-52384ZERO-BA4",
    "BESLES-52384ZERO-BA5"
};

void MemoryCardSoftResetLock();
void* MemoryCardPlayDataHeadInit();
char* MemoryCardMakeSearchDirPath(char *filename, int dir);
char* MemoryCardSetDirName(char *filename, int dir);