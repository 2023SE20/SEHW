#include "../header/ViewEmployments.h"

/**
 * ViewEmployments implementation
 */

/**
 * @param viewEmploymentUI 채용 정보 조회 boundary 객체 포인터
 * 
 * 채용 정보 조회 control 객체에 boundary 객체 레퍼런스를 할당함.
*/
void ViewEmployments::setViewEmploymentUI(ViewEmploymentsUI* viewEmploymentsUI) {
    this->viewEmploymentsUI = viewEmploymentsUI;
}

/**
 * @param companyMember 회사 회원 entity 객체 포인터
 * 
 * 채용 정보 조회 control 객체에 회사 회원 entity 객체 레퍼런스를 할당함.
*/
void ViewEmployments::setCompanyMember(CompanyMember* companyMember) {
    this->companyMember = companyMember;
}

/**
 * @return 채용 정보 조회 boundary 객체 포인터
 * 
 * 채용 정보 조회 boundary 객체 포인터를 반환함.
*/
ViewEmploymentsUI* ViewEmployments::getViewEmploymentUI() {
    return this->viewEmploymentsUI;
}

/**
 * @return 회사 회원 entity 객체 포인터
 * 
 * 채용 정보 조회 entity 객체 포인터를 반환함.
*/
CompanyMember* ViewEmployments::getCompanyMember() {
    return this->companyMember;
}