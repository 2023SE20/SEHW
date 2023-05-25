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


vector<string> CancelApply::CancelToApply(NormalMember* normalMember, string number) {
    vector<string> result;
    vector<string> job, deadline, companyName;
    vector<int> applicantsCount, maxApplicants;
    normalMember->listEmployments(&job, &deadline, &companyName, &applicantsCount, &maxApplicants);
  
    result.push_back(); // 회사이름
    result.push_back(); // 업무
    // 여기서 과연 어떻게 해야 사업자번호로 회사를 찾느냐,,,
    return result;
}


void CancelApply::setCancelApplyUI(CancelApplytUI* addCancelApplyUI) {
    this->addCancelApplyUI = addCancelApplyUI;
}

CancelApplytUI* CancelApply::getCancelApplyUI() {
    return this->CancelApplyUI;
}