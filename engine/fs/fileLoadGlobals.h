#pragma once
#include <filesystem>

inline const int NUM_FILES_US = 0x106B;

inline std::filesystem::path gameFolder("game_files/");

struct GameFile
{
  bool isFileLoadedInMemory = false;
  size_t fileSize;
  void *fileContent;
};

inline GameFile gameFiles[NUM_FILES_US];