// #include "../header/AddEmploymentUI.h"
#include "../header/AddEmployment.h"
// #include "../header/Member.h"
// #include "../header/CompanyMember.h"

/**
 * AddEmploymentUI implementation
 */

AddEmploymentUI::AddEmploymentUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

void AddEmploymentUI::startInterface() {
    fprintf(outFp, "3.1 채용 정보 등록\n");
}

void AddEmploymentUI::createNewEmployment(Member* currentMember, AddEmployment* addEmployment) {
    string job, deadline;
    int maxApplicants;

    fscanf(inFp, "%s %d %s\n", job.data(), &maxApplicants, deadline.data());
    addEmployment->addNewEmployment((CompanyMember*) currentMember, job, deadline, maxApplicants);
    fprintf(outFp, "> %s %d %s\n\n", job.c_str(), maxApplicants, deadline.c_str());
}

void AddEmploymentUI::setInFp(FILE* inFp) {
    this->inFp = inFp;
}

void AddEmploymentUI::setOutFp(FILE* outFp) {
    this->outFp = outFp;
}