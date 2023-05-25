#include "../header/CancelApply.h"

/**
 * CancelApply implementation
 */

vector<string> CancelApply::cancelToApply(NormalMember* normalMember, string number) {
    vector<string> result;
    map<string, vector<string>> dataMap;
    normalMember->listEmployments(&dataMap);

    vector<string> job = dataMap.at("job");
    vector<string> businessNumber = dataMap.at("businessNumber");
    vector<string> companyName = dataMap.at("companyName");
    for (int i = 0; i < job.size(); i++) {
      if (number == businessNumber.at(i)) {
        result.push_back(companyName.at(i));
        result.push_back(job.at(i));
        (normalMember->getEmploymentCollection())->deleteEmployment(i);
        return result;
      }
    }

    return result;
}

void CancelApply::setCancelApplyUI(CancelApplyUI* addCancelApplyUI) {
    this->cancelApplyUI = addCancelApplyUI;
}

CancelApplyUI* CancelApply::getCancelApplyUI() {
    return this->cancelApplyUI;
}