#include "../header/StatisticApplyInfo.h"
#include "../header/CompanyMember.h"
#include "../header/NormalMember.h"

/**
 * StatisticApplyInfo implementation
 */


map<string, int> StatisticApplyInfo::printApplyInfo(Member* member) {
  vector<string> job, deadline, companyName;
  vector<int> applicantsCount, maxApplicants;
  
  if (typeid(*member) == typeid(CompanyMember)) { // 회사회원인 경우
    CompanyMember* companyMember = (CompanyMember*) member;
    companyMember->listEmployments(&job, &deadline, &maxApplicants, &applicantsCount);
    map <string, int> result;
    
    for (int i = 0; i < job.size(); i++) {
      result[job.at(i)] = applicantsCount.at(i);
    }
    return result;
  } else { // 일반회원인 경우
    NormalMember* normalMember = (NormalMember*) member;
    vector<string> businessNumber;

    normalMember->listEmployments(&job, &deadline, &companyName, &businessNumber, &applicantsCount, &maxApplicants);
    map<string, int> applyInfo;

    for (int i = 0; i < job.size(); i++) {
      if (applyInfo.find(job.at(i)) == applyInfo.end()) {
        applyInfo[job.at(i)] = 1;
      } else {
        applyInfo[job.at(i)]++;
      }
    }
    
    return applyInfo;
  }
}

void StatisticApplyInfo::setStatisticApplyInfoUI(StatisticApplyInfoUI* statisticApplyInfoUI) {
  this->statisticApplyInfoUI = statisticApplyInfoUI;
}

StatisticApplyInfoUI* StatisticApplyInfo::getStatisticApplyInfoUI() {
  return this->statisticApplyInfoUI;
}