#pragma once

struct GAME_COSTUME {
  int mPlyrMdlNo;
  int mSisterMdlNo;
  int mPlyrAcsNo;
  int mSisterAcsNo;
};

int GetPlyrMdlNo();
void SetPlyrMdlNo(int iMdlNo);
int GetPlyrAcsNo();
void SetPlyrAcsNo(int iMdlNo);
int GetSisterMdlNo();
void SetSisterMdlNo(int iMdlNo);
int GetSisterAcsNo();
void SetSisterAcsNo(int iAcsNo);
