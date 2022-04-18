#include "extractor.h"
#include <fstream>
#include "deless.h"

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

char *ReadRangeFile(const char *filename, int startAddress, int readLength)
{
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(startAddress, std::ios::beg);

  char *buffer = new char[readLength];

  infile.read(buffer, readLength);

  infile.close();

  return buffer;
}

void DecompressFile(int file, const std::filesystem::path outputFolder)
{
  std::string initialFile = outputFolder.string() + "/" + std::to_string(file) + ".bin";
  std::string targetFile = outputFolder.string() + "/" + std::to_string(file) + ".bin" + ".LED";

  Decompress(initialFile.c_str(), targetFile.c_str());

  std::filesystem::remove(initialFile);

  std::filesystem::rename(targetFile, initialFile);
}

void ExtractZero2GameFiles(const char *imgBdFile, const char *elf, const std::filesystem::path outputFolder)
{
  if (!std::filesystem::exists(outputFolder))
  {
    std::filesystem::create_directory(outputFolder);
  }

  std::ifstream fileDataBank(imgBdFile, std::ios::binary);
  Zero2File *fileHd = (Zero2File *)ReadRangeFile(elf, FILE_TABLE_ADDRESS_US_ZERO2, NUM_FILES_US_JP_ZERO2 * sizeof(Zero2File));

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < NUM_FILES_US_JP_ZERO2; i++)
  {
    printf("Extracting file %d/%d done\n", i, NUM_FILES_US_JP_ZERO2);

    FileType fileStatus = (FileType) (fileHd[i].info & 0b00000011);

    // Some files index are bugged and have a type File but with a size of 0 bytes
    if (fileStatus == NoFile ||
        (fileStatus == FileNotCompressed && fileHd[i].size == 0) ||
        (fileStatus == FileCompressed && fileHd[i].sizeCompressed == 0))
    {
      continue;
    }

    unsigned long startAddress = (fileHd[i].info >> 2) * PS2_SECTOR_SIZE;

    fileDataBank.seekg(startAddress, std::ios::beg);

    int size = fileStatus == FileNotCompressed ? fileHd[i].size : fileHd[i].sizeCompressed;

    std::string outputFile = outputFolder.string() + "/" + std::to_string(i) + ".bin";
    FILE *pFile = fopen(outputFile.c_str(), "wb+");

    for (int k = 0; k <= size / PS2_SECTOR_SIZE; k++)
    {
      fileDataBank.read(fileBuffer, PS2_SECTOR_SIZE);
      fwrite(&fileBuffer, sizeof(char), PS2_SECTOR_SIZE, pFile);
    }

    fclose(pFile);

    if (fileStatus == FileCompressed)
    {
      DecompressFile(i, outputFolder);
    }
  }

  fileDataBank.close();
  delete[] fileHd;
}

void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile, std::filesystem::path outputFolder)
{
  ZeroFile *fileHd = (ZeroFile *) ReadFullFile(imgHdFile);

  std::ifstream fileDataBank(imgBdFile, std::ios::binary);

  char fileBuffer[PS2_SECTOR_SIZE];

  for (int i = 0; i < NUM_FILES_US_ZERO; i++)
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

int main(int argc, char *argv[])
{
  ExtractZero2GameFiles("D:\\DecompressFiles\\IMG_BD_US.BIN", "D:\\DecompressFiles\\Fatal Frame 2 Undub\\full\\SLUS_207.66", "D:\\DecompressFiles\\Zero2_US\\cpp_version");

  return 0;
}