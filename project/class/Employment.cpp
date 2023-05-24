#include "../header/Employment.h"

/**
 * Employment implementation
 */


/**
 * @param job
 * @param deadline
 * @param maxApplicants
 */
Employment::Employment(string job, string deadline, int maxApplicants) {
    this->job = job;
    this->deadline = deadline;
    this->maxApplicants = maxApplicants;
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

/**
 * @return 채용 정보의 채용 인원수
 */
int Employment::getMaxApplicants() {
    return this->maxApplicants;
}