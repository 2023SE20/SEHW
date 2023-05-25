#include "../header/ViewApplyInfoUI.h"

/**
 * ViewApplyInfoUI implementation
 */


ViewApplyInfoUI::ViewApplyInfoUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

void ViewApplyInfoUI::startInterface() {
    fprintf(outFp, "4.3. 지원 정보 조회\n");
}

void ViewApplyInfoUI::showApplyInfos(map<string, vector<string>> dataMap) {
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
}