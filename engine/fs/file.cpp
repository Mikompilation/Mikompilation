#include "file.h"
#include "fileLoadGlobals.h"
#include "logging/printing.h"
#include "spdlog/spdlog.h"

#include <fstream>

int LoadReq(int fileId, void *memoryAddress)
{
  if (gameFiles[fileId].isFileLoadedInMemory)
  {
    return 0;
  }

  threadList.emplace_back(std::thread(LoadFile, fileId));

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

bool isFileLoadEnd(int fileId)
{
  if (!gameFiles[fileId].isFileLoadedInMemory)
  {
    return false;
  }

  ClearCompletedThreadList();

  return gameFiles[fileId].isFileLoadedInMemory;
}

void LoadFile(int fileId)
{
  std::string filename = gameFolder.string() + "/" + std::to_string(fileId) + ".bin";

  if (!std::filesystem::exists(filename))
  {
    auto engineLogger = spdlog::get(ENGINE_LOGGER);
    engineLogger->critical("File {:x} could not be found in your game_files folder", fileId);
    return;
  }

  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(0, std::ios::end);
  size_t length = infile.tellg();
  infile.seekg(0, std::ios::beg);

  char *buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  gameFiles[fileId].fileSize = length;
  gameFiles[fileId].fileContent = buffer;
  gameFiles[fileId].isFileLoadedInMemory = true;
}

/**
 * \brief Custom implementation to allow future file modding
 * \param fileId 
 * \return 
 */
int32_t GetFileSize(int fileId)
{
  std::string filename = gameFolder.string() + "/" + std::to_string(fileId) + ".bin";

  return std::filesystem::file_size(filename);
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