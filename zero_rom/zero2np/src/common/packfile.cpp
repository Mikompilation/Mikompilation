#include "packfile.h"

int64_t PakAlign128(int64_t address)
{
  if ((address & 0xf) != 0)
  {
    address = (address - (address & 0xf)) + 0x10;
  }

  return address;
}

void* GetPakTaleAddr(PK2_HEAD *pakHead)
{
  unsigned int *offsetPtr = pakHead->offset;
  int offset_adrs = *offsetPtr;

  for (auto i = pakHead->pack_num; i > 0; i--)
  {
    offsetPtr = OffsetToPtr<unsigned int>(offsetPtr, offset_adrs + 0x10);
    offset_adrs = *offsetPtr;
  }

  return (void*) PakAlign128((int64_t) offsetPtr + 4);
}

int Pk2GetNum(PK2_HEAD *pakHead)
{
  if (pakHead != nullptr)
  {
    return pakHead->pack_num;
  }

  return 0;
}

int64_t Pk2GetAddr(PK2_HEAD *pakHead, int pakId)
{
  if (-1 < pakId && pakId < Pk2GetNum(pakHead))
  {
    return (int64_t) pakHead->pad + pakHead->offset[pakId] - 4;
  }

  return 0;
}

void* GetFileInPak(PK2_HEAD *pak_file, int pak_id)
{
  if (pak_id >= pak_file->pack_num)
  {
    return nullptr;
  }

  unsigned int* file_adrs = pak_file->offset;

  if (0 >= pak_id)
  {
    return file_adrs + 4;
  }

  int64_t offset_index = *file_adrs;

  while( true ) {
    file_adrs = (unsigned int *)((int64_t) file_adrs + offset_index + 0x10);
    pak_id -= 1;

    if (pak_id == 0)
    {
      break;
    }

    offset_index = *file_adrs;
  }

  file_adrs += 4;

  return file_adrs;
}