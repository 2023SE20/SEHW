#include "NormalMember.h"
#include "Member.h"
#include "Employment.h"
#include "EmploymentCollection.h"


NormalMember::NormalMember(String id, string password, string name, string idNumber) : Member(id, password){
    this->name = name;
    this->idNumber = idNumber;
    this->employmentCollection = new EmploymentCollection();
}

    void NormalMember::listEmployments(vector<string>* job, 
      vector<string>* deadline, 
      vector<string>* companyName, 
      vector<int>* applicantsCount,
      vector<int>* maxApplicants){
        vector<Employment*> employments = (this->employmentCollection)->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        job->push_back(employments.at(i)->getJob());
        companyName->push_back(employments.at(i)->getCompanyName);
     }
    }
