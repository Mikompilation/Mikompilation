#include "plyr_mdl.h"

void InitCostume()
{
  SetPlyrMdlNo(0);
  SetSisterMdlNo(1);
  SetPlyrAcsNo(-1);
  SetSisterAcsNo(-1);
}

void SetPlyrMdlNo(int mdl_no)
{
  PlyrMdlNo = mdl_no;
}

void SetSisterMdlNo(int mdl_no)
{
  SisterMdlNo = mdl_no;
}

void SetPlyrAcsNo(int acs_no)
{
  PlyrAcsNo = acs_no;
}

void SetSisterAcsNo(int acs_no)
{
  SisterAcsNo = acs_no;
}
