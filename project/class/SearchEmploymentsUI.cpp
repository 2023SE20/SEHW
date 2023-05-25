#include "../header/SearchEmployment.h"
#include "../header/Employment.h"

#include <string>

/**
 * SearchEmploymentUI implementation
 */


SearchEmploymentUI::SearchEmploymentUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

void SearchEmploymentUI::startInterface() {
    fprintf(outFp, "4.1. 채용 정보 검색\n");
}

vector<Employment*> SearchEmploymentUI::searchEmployments(SearchEmployment* searchEmployment) {
    string keyword;
    fscanf(inFp, "%s\n", keyword.data());

    vector<Employment*> searchedList = searchEmployment->searchCompany(keyword);

    map<string, vector<string>> dataMap = searchEmployment->searchEmployment(searchedList);
    int size = dataMap.at("job").size();
    vector<string> job = dataMap.at("job");
    vector<string> deadline = dataMap.at("deadline");
    vector<string> companyName = dataMap.at("companyName");
    vector<string> businessNumber = dataMap.at("businessNumber");
    vector<string> maxApplicants = dataMap.at("maxApplicants");

    for (int i = 0; i < size; i++) {
        fprintf(outFp, "> %s %s %s %s %s\n", companyName.at(i).c_str(), businessNumber.at(i).c_str(),
            job.at(i).c_str(), maxApplicants.at(i).c_str(), deadline.at(i).c_str());
    }
    fprintf(outFp, "\n");

    return searchedList;
}