#include "../header/Employment.h"

/**
 * Employment implementation
 */


/**
 * @param job
 * @param deadline
 * @param maxApplicants
 */
Employment::Employment(string job, string deadline, string companyName, string businessNumber, int maxApplicants) {
    this->job = job;
    this->deadline = deadline;
    this->maxApplicants = maxApplicants;
    this->companyName = companyName;
    this->applicantsCount = 0;
}

/**
 * @return 채용 정보의 업무
 */
string Employment::getJob() {
    return this->job;
}

/**
 * @return 채용 정보의 마감일
 */
string Employment::getDeadline() {
    return this->deadline;
}

string Employment::getCompanyName(){
    return this->companyName;
}

string Employment::getBusinessNumber(){
    return this->businessNumber;
}

/**
 * @return 채용 정보의 채용 인원수
 */
int Employment::getMaxApplicants() {
    return this->maxApplicants;
}

int Employment::getApplicantsCount(){
    return this->applicantsCount;
}