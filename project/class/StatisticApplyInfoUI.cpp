/**
 * Project Untitled
 */


#include "StatisticApplyInfoUI.h"

/**
 * StatisticApplyInfoUI implementation
 */

StatisticApplyInfoUI::StatisticApplyInfoUI(){

}

void StatisticApplyInfoUI::startInterface() {
    cout <<"5.1. 지원 정보 통계" << endl;
}

  void statisticApplyInfo(Member* member);
/**
 * @param Id
 */
void StatisticApplyInfoUI::statisticApplyInfo(Member* member, StatisticApplyInfo* statisticApplyInfo) {

  statisticApplyInfo->printApplyInfo();

}