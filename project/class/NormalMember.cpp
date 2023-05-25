#include "../header/NormalMember.h"
#include "../header/EmploymentCollection.h"

using namespace std;


NormalMember::NormalMember(string id, string password, string name, string idNumber) : Member(id, password) {
    this->name = name;
    this->idNumber = idNumber;
    this->employmentCollection = new EmploymentCollection();
}

// void NormalMember::listEmployments(vector<string>* job, 
//         vector<string>* deadline, 
//         vector<string>* companyName,
//         vector<string>* businessNumber,
//         vector<int>* applicantsCount,
//         vector<int>* maxApplicants) {
//     vector<Employment*> employments = (this->employmentCollection)->getEmployments();

//     for (int i = 0; i < employments.size(); i++) {
//         Employment* temp = employments.at(i);

//         job->push_back(temp->getJob());
//         deadline->push_back(temp->getDeadline());
//         companyName->push_back(temp->getCompanyName());
//         businessNumber->push_back(temp->getBusinessNumber());
//         maxApplicants->push_back(temp->getMaxApplicants());
//     }
// }

void NormalMember::listEmployments(map<string, vector<string>>* dataMap) {
    (*dataMap)["job"] = vector<string>();
    (*dataMap)["deadline"] = vector<string>();
    (*dataMap)["companyName"] = vector<string>();
    (*dataMap)["businessNumber"] = vector<string>();
    (*dataMap)["maxApplicants"] = vector<string>();
    vector<Employment*> employments = employmentCollection->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        Employment* temp = employments.at(i);
        dataMap->at("job").push_back(temp->getJob());
        dataMap->at("deadline").push_back(temp->getDeadline());
        dataMap->at("companyName").push_back(temp->getCompanyName());
        dataMap->at("businessNumber").push_back(temp->getBusinessNumber());
        dataMap->at("maxApplicants").push_back(to_string(temp->getMaxApplicants()));
    }
}

void NormalMember::apply(Employment* employment) {
    employment->increaseApplicant();
    employmentCollection->addEmployment(employment);
}
