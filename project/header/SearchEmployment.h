#ifndef _SEARCHEMPLOYMENT_H
#define _SEARCHEMPLOYMENT_H

#include "Member.h"
#include "SearchEmploymentUI.h"
#include <vector>
#include <map>

class SearchEmployment {
private:
    vector<Member*> members;
    SearchEmploymentUI* searchEmploymentUI;
public:
    SearchEmploymentUI* getSearchEmploymentUI();
    void setMembers(vector<Member*>* members);
    void setSearchEmploymentUI(SearchEmploymentUI* searchEmploymentUI);
    map<string, vector<string>> searchEmployment(vector<Employment*> employments);
    vector<Employment*> searchCompany(string companyName);
};

#endif // _SEARCHEMPLOYMENT_H