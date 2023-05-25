/**
 * Project Untitled
 */
  // CancelApplyUI* cancelApplyUI();
  // void CancelToApply(Employment* employment);
  // void setCancelApplyUI(CancelApplyUI* cancelApplyUI);

#include "CancelApply.h"

/**
 * CancelApply implementation
 */
/*Employment(string job, string deadline, string companyName, int maxApplicants);*/

vector<string> CancelApply::CancelToApply(NormalMember* normalMember, string number) {
    vector<string> result;
    vector<string> job, deadline, companyName, businessNumber;
    vector<int> applicantsCount, maxApplicants;
    normalMember->listEmployments(&job, &deadline, &companyName, &businessNumber, &applicantsCount, &maxApplicants);
    for(auto iter = businessNumber.begin(); iter!= businessNumber.end(); iter++){
      if(number == businessNumber.at(iter)){
        result.push_back(companyName.at(iter));
        result.push_back(job.at(iter));
        normalMember->employmentCollection->deleteEmployment(iter);
        return result;
      }
      else
        return 0;
    }
}


void CancelApply::setCancelApplyUI(CancelApplytUI* addCancelApplyUI) {
    this->addCancelApplyUI = addCancelApplyUI;
}

CancelApplytUI* CancelApply::getCancelApplyUI() {
    return this->CancelApplyUI;
}