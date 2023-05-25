#include "../header/CompanyMember.h"

/**
 * CompanyMember implementation
 */

CompanyMember::CompanyMember(string id, string password, string companyName, int businessNumber): Member(id, password) {
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->employmentCollection = new EmploymentCollection();
}

/**
 * @param job
 * @param deadline
 * @param maxApplicants
 */
void CompanyMember::listEmployments(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants, vector<int>* applicantsCount) {
    vector<Employment*> employments = (this->employmentCollection)->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        job->push_back(employments.at(i)->getJob());
        deadline->push_back(employments.at(i)->getDeadline());
        maxApplicants->push_back(employments.at(i)->getMaxApplicants());
        applicantsCount->push_back(employments.at(i)->getApplicantsCount());
    }
}

/**
 * @param newEmployment
 */
void CompanyMember::addNewEmployment(Employment* newEmployment) {
    this->employmentCollection->addEmployment(newEmployment);
}

/**
 * @return 회사 회원의 회사명
*/
string CompanyMember::getCompanyName() {
    return this->companyName;
}

string CompanyMember::getBusinessNumber() {
    return this->businessNumber;
}