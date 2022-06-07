#include "system.h"
#include "logging/printing.h"
#include "glob.h"

void InitSystemON()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

LANGUAGE GetSystemLanguage()
{
  auto systemLanguage = ENGLISH;

  switch(systemLanguage)
  {
    default:
    case ENGLISH:
      return ENGLISH;
    case FRENCH:
      return FRENCH;
    case SPANISH:
      return SPANISH;
    case GERMAN:
      return GERMAN;
    case ITALIAN:
      return ITALIAN;
  }
}

LANGUAGE GetLanguage()
{
  return sys_wrk.eLanguage;
}

void SetLanguage(LANGUAGE language)
{
  sys_wrk.eLanguage = language;
}