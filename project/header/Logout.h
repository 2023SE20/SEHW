#ifndef _LOGOUT_H
#define _LOGOUT_H

#include "LogoutUI.h"
#include "Member.h"

/**
 * 로그아웃 control 클래스
*/
class Logout {
public:
	LogoutUI* getLogoutUI();
	Member* getMember();
	void setLogoutUI(LogoutUI* logoutUI);
	void setMember(Member* member);
private: 
	LogoutUI* logoutUI;
	Member* member;
};

#endif //_LOGOUT_H