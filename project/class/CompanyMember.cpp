#include "../header/CompanyMember.h"

/**
 * CompanyMember implementation
 */

/**
 * @param id 아이디
 * @param password 비밀번호
 * @param companyName 회사명
 * @param businessNumber 사업자번호
 * 
 * 각 멤버 변수를 초기화하는 생성자.
 * 부모 클래스인 Member의 생성자를 함께 호출함.
*/
CompanyMember::CompanyMember(string id, string password, string companyName, string businessNumber): Member(id, password) {
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->employmentCollection = new EmploymentCollection();
}

/**
 * @param job 전체 채용 정보의 업무를 저장할 vector 포인터
 * @param deadline 전체 채용 정보의 마감일을 저장할 vector 포인터
 * @param maxApplicants 전체 채용 정보의 채용 인원수를 저장할 vector 포인터
 * 
 * 회사 회원이 등록한 모든 채용 정보의 업무, 마감일, 인원 수 정보를 넘겨주기 위해 vector에 저장함.
 */
void CompanyMember::listEmployments(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants, vector<int>* applicantsCount) {
    vector<Employment*> employments = (this->employmentCollection)->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        job->push_back(employments.at(i)->getJob());
        deadline->push_back(employments.at(i)->getDeadline());
        maxApplicants->push_back(employments.at(i)->getMaxApplicants());
        applicantsCount->push_back(employments.at(i)->getApplicantsCount());
    }
}

/**
 * @param newEmployment 등록할 채용 정보 entity 객체 포인터
 * 
 * 등록한 채용 정보 목록에 새 채용 정보 객체를 추가함.
 */
void CompanyMember::addNewEmployment(Employment* newEmployment) {
    this->employmentCollection->addEmployment(newEmployment);
}

/**
 * @return 회사 회원의 회사명
 * 
 * 해당 회사 회원의 회사명을 반환함.
*/
string CompanyMember::getCompanyName() {
    return this->companyName;
}

string CompanyMember::getBusinessNumber() {
    return this->businessNumber;
}

vector<Employment*> CompanyMember::getEmployments() {
    return employmentCollection->getEmployments();
}

void CompanyMember::listEmployments2(map<string, vector<string>>* dataMap) {
    (*dataMap)["job"] = vector<string>();
    (*dataMap)["deadline"] = vector<string>();
    (*dataMap)["companyName"] = vector<string>();
    (*dataMap)["businessNumber"] = vector<string>();
    (*dataMap)["maxApplicants"] = vector<string>();
    vector<Employment*> employments = employmentCollection->getEmployments();

    for (int i = 0; i < employments.size(); i++) {
        Employment* temp = employments.at(i);
        dataMap->at("job").push_back(temp->getJob());
        dataMap->at("deadline").push_back(temp->getDeadline());
        dataMap->at("companyName").push_back(temp->getCompanyName());
        dataMap->at("businessNumber").push_back(temp->getBusinessNumber());
        dataMap->at("maxApplicants").push_back(to_string(temp->getMaxApplicants()));
    }
}