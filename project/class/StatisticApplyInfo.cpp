/**
 * Project Untitled
 */


#include "StatisticApplyInfo.h"
#include "CompanyMember.h"
#include "NormalMember.h"
/**
 * StatisticApplyInfo implementation
 */


/**
 * @param Id
 */
void StatisticApplyInfo::printApplyInfo(Member* member) {
  vector<string> job, deadline, companyName;
  vector<int> applicanstsCount, maxApplicants;
  
  if(){ // 회사회원인 경우
    CompanyMember* companyMember = (CompanyMember*) member;
    companyMember->listEmployments(&job, &deadline, &maxApplicants, &applicanstsCount);
    for(auto iter = job.begin(); iter!= job.end();iter++){
      cout << "{ "<< job.at(iter) << " " << applicanstsCount.at(iter) << endl;
    }
  }
  else{
    NormalMember* normalMember = (NormalMember*) member;
    normalMember->listEmployments(&job, &deadline,&companyName,&applicanstsCount,&maxApplicants);
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
    for(iterator iter = applyInfo.begin(); iter != applyInfo.end(); iter++){
      cout << "{" << iter->first << " " <<  iter->second << "}" << endl;
    }
  }

}