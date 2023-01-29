#include "title.h"

static void *title_bg_addr;
static void *title_logo_addr;
static void *outgame_cmn_tex_addr;
static unsigned char title_bg_send_lock;
static unsigned char title_move_movie_timer;
static TITLE_WRK title_wrk;
static TITLE_DISP_CTRL title_disp_ctrl;
static char title_load_end;

void TitleInit()
{
  title_bg_addr = nullptr;
  title_logo_addr = nullptr;
  outgame_cmn_tex_addr = nullptr;
  title_bg_send_lock = 0;
  title_load_end = 0;
}