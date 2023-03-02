#pragma once

struct _CD_DAT_TBL
{
  unsigned int cmp_flg : 1;
  unsigned int exist_flg : 1;
  unsigned int start_sector : 30;
  int size;
  int cmp_size;
};

typedef struct
{
  char cmp_flg;
  char path_no;
  char pad[2];
  char *name;
} FNAME_DAT;

typedef enum
{
  EXT_LABEL_PKS = 0,
  EXT_LABEL_CMP = 1,
  EXT_LABEL_PK2 = 2,
  EXT_LABEL_TM2 = 3,
  EXT_LABEL_PAK = 4,
  EXT_LABEL_OBJ = 5,
  EXT_LABEL_MDL = 6,
  EXT_LABEL_ANM = 7,
  EXT_LABEL_MOT = 8,
  EXT_LABEL_DMY = 9,
  EXT_LABEL_ZLD = 10,
  EXT_LABEL_MH = 11,
  EXT_LABEL_HXD = 12,
  EXT_LABEL_STR = 13,
  EXT_LABEL_BD = 14,
  EXT_LABEL_PSS = 15,
  EXT_LABEL_SLT = 16,
  EXT_LABEL_EFF = 17,
  EXT_LABEL_SCN = 18,
  EXT_LABEL_ICO = 19
} _EXTENSION_LABEL;

typedef _EXTENSION_LABEL EXT_LABEL;

struct _SET_CD_DAT
{
  char file_name[16];
};

typedef _SET_CD_DAT SET_CD_DAT;

typedef _CD_DAT_TBL CD_DAT_TBL;

void cddatInit(char *cd_dat_name, char *pc_path, FNAME_DAT *p_file_name,
               char **p_path_name, CD_DAT_TBL *cd_tbl, EXT_LABEL *ext_lbl,
               int total_file_num);
char GetFileExtLabel(int file_no);
int GetFileNum();
int GetFileStartSector(int file_no);
int GetFileSectorSize(int file_no);
unsigned int GetFileSize(int file_no);
unsigned int GetFileCmpSize(int file_no);
int cddatIsCmpFile(int file_no);
int cddatCompressFileNoUse();
int cddatCompressFileNoUseNo(int file_no);
char *GetFileName(int file_no);
void GetFileNameBuffer(int file_no, char *buf);