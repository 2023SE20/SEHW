#include "../header/ViewEmploymentsUI.h"

/**
 * ViewEmploymentsUI implementation
 */

ViewEmploymentsUI::ViewEmploymentsUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}


void ViewEmploymentsUI::startInterface() {
    fprintf(outFp, "3.2 등록된 채용 정보 조회\n");
}

/**
 * @param job
 * @param deadline
 * @param maxApplicants
 */
void ViewEmploymentsUI::showEmployment(vector<string>* jobs, vector<string>* deadlines, vector<int>* maxApplicants) {    
    for (int i = 0; i < jobs->size(); i++) {
        string job = jobs->at(i);
        string deadline = deadlines->at(i);
        int maxApplicant = maxApplicants->at(i);

        fprintf(outFp, "> %s %d %s\n", job.c_str(), maxApplicant, deadline.c_str());
    }
    fprintf(outFp, "\n");
}