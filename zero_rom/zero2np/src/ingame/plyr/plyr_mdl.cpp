#include "plyr_mdl.h"

static GAME_COSTUME GameCostume;

int GetPlyrMdlNo()
{
  return GameCostume.mPlyrMdlNo;
}

void SetPlyrMdlNo(int iMdlNo)
{
  GameCostume.mPlyrMdlNo = iMdlNo;
}

int GetPlyrAcsNo()
{
  return GameCostume.mPlyrAcsNo;
}

void SetPlyrAcsNo(int iMdlNo)
{
  GameCostume.mPlyrAcsNo = iMdlNo;
}

int GetSisterMdlNo()
{
  return GameCostume.mSisterMdlNo;
}

void SetSisterMdlNo(int iMdlNo)
{
  GameCostume.mSisterMdlNo = iMdlNo;
}

int GetSisterAcsNo()
{
  return GameCostume.mSisterAcsNo;
}

void SetSisterAcsNo(int iAcsNo)
{
  GameCostume.mSisterAcsNo = iAcsNo;
}
