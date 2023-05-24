#include "../header/AddEmployment.h"
// #include "../header/AddEmploymentUI.h"
// #include "../header/Employment.h"
// #include "../header/CompanyMember.h"

/**
 * AddEmployment implementation
 */

/**
 * @param currentMember 현재 로그인한 회원 객체
 * @param job 등록할 채용 정보의 업무
 * @param deadline 등록할 채용 정보의 마감일
 * @param maxApplicants 등록할 채용 정보의 채용 인원수
 */
void AddEmployment::addNewEmployment(CompanyMember* currentMember, string job, string deadline, int maxApplicants) {
    Employment* newEmployment = new Employment(job, deadline, maxApplicants);
    currentMember->addNewEmployment(newEmployment);
}

/**
 * @param addEmploymentUI 채용 정보 등록 기능의 Boundary 객체
*/
void AddEmployment::setAddEmploymentUI(AddEmploymentUI* addEmploymentUI) {
    this->addEmploymentUI = addEmploymentUI;
}

/**
 * @return 채용 정보 등록 기능의 Boundary 객체
*/
AddEmploymentUI* AddEmployment::getAddEmploymentUI() {
    return this->addEmploymentUI;
}