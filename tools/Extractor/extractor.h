#pragma once
#include <filesystem>
#include <string>

const int PS2_SECTOR_SIZE = 0x800;
const int NUM_FILES_US_ZERO = 0x769;
const int NUM_FILES_US_JP_ZERO2 = 0x106B;
const int NUM_FILES_EU_ZERO2 = 0x118b;
const int FILE_TABLE_ADDRESS_US_ZERO2 = 0x1F40B8;

enum FileType : int
{
  NoFile,
  FileNotCompressed = 2,
  FileCompressed = 3,
  Unknown = 4
};

struct ZeroFile {
  unsigned int address;
  unsigned int size;
};

struct Zero2File {
  unsigned int info;
  unsigned int size;
  unsigned int sizeCompressed;
};

char *ReadFullFile(const char *filename);
void RunDeless();
void DecompressFile(int file);
void ExtractGameFilesFromBank(const char *imgHdFile, const char *imgBdFile, std::filesystem::path outputFolder);
void ExtractZero2GameFiles(const char *imgBdFile, const char *elf, const std::filesystem::path outputFolder);
int main(int argc, char *argv[]);