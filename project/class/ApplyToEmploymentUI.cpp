#include "../header/ApplyToEmployment.h"
#include "../header/Employment.h"

#include <string>

/**
 * ApplyToEmploymentUI implementation
 */


ApplyToEmploymentUI::ApplyToEmploymentUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

void ApplyToEmploymentUI::startInterface() {
    fprintf(outFp, "4.2. 채용 지원\n");
}

void ApplyToEmploymentUI::apply(ApplyToEmployment* applyEmployment, vector<Employment*> employments) {
    string businessNumber;
    fscanf(inFp, "%s\n", businessNumber.data());

    vector<string> appliedEmployment = applyEmployment->apply(businessNumber, employments);
    fprintf(outFp, "> %s %s %s\n\n", appliedEmployment.at(0).c_str(), appliedEmployment.at(1).c_str(), appliedEmployment.at(2).c_str());
}