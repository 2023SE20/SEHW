#ifndef _CANCELAPPLY_H
#define _CANCELAPPLY_H

#include "Employment.h"
#include "CancelApply UI.h"
#include "NormalMember.h"
class CancelApply {
  private :
    NormalMember* normalMember;
    CancelApplyUI* cancelApplyUI;
public: 
  CancelApplyUI* getcancelApplyUI();
  void CancelToApply(Employment* employment);
  void setCancelApplyUI(CancelApplyUI* cancelApplyUI);
};

#endif //_CANCELAPPLY_H