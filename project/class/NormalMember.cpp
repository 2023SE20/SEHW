#include "../header/NormalMember.h"
#include "../header/EmploymentCollection.h"


NormalMember::NormalMember(string id, string password, string name, string idNumber) : Member(id, password) {
    this->name = name;
    this->idNumber = idNumber;
    this->employmentCollection = new EmploymentCollection();
}

void NormalMember::listEmployments(vector<string>* job, 
        vector<string>* deadline, 
        vector<string>* companyName,
        vector<string>* businessNumber,
        vector<int>* applicantsCount,
        vector<int>* maxApplicants) {
    vector<Employment*> employments = (this->employmentCollection)->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        job->push_back(employments.at(i)->getJob());
        companyName->push_back(employments.at(i)->getCompanyName());
        businessNumber->push_back(employments.at(i)->getBusinessNumber());
    }
}
