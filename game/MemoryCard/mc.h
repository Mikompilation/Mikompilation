#pragma once
#include <filesystem>
#include <iostream>

#define MB(x) ((size_t) (x) << 20)

namespace fs = std::filesystem;

inline fs::path cardPath;

inline uint32_t *memoryCard;

void MemoryCardInit();