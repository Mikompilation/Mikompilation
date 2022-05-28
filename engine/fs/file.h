#pragma once

#include <thread>
#include <vector>

inline std::vector<std::thread> threadList = std::vector<std::thread>();

int LoadReq(int fileId, void *memoryAddress = nullptr);
void LoadFile(int fileId);
bool isFileLoadEnd(int fileId);
int32_t GetFileSize(int fileId);
bool IsLoadEndAll();
bool AllFileLoadIsEnd();
void ClearCompletedThreadList();