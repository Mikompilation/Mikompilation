#include "deless.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>

#define AlignUp(x, r) ((x) + ((r) -1)) / (r) * (r)

// modified by Luigi Auriemma
/**************************************************************
	LZSS.C -- A Data Compression Program
	(tab = 4 spaces)
***************************************************************
	4/6/1989 Haruhiko Okumura
	Use, distribute, and modify this program freely.
	Please send me your improved versions.
		PC-VAN		SCIENCE
		NIFTY-Serve	PAF01022
		CompuServe	74050,1022
**************************************************************/

LESS hdr = {0, {'L', 'E', 'S', 'S'}, 1 << 15, 0, 0, 32, 0, 0};

chunk chdr;

void Decompress(const char *source, const char *target)
{
  uint i, l;

  FILE *f = fopen(source, "rb");

  if (f == 0)
  {
    return;
  }

  FILE *g = fopen(target, "wb+");

  if (g == 0)
  {
    fclose(f);
    return;
  }

  enum
  {
    unpbufsize = 1 << 20,
    cmpbufsize = 1 << 20
  };

  byte *unpbuf = new byte[unpbufsize];

  byte *cmpbuf = new byte[cmpbufsize];

  l = fread(&hdr, 1, sizeof(hdr), f);

  if (l != sizeof(hdr))
  {
    fclose(f);
    fclose(g);
    delete[] unpbuf;
    delete[] cmpbuf;
    return;
  }

  chunk *pc = new chunk[hdr.CHUNKS];

  fread(pc, sizeof(chunk), hdr.CHUNKS, f);

  fseek(f, hdr.DATA_OFFSET, SEEK_SET);

  for (i = 0; i < hdr.CHUNKS; i++)
  {
    chunk &chdr = pc[i];

    l = fread(cmpbuf, 1, AlignUp(chdr.CHUNK_ZSIZE, 16), f);
    if (l > chdr.CHUNK_ZSIZE) l = chdr.CHUNK_ZSIZE;

    l = unlzss(cmpbuf, l, unpbuf, unpbufsize, (byte *) "12 4 2 2 0");

    fwrite(unpbuf, 1, l, g);
  }

  fclose(f);
  fclose(g);
  delete[] unpbuf;
  delete[] cmpbuf;
  delete[] pc;
}

void lzss_set_window(byte *window, int window_size, int init_chr)
{
  int i, n;
  switch (init_chr)
  {
    case -1:// Tales of Vesperia (thanks to delguoqing)
      memset(window, 0, window_size);
      for (i = 0;; i++)
      {
        n = (i * 8) + 6;
        if (n >= window_size) break;
        window[n] = i;
      }
      break;
    case -2:// invented
      for (i = 0; i < window_size; i++) window[i] = i;
      break;
    case -3:// invented
      for (i = window_size - 1; i >= 0; i--) window[i] = i;
      break;
    default:
      memset(window, init_chr, window_size);
      break;
  }
}

int unlzss(byte *src, int srclen, byte *dst, int dstlen, byte *parameters)
{
  int EI = 12; /* typically 10..13 */
  int EJ = 4;  /* typically 4..5 */
  int P = 2;   /* If match length <= P then output one character */
  int N;
  int F;
  int rless = P;// in some rare implementations it could be 0
  int init_chr = ' ';

  static int slide_winsz = 0;
  static byte *slide_win = NULL;
  byte *dststart = dst;
  byte *srcend = src + srclen;
  byte *dstend = dst + dstlen;
  int i, j, k, r, c;
  unsigned flags;

  if (parameters)
  {
    sscanf((char *) parameters, "%d %d %d %d %d", &EI, &EJ, &P, &rless, &init_chr);
    //get_parameter_numbers(parameters, &EI, &EJ, &P, &rless, &init_chr, NULL );
  }
  N = 1 << EI;
  F = 1 << EJ;

  if (N > slide_winsz)
  {
    slide_win = (byte *) realloc(slide_win, N);
    if (!slide_win) return -1;
    slide_winsz = N;
  }

  lzss_set_window(slide_win, N, init_chr);

  dst = dststart;
  srcend = src + srclen;
  r = (N - F) - rless;
  N--;// AND
  F--;// AND

  for (flags = 0;; flags >>= 1)
  {
    if (!(flags & 0x100))
    {
      if (src >= srcend) break;
      flags = *src++;
      flags |= 0xff00;
    }
    if (flags & 1)
    {
      if (src >= srcend) break;
      c = *src++;
      if (dst >= dstend) goto quit;//return -1; better?
      *dst++ = c;
      slide_win[r] = c;
      r = (r + 1) & N;
    }
    else
    {
      if (src >= srcend) break;
      i = *src++;
      if (src >= srcend) break;
      j = *src++;
      i |= ((j >> EJ) << 8);
      j = (j & F) + P;
      for (k = 0; k <= j; k++)
      {
        c = slide_win[(i + k) & N];
        if (dst >= dstend) goto quit;//return -1; better?
        *dst++ = c;
        slide_win[r] = c;
        r = (r + 1) & N;
      }
    }
  }
quit:
  return (dst - dststart);
}