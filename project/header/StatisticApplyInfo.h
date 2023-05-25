#ifndef _STATISTICAPPLYINFO_H
#define _STATISTICAPPLYINFO_H

#include "StatisticApplyInfoUI.h"
#include "Member.h"
#include <map>

class StatisticApplyInfo {
private:
  StatisticApplyInfoUI* statisticApplyInfoUI;
public: 
  StatisticApplyInfoUI* getStatisticApplyInfoUI();
  map<string, int> printApplyInfo(Member* member);
  void setStatisticApplyInfoUI(StatisticApplyInfoUI* StatisticApplyInfoUI);
};

#endif //_STATISTICAPPLYINFO_H