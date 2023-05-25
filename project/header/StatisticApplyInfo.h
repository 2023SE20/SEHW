/**
 * Project Untitled
 */


#ifndef _STATISTICAPPLYINFO_H
#define _STATISTICAPPLYINFO_H

#include "StatisticApplyInfoUI.h"
#include "Member.h"

class StatisticApplyInfo {
private:
  StatisticApplyInfoUI* statisticApplyInfoUI();
public: 
  StatisticApplyInfoUI* getStatisticApplyInfoUI();
  void printApplyInfo(Member* member);
  void setStatisticApplyInfoUI(StatisticApplyInfoUI* StatisticApplyInfoUI);
  
};

#endif //_STATISTICAPPLYINFO_H