#include "../header/ViewEmploymentsUI.h"

/**
 * ViewEmploymentsUI implementation
 */

/**
 * @param inFp ViewEmploymentUI에서 접근할 입력 파일 포인터
 * @param outFp ViewEmploymentUI에서 접근할 출력 파일 포인터
 * 
 * 입력 및 출력 파일 포인터를 초기화하는 생성자.
*/
ViewEmploymentsUI::ViewEmploymentsUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

/**
 * 등록된 채용 정보 조회 기능 실행 시 초기 문구를 출력함.
*/
void ViewEmploymentsUI::startInterface() {
    fprintf(outFp, "3.2 등록된 채용 정보 조회\n");
}

/**
 * @param job 전체 채용 정보의 업무 목록이 저장된 vector 포인터
 * @param deadline 전체 채용 정보의 마감일 목록이 저장된 vector 포인터
 * @param maxApplicants 전체 채용 정보의 인원 수 목록이 저장된 vector 포인터
 * 
 * 등록된 채용 정보의 업무, 마감일, 인원 수를 출력함.
 */
void ViewEmploymentsUI::showEmployment(vector<string>* jobs, vector<string>* deadlines, vector<int>* maxApplicants) {    
    for (int i = 0; i < jobs->size(); i++) {
        string job = jobs->at(i);
        string deadline = deadlines->at(i);
        int maxApplicant = maxApplicants->at(i);

        fprintf(outFp, "> %s %d %s\n", job.c_str(), maxApplicant, deadline.c_str());
    }
    fprintf(outFp, "\n");
}