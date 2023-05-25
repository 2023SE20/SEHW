#include "../header/AddEmployment.h"

/**
 * AddEmployment implementation
 */

/**
 * @param job 등록할 채용 정보의 업무
 * @param deadline 등록할 채용 정보의 마감일
 * @param maxApplicants 등록할 채용 정보의 채용 인원수
 * 
 * 회사 회원이 새로 등록한 채용 정보를 추가함.
 */
void AddEmployment::addNewEmployment(string job, string deadline, int maxApplicants) {
    string companyName = companyMember->getCompanyName();
    Employment* newEmployment = new Employment(job, deadline, companyName, maxApplicants);
    companyMember->addNewEmployment(newEmployment);
}

/**
 * @param addEmploymentUI 채용 정보 등록 boundary 객체 포인터
 * 
 * 채용 정보 등록 control 객체에 boundary 객체 레퍼런스를 할당함.
*/
void AddEmployment::setAddEmploymentUI(AddEmploymentUI* addEmploymentUI) {
    this->addEmploymentUI = addEmploymentUI;
}

/**
 * @param currentMember 현재 로그인한 회사 회원 객체 포인터
 * 
 * 채용 정보 등록 control 객체에 회원 entity 객체 레퍼런스를 할당함.
*/
void AddEmployment::setCompanyMember(CompanyMember* currentMember) {
    this->companyMember = currentMember;
}

/**
 * @return 채용 정보 등록 기능의 Boundary 객체 포인터
 * 
 * 채용 정보 등록 control 객체가 소유하는 boundary 객체를 반환함.
*/
AddEmploymentUI* AddEmployment::getAddEmploymentUI() {
    return this->addEmploymentUI;
}