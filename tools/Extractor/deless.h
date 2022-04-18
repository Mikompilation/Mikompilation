#pragma once

typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short word;

struct LESS {
  uint TOTAL_SIZE;
  byte sign[4];
  uint UNK;
  uint CHUNKS;
  uint DATA_OFFSET;
  uint UNK2;
  uint ZERO;
  uint TOTAL_ZSIZE;
};

struct chunk {
  word SKIP;
  word CHUNK_ZSIZE;

  chunk() : SKIP(1), CHUNK_ZSIZE(0) {}
};

void Decompress(const char *source, const char *target);
void lzss_set_window(byte *window, int window_size, int init_chr);
int unlzss(byte *src, int srclen, byte *dst, int dstlen, byte *parameters);


