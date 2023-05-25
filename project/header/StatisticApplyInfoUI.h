/**
 * Project Untitled
 */


#ifndef _STATISTICAPPLYINFOUI_H
#define _STATISTICAPPLYINFOUI_H

#include "Member.h"
#include "StatisticApplyInfo.h"

class StatisticApplyInfoUI {
  private: 
	FILE* inFp;
	FILE* outFp;
  public: 
  StatisticApplyInfoUI(FILE* inFp, FILE* outFp);
  void setInFp(FILE* inFp);
	void setOutFp(FILE* outFp);
  void startInterface();
  void statisticApplyInfo(Member* member, StatisticApplyInfo* statisticApplyInfo);  

};

#endif //_STATISTICAPPLYINFOUI_H