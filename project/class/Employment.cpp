#include "../header/Employment.h"

/**
 * Employment implementation
 */

/**
 * @param job 업무
 * @param deadline 마감일
 * @param companyName 회사명
 * @param maxApplicants 채용 인원 수
 * 
 * 채용 정보 entity의 멤버 변수를 초기화하는 생성자
 */
Employment::Employment(string job, string deadline, string companyName, int maxApplicants) {
    this->job = job;
    this->deadline = deadline;
    this->maxApplicants = maxApplicants;
    this->companyName = companyName;
    this->applicantsCount = 0;
}

/**
 * @return 채용 정보의 업무
 * 
 * 채용 정보의 업무를 반환함.
 */
string Employment::getJob() {
    return this->job;
}

/**
 * @return 채용 정보의 마감일
 * 
 * 채용 정보의 마감일을 반환함.
 */
string Employment::getDeadline() {
    return this->deadline;
}

/**
 * @return 채용 정보의 채용 인원 수
 * 
 * 채용 정보의 인원 수를 반환함.
 */
int Employment::getMaxApplicants() {
    return this->maxApplicants;
}