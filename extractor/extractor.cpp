#include "extractor.h"
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

void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile, std::filesystem::path outputFolder)
{
  ZeroFile *fileHd = (ZeroFile *) ReadFullFile(imgHdFile);

  std::ifstream fileDataBank(imgBdFile, std::ios::binary);

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < NUM_FILES_US; i++)
  {
    unsigned long startAddress = fileHd[i].address * PS2_SECTOR_SIZE;

    fileDataBank.seekg(startAddress, std::ios::beg);

    if (fileHd[i].size == 0)
    {
      continue;
    }

    std::string outputFile = outputFolder.string() + "/" + std::to_string(i) + ".bin";
    FILE *pFile = fopen(outputFile.c_str(), "wb+");

    for (int k = 0; k <= fileHd[i].size / PS2_SECTOR_SIZE; k++)
    {
      fileDataBank.read(fileBuffer, PS2_SECTOR_SIZE);
      fwrite(&fileBuffer, sizeof(char), PS2_SECTOR_SIZE, pFile);
    }

    fclose(pFile);
  }

  fileDataBank.close();
  delete[] fileHd;
}