#include "../header/AddEmployment.h"

/**
 * AddEmploymentUI implementation
 */

/**
 * @param inFp AddEmploymentUI가 접근할 입력 파일 포인터
 * @param outFp AddEmploymentUI가 접근할 출력 파일 포인터
 * 
 * 입력 및 출력 파일 포인터를 초기화하는 생성자
*/
AddEmploymentUI::AddEmploymentUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

/**
 * 채용 정보 등록 기능 실행 시 초기 문구를 출력함.
*/
void AddEmploymentUI::startInterface() {
    fprintf(outFp, "3.1 채용 정보 등록\n");
}

/**
 * @param addEmployment boundary 클래스가 참조할 control 객체 포인터
 * 
 * 채용 정보 등록 시 사용자의 입력을 받고 채용 정보 등록 후
 * 등록된 정보를 출력함.
*/
void AddEmploymentUI::createNewEmployment(AddEmployment* addEmployment) {
    string job, deadline;
    int maxApplicants;

    fscanf(inFp, "%s %d %s\n", job.data(), &maxApplicants, deadline.data());
    addEmployment->addNewEmployment(job, deadline, maxApplicants);
    fprintf(outFp, "> %s %d %s\n\n", job.c_str(), maxApplicants, deadline.c_str());
}