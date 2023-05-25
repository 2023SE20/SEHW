#ifndef _CANCELAPPLY_H
#define _CANCELAPPLY_H

#include "CancelApplyUI.h"

class CancelApply {
private :
  NormalMember* normalMember;
  CancelApplyUI* cancelApplyUI;
public: 
  CancelApplyUI* getCancelApplyUI();
  vector<string> cancelToApply(NormalMember* normalMember, string number);
  void setCancelApplyUI(CancelApplyUI* cancelApplyUI);
};

#endif //_CANCELAPPLY_H