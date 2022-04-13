#include <string>
#include <fstream>
#include <stdio.h>

using namespace std;

struct StructToConvert
{
  int a;
  int b;
  int c;
  int d;
};

char *readFullFile(const char *filename, int offsetAddress, int numElements)
{
  std::ifstream infile(filename, std::ios::binary);

  infile.seekg(offsetAddress, std::ios::beg);

  int length = sizeof(StructToConvert) * numElements;

  char *buffer = new char[length];

  infile.read(buffer, length);

  infile.close();

  return buffer;
}

void printStructCode(const StructToConvert* structToConvert, int numElements)
{
  printf("GPHASE_STRUCT gphase_tbl[%d] = \n{", numElements);

  for(int i = 0; i < numElements; i++)
  {
    printf("\n\t{");
    printf("\n\t\t(GPHASE_LAYER) %d,", structToConvert[i].a);
    printf("\n\t\t(GPHASE_ID) %d,", structToConvert[i].b);
    printf("\n\t\t(GPHASE_ID) %d,", structToConvert[i].c);
    printf("\n\t\t%d", structToConvert[i].d);
    printf("\n\t},");
  }

  printf("\n};");
}

int main(int argc, char *argv[])
{
  StructToConvert* structToConvert = (StructToConvert*) readFullFile("YOUR FILE WITH PATH HERE", 0x00000000, 0);

  printStructCode(structToConvert, 0);

  return 0;
}