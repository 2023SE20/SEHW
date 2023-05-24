#include "../header/Logout.h"
// #include "../header/LogoutUI.h"
// #include "../header/Member.h"

/**
 * Logout implementation
 */

LogoutUI* Logout::getLogoutUI() {
    return this->logoutUI;
}

Member* Logout::getMember() {
    return this->member;
}

void Logout::setLogoutUI(LogoutUI* logoutUI) {
    this->logoutUI = logoutUI;
}

void Logout::setMember(Member* member)  {
    this->member = member;
}
