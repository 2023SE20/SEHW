#include "../header/LogoutUI.h"

/**
 * LogoutUI implementation
 */

/**
 * @param inFp LogoutUI에서 사용할 input 파일 포인터
 * @param outFp LogoutUI에서 사용할 output 파일 포인터
*/
LogoutUI::LogoutUI(FILE* inFp, FILE* outFp) {
    this->inFp = inFp;
    this->outFp = outFp;
}


void LogoutUI::startInterface() {
    fprintf(outFp, "2.1 로그아웃\n");
}

/**
 * @param memberId 로그아웃한 회원의 아이디
 */
void LogoutUI::showLogoutId(string memberId) {
    fprintf(outFp, "> %s\n\n", memberId.c_str());
}