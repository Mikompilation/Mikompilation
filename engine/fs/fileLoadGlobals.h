#pragma once
#include <filesystem>

inline const int NUM_FILES_US = 0x769;

inline std::filesystem::path gameFolder("GAME_PATH");

struct GameFile
{
  bool isFileLoadedInMemory = false;
  void *fileContent;
};

GameFile gameFiles[NUM_FILES_US];