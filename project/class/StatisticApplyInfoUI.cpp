#include "../header/StatisticApplyInfo.h"

/**
 * StatisticApplyInfoUI implementation
 */

StatisticApplyInfoUI::StatisticApplyInfoUI(FILE* inFp, FILE* outFp) {
  this->inFp = inFp;
  this->outFp = outFp;
}

void StatisticApplyInfoUI::startInterface() {
  fprintf(outFp,"5.1. 지원 정보 통계\n");
}

void StatisticApplyInfoUI::setInFp(FILE* inFp) {
  this->inFp = inFp;
}

void StatisticApplyInfoUI::setOutFp(FILE* outFp) {
  this->outFp = outFp;
}

void StatisticApplyInfoUI::statisticApplyInfo(Member* member, StatisticApplyInfo* statisticApplyInfo) {
  map<string, int> applyInfo;
  applyInfo = statisticApplyInfo->printApplyInfo(member);

  for(auto iter = applyInfo.begin(); iter != applyInfo.end(); iter++){
    fprintf(outFp, "> %s %d \n", (iter->first).c_str(), iter->second);
  }
  fprintf(outFp, "\n");
}
