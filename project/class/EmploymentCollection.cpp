#include "../header/EmploymentCollection.h"

/**
 * EmploymentCollection implementation
 */

/**
 * @param newEmployment 새로 등록한 채용 정보 객체를 참조하는 포인터
 * 
 * 채용 정보 vector에 새 채용 정보를 추가함.
 */
void EmploymentCollection::addEmployment(Employment* newEmployment) {
    employments.push_back(newEmployment);
}

void EmploymentCollection::deleteEmployment(int idx) {
    employments.at(idx)->decreaseApplicant();
    employments.erase(employments.begin() + idx);
}

/**
 * @return 등록된 채용 정보 목록이 저장된 vector
 * 
 * 채용 정보 목록 vector를 반환함.
 */
vector<Employment*> EmploymentCollection::getEmployments() {
    return this->employments;
}