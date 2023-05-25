
#ifndef _CANCELAPPLYUI_H
#define _CANCELAPPLYUI_H

#include "NormalMember.h"

class CancelApply;

class CancelApplyUI {
private:
	FILE* inFp;
	FILE* outFp;
public:
	CancelApplyUI(FILE* inFp, FILE* outFp);
	void setInFp(FILE* inFp);
	void setOutFp(FILE* outFp);
	void startInterface();
	void selectApplyToCancel(NormalMember* currentMember, CancelApply* cancelApply);
};

#endif //_CANCELAPPLYUI_H