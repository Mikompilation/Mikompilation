#pragma once
#include <filesystem>

/// US: 0x106B
/// JP: 0x106B
/// EU: 0x118B
inline const int NUM_FILES = 0x118B;

enum FileInfo : int
{
  TECMO_LOGO_TEXTURE = 2,
  ZERO_LOGO_TEXTURE = 3,
  SYSTEM_TEXTURES_PAK2 = 4,
  GAME_TEXT = 0xD38,
  SUBTITLE_TEXT = 0x1184
};

/// New redefined struct for loaded file for the Mikompilation project
struct GameFile
{
  bool isFileLoadedInMemory = false;
  size_t fileSize;
  void *fileContent;
};

/// The struct used in the original game's source code
struct ZeroFile
{
  /// Contains the offset address in the archive file and
  /// some data like isFile or isCompressed on the first 3 bits
  uint32_t offset_info;
  uint32_t size;
  uint32_t sizeCompressed;
};

inline GameFile gameFiles[NUM_FILES];