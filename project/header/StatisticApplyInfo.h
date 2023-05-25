/**
 * Project Untitled
 */


#ifndef _STATISTICAPPLYINFO_H
#define _STATISTICAPPLYINFO_H

#include "StatisticApplyInfoUI.h"

class StatisticApplyInfo {
private:
  StatisticApplyInfoUI* statisticApplyInfoUI();
public: 
  void printApplyInfo(Member* member);
};

#endif //_STATISTICAPPLYINFO_H