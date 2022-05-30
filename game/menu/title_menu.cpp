#include "title_menu.h"

TIM2_FILEHEADER *title_bg_addr;
TIM2_FILEHEADER *title_logo_addr;
TIM2_FILEHEADER *outgame_cmn_tex_addr;
void *title_bg_send_lock;
void *title_load_end;

void TitleInit()
{
  title_bg_addr = NULL;
  title_logo_addr = NULL;
  outgame_cmn_tex_addr = NULL;
  title_bg_send_lock = NULL;
  title_load_end = NULL;
}

void init_title_menu()
{
}