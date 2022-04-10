#pragma once
#include <filesystem>

const int NUM_FILES_US = 0x769;

std::filesystem::path gameFolder("GAME_PATH");

struct GameFile
{
  bool isFileLoadedInMemory = false;
  void *fileContent;
};

GameFile gameFiles[NUM_FILES_US];