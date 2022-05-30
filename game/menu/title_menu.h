#include "texture/Texture.h"
#include "texture/tim2.h"

extern TIM2_FILEHEADER *title_bg_addr;
extern TIM2_FILEHEADER *title_logo_addr;
extern TIM2_FILEHEADER *outgame_cmn_tex_addr;
extern void *title_bg_send_lock;
extern void *title_load_end;

void TitleInit();
void init_title_menu();