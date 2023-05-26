#include "../header/SearchEmployment.h"
#include "../header/CompanyMember.h"

#include <map>
using namespace std;

/**
 * SearchEmployment implementation
 */

SearchEmploymentUI* SearchEmployment::getSearchEmploymentUI() {
    return this->searchEmploymentUI;
}

void SearchEmployment::setMembers(vector<Member*>* members) {
    this->members = *members;
}

void SearchEmployment::setSearchEmploymentUI(SearchEmploymentUI* searchEmploymentUI) {
    this->searchEmploymentUI = searchEmploymentUI;
}

vector<Employment*> SearchEmployment::searchCompany(string companyName) {
    for (int i = 0; i < members.size(); i++) {
        Member* temp = members.at(i);
        if (typeid(*temp) == typeid(CompanyMember) && companyName == ((CompanyMember*) temp)->getCompanyName()) {
            return ((CompanyMember*) temp)->getEmployments();
        }
    }
}

map<string, vector<string>> SearchEmployment::searchEmployment(vector<Employment*> employments) {
    map<string, vector<string>> dataMap;
    dataMap["job"] = vector<string>();
    dataMap["deadline"] = vector<string>();
    dataMap["companyName"] = vector<string>();
    dataMap["businessNumber"] = vector<string>();
    dataMap["maxApplicants"] = vector<string>();

    for (int i = 0; i < employments.size(); i++) {
        Employment* temp = employments.at(i);
        dataMap["job"].push_back(temp->getJob());
        dataMap["deadline"].push_back(temp->getDeadline());
        dataMap["companyName"].push_back(temp->getCompanyName());
        dataMap["businessNumber"].push_back(temp->getBusinessNumber());
        dataMap["maxApplicants"].push_back(to_string(temp->getMaxApplicants()));
    }

    return dataMap;
}
