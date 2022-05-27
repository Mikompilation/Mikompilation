#include "file.h"
#include "fileLoadGlobals.h"
#include <fstream>

int LoadReq(int fileId, void *memoryAddress)
{
  if (gameFiles[fileId].isFileLoadedInMemory)
  {
    return 0;
  }

  threadList.push_back(new std::thread(LoadFile, fileId));

  return fileId;
}

bool isFileLoadEnd(int fileId)
{
  if (!gameFiles[fileId].isFileLoadedInMemory)
  {
    return false;
  }

  for (int i = 0; i < threadList.size();)
  {
    auto currentThread = threadList[i];

    if (currentThread->joinable())
    {
      i += 1;
      continue;
    }

    threadList.erase(threadList.begin() + i);

    delete currentThread;
  }

  return gameFiles[fileId].isFileLoadedInMemory;
}

void LoadFile(int fileId)
{
  std::string filename = gameFolder.string() + "/" + std::to_string(fileId) + ".bin";
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
