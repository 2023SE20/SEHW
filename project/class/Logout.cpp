#include "../header/Logout.h"

/**
 * Logout implementation
 */

/**
 * @return 로그아웃 boundary 객체 포인터
 * 
 * 로그아웃 boundary 객체 포인터를 반환함.
*/
LogoutUI* Logout::getLogoutUI() {
    return this->logoutUI;
}

/**
 * @return 회원 entity 객체 포인터
 * 
 * 회원 entity 포인터를 반환함.
*/
Member* Logout::getMember() {
    return this->member;
}

/**
 * @param logoutUI 로그아웃 boundary 객체 포인터
 * 
 * 로그아웃 control 객체에 boundary 객체 레퍼런스를 할당함.
*/
void Logout::setLogoutUI(LogoutUI* logoutUI) {
    this->logoutUI = logoutUI;
}

/**
 * @param member 회원 entity 객체 포인터
 * 
 * 로그아웃 control 객체에 회원 entity 객체 레퍼런스를 할당함.
*/
void Logout::setMember(Member* member)  {
    this->member = member;
}
