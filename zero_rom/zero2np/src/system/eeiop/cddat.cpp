#include "cddat.h"
#include "ee_iop.h"
#include <cstring>

static char title_root_path[200];
static FNAME_DAT *p_fname_dat;
static char **p_filename_path;
static EXT_LABEL *p_ext_lbl;
static int project_file_num;
static CD_DAT_TBL *p_cd_dat;
static SET_CD_DAT set_cd_dat;

void cddatInit(char *cd_dat_name, char *pc_path, FNAME_DAT *p_file_name,
               char **p_path_name, CD_DAT_TBL *cd_tbl, EXT_LABEL *ext_lbl,
               int total_file_num)
{
  strcpy(set_cd_dat.file_name, cd_dat_name);
  iopCommandRegister(REQ_SET_CD_DAT, set_cd_dat.file_name, 0x10);
  strcpy(title_root_path, pc_path);
  p_fname_dat = p_file_name;
  p_filename_path = p_path_name;
  p_ext_lbl = ext_lbl;
  project_file_num = total_file_num;
  p_cd_dat = cd_tbl;
  ee_iopMain();
  ee_iopMain();
}
