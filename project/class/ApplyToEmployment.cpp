#include "../header/ApplyToEmployment.h"
#include "../header/CompanyMember.h"

#include <map>
using namespace std;

/**
 * ApplyToEmployment implementation
 */

ApplyToEmploymentUI* ApplyToEmployment::getApplyToEmploymentUI() {
    return this->applyToEmploymentUI;
}

void ApplyToEmployment::setNormalMember(NormalMember* normalMember) {
    this->normalMember = normalMember;
}

void ApplyToEmployment::setApplyToEmploymentUI(ApplyToEmploymentUI* applyToEmploymentUI) {
    this->applyToEmploymentUI = applyToEmploymentUI;
}

vector<string> ApplyToEmployment::apply(string businessNumber, vector<Employment*> employments) {
    vector<string> result;

    for (int i = 0; i < employments.size(); i++) {
        if (businessNumber == employments.at(i)->getBusinessNumber()) {
            result.push_back(employments.at(i)->getCompanyName());
            result.push_back(employments.at(i)->getBusinessNumber());
            result.push_back(employments.at(i)->getJob());

            normalMember->apply(employments.at(i));
            break;
        }
    }

    return result;
}
