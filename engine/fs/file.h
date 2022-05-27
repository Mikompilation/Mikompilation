#pragma once

#include <thread>
#include <vector>

std::vector<std::thread*> threadList = std::vector<std::thread*>();

int LoadReq(int fileId, void *memoryAddress);
void LoadFile(int fileId);
bool isFileLoadEnd(int threadId);