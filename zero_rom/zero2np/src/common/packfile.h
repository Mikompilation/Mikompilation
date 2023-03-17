#pragma once

#include "utility2.h"

struct PK2_HEAD
{
  int pack_num;
  int pad[3];
  unsigned int offset[1];
};

int64_t PakAlign128(int64_t address);
int GetNumInPak(int param_1);
void* GetFileInPak(PK2_HEAD *pak_file, int pak_id);
int GetFileSizeInPak(int *file, int fileId);
void* GetPakTaleAddr(PK2_HEAD *pakHead);
int Pk2GetNum(PK2_HEAD *pakHead);
int64_t Pk2GetAddr(PK2_HEAD *pakHead, int pakId);