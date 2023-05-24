#include "../header/EmploymentCollection.h"
// #include "../header/Employment.h"

/**
 * EmploymentCollection implementation
 */


/**
 * @param newEmployment 새로 등록한 채용 정보 객체를 참조하는 포인터
 */
void EmploymentCollection::addEmployment(Employment* newEmployment) {
    employments.push_back(newEmployment);
}

/**
 * @return 등록된 채용 정보의 배열 첫 번째 원소를 참조하는 포인터
 */
vector<Employment*> EmploymentCollection::getEmployments() {
    return this->employments;
}