#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

const char* FILE_NAME = "";

const int NUM_ELEMENTS = 94;

const int OFFSET_ADDRESS = 0x218758;

struct StructToConvert
{
  int a;
  int b;
  int c;
  int d;
};

StructToConvert* readFullFile()
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
  printf("GPHASE_STRUCT gphase_tbl[%d] = \n{", NUM_ELEMENTS);

  for(int i = 0; i < NUM_ELEMENTS; i++)
  {
    printf("\n\t{");
    printf("\n\t\t(GPHASE_LAYER) %d,", structToConvert[i].a);
    printf("\n\t\t(GPHASE_ID) %d,", structToConvert[i].b);
    printf("\n\t\t(GPHASE_ID) %d,", structToConvert[i].c);
    printf("\n\t\t(GPHASE_ID) %d", structToConvert[i].d);
    printf("\n\t},");
  }

  printf("\n};");
}

int main(int argc, char *argv[])
{
  StructToConvert* structToConvert = readFullFile();

  printStructCode(structToConvert);

  return 0;
}