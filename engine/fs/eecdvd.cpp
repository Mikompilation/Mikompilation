#include "eecdvd.h"
#include "iopsys.h"
#include "logging/printing.h"
#include "spdlog/spdlog.h"

#include <fstream>

int LoadReq(int fileId, void *memoryAddress, bool useParameterMemoryAddress)
{
  if (gameFiles[fileId].isFileLoadedInMemory)
  {
    return 0;
  }

  void* fileTargetAddress = useParameterMemoryAddress ? memoryAddress : (void*) nullptr;

  threadList.emplace_back(std::thread(LoadFile, fileId, fileTargetAddress));

  return fileId;
}

void ClearCompletedThreadList()
{
  for (int i = 0; i < threadList.size();)
  {
    std::thread &currentThread = threadList[i];

    if (!currentThread.joinable())
    {
      i += 1;
      continue;
    }

    currentThread.join();

    threadList.erase(threadList.begin() + i);
  }
}

bool IsLoadEnd(int fileId)
{
  if (!gameFiles[fileId].isFileLoadedInMemory)
  {
    return false;
  }

  ClearCompletedThreadList();

  return gameFiles[fileId].isFileLoadedInMemory;
}

void LoadFile(int fileId, void *memoryAddress)
{
  auto filename = GetGameFileWithPathFromFileId(fileId);

  if (!std::filesystem::exists(filename))
  {
    auto engineLogger = spdlog::get(ENGINE_LOGGER);
    engineLogger->critical("File 0x{:x} could not be found in your game_files folder", fileId);
    return;
  }

  auto fileSize = GetFileSize_L(fileId);

  std::ifstream infile(filename, std::ios::binary);

  char *buffer = memoryAddress == nullptr ? new char[fileSize] : (char*) memoryAddress;

  infile.read(buffer, fileSize);

  infile.close();

  gameFiles[fileId].fileSize = fileSize;
  gameFiles[fileId].fileContent = buffer;
  gameFiles[fileId].isFileLoadedInMemory = true;
}

size_t GetFileSize_L(int fileId)
{
  std::string filename = GetGameFileWithPathFromFileId(fileId);

  if (!std::filesystem::exists(filename))
  {
    auto engineLogger = spdlog::get(ENGINE_LOGGER);
    engineLogger->critical("File 0x{:x} could not be found in your game_files folder", fileId);
    return -1;
  }

  return std::filesystem::file_size(filename);
}

std::string GetGameFileWithPathFromFileId(int fileId)
{
  return (gameFolder / (std::to_string(fileId) + ".bin")).string();
}

bool IsLoadEndAll()
{
  return AllFileLoadIsEnd();
}

bool AllFileLoadIsEnd()
{
  ClearCompletedThreadList();
  return threadList.empty();
}