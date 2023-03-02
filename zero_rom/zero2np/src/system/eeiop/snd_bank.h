#pragma once

#include "snd_3d.h"

typedef enum
{
  SND_BANK_NOT_USE = 0,
  SND_BANK_NOT_READY = 1,
  SND_BANK_USE = 2,
  SND_BANK_ILLEGAL_SOUND_NO = 3,
  SND_BANK_OK = 4
} _SND_BANK_STATUS;

typedef _SND_BANK_STATUS SND_BANK_STATUS;

struct _VOICE_ATTR
{
  short unsigned int effect : 1;
  short unsigned int type : 3;
  short unsigned int s3d : 1;
  short unsigned int loop : 1;
  short unsigned int core : 1;
  short unsigned int male : 1;
  short unsigned int dummy;
};

typedef _VOICE_ATTR VOICE_ATTR;

struct _SOUND_INFO
{
  int smpl_rate;
  int offset;
  short int pitch;
  short int vol;
  short unsigned int adsr1;
  short unsigned int adsr2;
  VOICE_ATTR attr;
  short int pan;
  int loopstart;
  int loopend;
};

typedef _SOUND_INFO SOUND_INFO;

struct _SND_BANK_FILE
{
  short int m_Ready;
  short int m_RefCnt;
  int m_FileNo;
  void *m_pAdrs;
  int m_Size;
};

typedef _SND_BANK_FILE SND_BANK_FILE;

struct _SND_BANK
{
  unsigned int use : 1;
  void *s3d;
  SND_BANK_FILE *pSndBDFile;
  SND_BANK_FILE *pSndHXDFile;
  int id;
};

typedef _SND_BANK SND_BANK;

void SndBankSetLoadPriority(int iNewPriority);
int SndBankGetLoadPriority();
int SndBankGetOneWrkSize();
void *SndBankInitAll(void *wrk_buffer, int num, int load_priority);
int SndBankGetFreeBankNum();
int SndBankNew(int file_no, int header_file_no, int size);
int SndBankIsReady(int bank_no);
void SndBankPrintStatus();
int SndBankGetInfo(int bank_no, int *num, SOUND_INFO **info);
int SndBankRelease(int bank_no);
int SndBankSet3D(int bank_no, float *pos);
int SndBankIsLoopSnd(int bank_no, int no);
int SndBankPlay(int bank_no, int no, int effect, int loop, int vol, int pitch,
                int fade_time, SND_3D_SET *s3s);
SND_BANK_STATUS SndBankGetFileNo(int bank_no, int *file_no);