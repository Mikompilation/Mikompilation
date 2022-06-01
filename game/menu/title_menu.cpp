#include "title_menu.h"
#include "logging/printing.h"

TIM2_FILEHEADER *title_bg_addr;
TIM2_FILEHEADER *title_logo_addr;
TIM2_FILEHEADER *outgame_cmn_tex_addr;
void *title_bg_send_lock;
void *title_load_end;

void TitleInit()
{
  title_bg_addr = nullptr;
  title_logo_addr = nullptr;
  outgame_cmn_tex_addr = nullptr;
  title_bg_send_lock = nullptr;
  title_load_end = nullptr;
}

void init_title_menu()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}