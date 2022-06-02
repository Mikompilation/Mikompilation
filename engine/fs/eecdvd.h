#pragma once

#include <string>
#include <thread>
#include <vector>

inline std::vector<std::thread> threadList = std::vector<std::thread>();

int LoadReq(int fileId, void *memoryAddress = nullptr, bool useParameterMemoryAddress = false);
void LoadFile(int fileId, void *memoryAddress);
bool IsLoadEnd(int fileId);
size_t GetFileSize_L(int fileId);
std::string GetGameFileWithPathFromFileId(int fileId);
bool IsLoadEndAll();
bool AllFileLoadIsEnd();
void ClearCompletedThreadList();