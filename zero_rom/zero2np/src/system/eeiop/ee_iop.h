#pragma once

struct _EEIOP_DEF
{
  void *(*malloc64)(int /* size */);
  void (*free64)(void * /* adrs */);
  int command_send_buffer_size;
  char *iop_def_module;
  char *hil_file_name;
  char *dil_file_name;
  int media;
  int file_load_wrk_num;
  int snd_bank_wrk_num;
  int stream_auto_wrk_num;
  int auto_bd_wrk_num;
  int snd_stream_load_priority;
  int snd_bank_load_priority;
  int cmp_use_flg;
  int rom_boot;
};

typedef enum
{
  IOP_COM_END = 0,
  REQ_IOP_REBOOT = 1,
  REQ_CDVD_INIT = 2,
  REQ_SET_CD_DAT = 3,
  REQ_CD_READ_MODE_CHANGE = 4,
  REQ_IOP_SND_INIT = 5,
  REQ_SET_SND_EFFECT = 6,
  REQ_VOICE_STOP = 7,
  REQ_VOICE_LOOP_SET = 8,
  REQ_STREAM_CREATE = 9,
  REQ_STREAM_RELEASE = 10,
  REQ_STREAM_START = 11,
  REQ_STREAM_PLAY = 12,
  REQ_STREAM_STOP = 13,
  REQ_STREAM_ABORT = 14,
  REQ_STREAM_PAUSE = 15,
  REQ_STREAM_RESTART = 16,
  REQ_STREAM_SETVOL = 17,
  REQ_STREAM_SETPITCH = 18,
  REQ_SB_INIT = 19,
  REQ_SB_PLAY = 20,
  REQ_SB_STOP = 21,
  REQ_SB_PAUSE = 22,
  REQ_SB_RESTART = 23,
  REQ_SB_SETVOL = 24,
  REQ_SB_SETPITCH = 25,
  REQ_PCM_STREAMCREATE = 26,
  REQ_PCM_STREAMINIT = 27,
  REQ_PCM_STREAMSTART = 28,
  REQ_PCM_STREAMPLAY = 29,
  REQ_PCM_STREAMSTOP = 30,
  REQ_PCM_STREAMPAUSE = 31,
  REQ_PCM_STREAMRESTART = 32,
  REQ_PCM_STREAMSETVOL = 33,
  IOP_COMMAND_ENUM_FORCE_DWORD = -1
} _IOP_COMMAND_ENUM;

typedef enum
{
  ST_STREAM_NO_USE = 0,
  ST_STREAM_HEADER_LOAD = 1,
  ST_STREAM_PRE_LOAD = 2,
  ST_STREAM_PLAYING = 3,
  ST_STREAM_WAIT_END = 4,
  ST_STREAM_END = 5,
  ST_STREAM_START = 6,
  ST_STREAM_PRE_NO_USE = 7,
  ST_STREAM_FORCE_DWORD = -1
} _EEIOP_STREAM_STATUS;

typedef _EEIOP_STREAM_STATUS EEIOP_STREAM_STATUS;

struct _IOP_STREAM_RET
{
  EEIOP_STREAM_STATUS status;
  int offset;
};

typedef _IOP_STREAM_RET IOP_STREAM_RET;
typedef _IOP_COMMAND_ENUM IOP_COMMAND_ENUM;
typedef _EEIOP_DEF EEIOP_DEF;

void *ee_iopMalloc(int size);
void ee_iopFree(void *adrs);
int ee_iopGetNeedSize(EEIOP_DEF *def);
int ee_iopInit(EEIOP_DEF *def);
void WaitMainRpc();
void ee_iopMain();
void iopCommandFrameInit();
int iopCommandRegister(IOP_COMMAND_ENUM command, char *buf, int size2);
void SetCDReadMode(int mode);
int CheckEndPointThrough(int core, int voice_no);
IOP_STREAM_RET *GetStreamWrkRet(int wrk_id);
IOP_STREAM_RET *GetPCMStreamWrkRet(int wrk_id);
int GetVoiceNowAdrs(int core, int voice);
int GetVoiceLoopAdrs(int core, int voice);