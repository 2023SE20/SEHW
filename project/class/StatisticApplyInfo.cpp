/**
 * Project Untitled
 */


#include "StatisticApplyInfo.h"
#include "CompanyMember.h"
#include "NormalMember.h"
/**
 * StatisticApplyInfo implementation
 */


map<string, int> StatisticApplyInfo::printApplyInfo(Member* member, vecotr<string>* job, vector<int>* applicantscount) {
  vector<string> deadline, companyName;
  vector<int> applicantscount, maxApplicants;
  
  if(typeid(*currentMember) == typeid(CompanyMember)){ // 회사회원인 경우
    CompanyMember* companyMember = (CompanyMember*) member;
    companyMember->listEmployments(&job, &deadline, &maxApplicants, &applicantscount);
    map <string, int> result;
    for(auto iter = job.begin(); iter!= job.end();iter++){
      result[job.at(iter)] = applicantscount.at(iter);
    }
    return result;
  }
  else{ // 일반회원인 경우
    NormalMember* normalMember = (NormalMember*) member;
    normalMember->listEmployments(&job, &deadline,&companyName,&applicantscount,&maxApplicants);
    map<string, int> applyInfo;
    for(auto iter = job.begin(); iter!= job.end(); iter++){ // 업무 지원횟수 입력
      if(applyInfo.find(job[iter]) == m.end()) {  // 못찾은 경우
        applyInfo[job[iter]] = 1;          // 업무를 키값으로 1을 입력
      }
      else{
        int tmp = applyInfo[job[iter]];
        tmp += 1;
        applyInfo[job[iter]] = tmp;
      }
    }
    
    return applyInfo;
  }
}

void StatisticApplyInfo::setStatisticApplyInfoUI(StatisticApplyInfoUI* StatisticApplyInfoUI){
  this->statisticApplyInfoUI = StatisticApplyInfoUI;
}
StatisticApplyInfoUI* StatisticApplyInfo::getStatisticApplyInfoUI(){
  return this->StatisticApplyInfoUI;
}