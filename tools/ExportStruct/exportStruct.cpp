#include <filesystem>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

const char* FILE_NAME = "D:\\Games\\Emulator\\PS2\\Games\\Fatal Frame\\Europe\\Debug\\Project Zero 2 Prototype (Feb_6,_2004_prototype)\\SLES_523.elf";

const int NUM_ELEMENTS = 0x118B;

const int OFFSET_ADDRESS = 0x2DE3D0;

const int ELF_OFFSET_ADDRESS = 0x003dd3d0;

const int OFFSET_DIFF = ELF_OFFSET_ADDRESS - OFFSET_ADDRESS;

struct StructToConvert
{
  char a;
  char b;
  char c;
  char d;
  int e;
};

char* readFullFile()
{
  std::ifstream infile(FILE_NAME, std::ios::binary);

  auto fileSize = std::filesystem::file_size(FILE_NAME);

  infile.seekg(0, std::ios::beg);

  char *buffer = new char[fileSize];

  infile.read(buffer, fileSize);

  infile.close();

  return buffer;
}

StructToConvert* readFileFromOffset()
{
  std::ifstream infile(FILE_NAME, std::ios::binary);

  infile.seekg(OFFSET_ADDRESS, std::ios::beg);

  int length = sizeof(StructToConvert) * NUM_ELEMENTS;

  char *buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  return (StructToConvert*) buffer;
}

void printStructCode(const StructToConvert* structToConvert)
{
  //printf("inline Zero2FileInfo filename_dat_us[0x106B] = \n{");

  auto fullFile = readFullFile();

  int totalFiles = 0;
  for(int i = 0; i < NUM_ELEMENTS; i++)
  {
    // Since it is a pointer in the elf
    char* a = (char*) &fullFile[structToConvert[i].e - OFFSET_DIFF];

    std::string b = a;

    auto justFilename = b.substr(0, b.find("."));

    if (justFilename == "ubi_rogo")
    {
      printf("\n%s", a);
      continue;
    }

    auto fileLanguage = justFilename.substr(justFilename.size() - 2, 2);

    if (b == "snp_tb2_nar_s.pk2" || b ==  "lang_sl.pk2")
    {
    }
    else if (fileLanguage == "_f" || fileLanguage == "_g" || fileLanguage == "_s"  || fileLanguage == "_i")
    {
      printf("\n%s", a);
      continue;
    }

    auto fileRegion = justFilename.substr(justFilename.size() - 3, 3);

    if (fileRegion == "PAL")
    {
      printf("\n%s", a);
      continue;
    }

    totalFiles += 1;

    //printf("\n\t{");
    //printf("\n\t\t%d,", structToConvert[i].a);
    //printf("\n\t\t%d,", structToConvert[i].b);
    //printf("\n\t\t%d,", structToConvert[i].c);
    //printf("\n\t\t%d,", structToConvert[i].d);
    //printf("\n\t\t(char*) \"%s\"", a);
    //printf("\n\t},");
  }

  //printf("\n};");
  printf("\n%d", totalFiles);
}

int main(int argc, char *argv[])
{
  StructToConvert* structToConvert = readFileFromOffset();

  printStructCode(structToConvert);

  return 0;
}