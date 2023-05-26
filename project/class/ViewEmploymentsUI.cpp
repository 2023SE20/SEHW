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
    fprintf(outFp, "3.2. 등록된 채용 정보 조회\n");
}

/**
 * @param dataMap 전체 채용 정보 목록의 업무, 인원수, 마감일 정보가 저장된 map 포인터
 * 
 * 등록된 채용 정보의 업무, 마감일, 인원 수를 출력함.
 */
void ViewEmploymentsUI::showEmployments(map<string, vector<string>>* dataMap) {
    vector<string> job = dataMap->at("job");
    vector<string> deadline = dataMap->at("deadline");
    vector<string> maxApplicants = dataMap->at("maxApplicants");

    for (int i = 0; i < job.size(); i++) {
        fprintf(outFp, "> %s %s %s\n", job.at(i).c_str(), maxApplicants.at(i).c_str(), deadline.at(i).c_str());
    }
    fprintf(outFp, "\n");
}