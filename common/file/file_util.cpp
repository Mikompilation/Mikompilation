#include "file_util.h"
#include <fstream>

char *ReadFullFile(const char *filename)
{
  char *buffer;
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(0, std::ios::end);
  size_t length = infile.tellg();
  infile.seekg(0, std::ios::beg);

  buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  return buffer;
}
