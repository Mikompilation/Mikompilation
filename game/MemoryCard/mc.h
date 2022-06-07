#pragma once
#include <filesystem>

namespace fs = std::filesystem;

inline fs::path savePath;

void MemoryCardInit();
void MemoryCardExeInit();