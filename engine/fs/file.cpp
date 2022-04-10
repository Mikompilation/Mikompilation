#include "file.h"
#include "fileLoadGlobals.h"
#include <fstream>

int LoadReq(int fileId, void *memoryAddress)
{
  if (gameFiles[fileId].isFileLoadedInMemory)
  {
    return 0;
  }

  std::string filename = gameFolder.string() + "/" + std::to_string(fileId) + ".bin";
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(0, std::ios::end);
  size_t length = infile.tellg();
  infile.seekg(0, std::ios::beg);

  char *buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  gameFiles[fileId].isFileLoadedInMemory = true;
  gameFiles[fileId].fileContent = buffer;

  return 0;
}
