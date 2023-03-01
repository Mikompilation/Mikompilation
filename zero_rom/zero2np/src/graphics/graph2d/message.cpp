#include "message.h"
#include "logging/logging.h"

void SetASCIIString2(int pri, float x, float y, int type, u_char r, u_char g,
                     u_char b, char *str)
{
  SetASCIIString3(pri, x, y, type, r, g, b, 0x80, str);
}

void SetASCIIString3(int pri, float x, float y, int type, u_char r, u_char g,
                     u_char b, u_char a, char *str)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void SetString2(int pri, float x, float y, int type, u_char r, u_char g,
                u_char b, char *fmt)
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}
