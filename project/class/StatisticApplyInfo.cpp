#include "../header/StatisticApplyInfo.h"
#include "../header/CompanyMember.h"
#include "../header/NormalMember.h"

/**
 * StatisticApplyInfo implementation
 */


map<string, int> StatisticApplyInfo::printApplyInfo(Member* member) {
  // vector<string> job, deadline, companyName;
  // vector<int> applicantsCount, maxApplicants;
  map<string, vector<string>> dataMap;
  map<string, int> result;
  
  if (typeid(*member) == typeid(CompanyMember)) { // 회사회원인 경우
    CompanyMember* companyMember = (CompanyMember*) member;
    companyMember->listEmployments(&dataMap);
    
    vector<string> job = dataMap.at("job");
    vector<string> applicantsCount = dataMap.at("applicantsCount");
    for (int i = 0; i < job.size(); i++) {
      result[job.at(i)] = stoi(applicantsCount.at(i));
    }
    // return result;
  } else { // 일반회원인 경우
    NormalMember* normalMember = (NormalMember*) member;
    // vector<string> businessNumber;

    normalMember->listEmployments(&dataMap);
    // map<string, int> applyInfo;

    vector<string> job = dataMap.at("job");
    for (int i = 0; i < job.size(); i++) {
      if (result.find(job.at(i)) == result.end()) {
        result[job.at(i)] = 1;
      } else {
        result[job.at(i)]++;
      }
    }
    
    return result;
  }
}

void StatisticApplyInfo::setStatisticApplyInfoUI(StatisticApplyInfoUI* statisticApplyInfoUI) {
  this->statisticApplyInfoUI = statisticApplyInfoUI;
}

StatisticApplyInfoUI* StatisticApplyInfo::getStatisticApplyInfoUI() {
  return this->statisticApplyInfoUI;
}