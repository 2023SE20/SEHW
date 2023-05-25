#include "../header/LogoutUI.h"

/**
 * LogoutUI implementation
 */

/**
 * @param inFp LogoutUI가 접근할 입력 파일 포인터
 * @param outFp LogoutUI가 접근할 출력 파일 포인터
 * 
 * 입력 및 출력 파일 포인터를 초기화하는 생성자.
*/
LogoutUI::LogoutUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}

/**
 * 로그아웃 기능 실행 시 초기 문구를 출력함.
*/
void LogoutUI::startInterface() {
    fprintf(outFp, "2.1 로그아웃\n");
}

/**
 * @param memberId 로그아웃한 회원의 아이디
 * 
 * 로그아웃한 회원의 아이디를 출력함.
 */
void LogoutUI::showLogoutId(string memberId) {
    fprintf(outFp, "> %s\n\n", memberId.c_str());
}