#pragma once

#include "basic_types.h"

struct OPTION_WRK
{
  int brightness;
  int snd_volume;
  unsigned char pad_vib;
  unsigned char pad_type;
  unsigned char view_vertical;
  unsigned char ana_replace;
  unsigned char credits;

  /// 0 -> Stereo\n
  /// 1 -> Mono
  unsigned char snd_output;
  unsigned char move_operate;
  unsigned char pad;
};

struct PAD_STRUCT
{
  int port;
  int slot;
  u_long128 pad_dma_buf[16];
  short unsigned int now;
  short unsigned int old;
  short unsigned int cnt[16];
  short unsigned int cnt_bak[16];
  short unsigned int one;
  short unsigned int rpt;
  short unsigned int rpt_time;
  unsigned char pad_direct[6];
  char flags;
  char step;
  char id;
};

typedef struct
{
  u_char stat;
  u_char second;
  u_char minute;
  u_char hour;
  u_char pad;
  u_char day;
  u_char month;
  u_char year;
} sceCdCLOCK;

struct SYS_WRK
{
  u_long count;
  sceCdCLOCK rtc;
  short int sreset_count;
  u_char sreset_ng;
  u_char video_mode;
  u_char language;
  int game_mode;
  u_char interrupt;
};

typedef struct
{
  u_char charge_range;
  u_char charge_max;
  u_char charge_speed;
  u_long point;
} CAM_CUSTOM_WRK;

struct DEBUG_WRK
{
  u_char fr_30;
  int mode;
  int menu_csr;
  int comp_mode;
  int init_movieviewer;
  int init_msg_viewer;
  int init_sndtest;
  int init_scntest;
  int init_screen_calib;
  int init_test2d;
  int init_motionviewer;
  int init_func;
  int init_subtitle_test;
  int dbg_menu_sw;
};

extern PAD_STRUCT pad[2];
extern short unsigned int *key_now[32];
extern short unsigned int *key_bak[32];
extern SYS_WRK sys_wrk;
extern OPTION_WRK opt_wrk;
extern CAM_CUSTOM_WRK cam_custom_wrk;
extern DEBUG_WRK debug_wrk;