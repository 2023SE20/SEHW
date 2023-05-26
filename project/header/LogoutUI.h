#ifndef _LOGOUTUI_H
#define _LOGOUTUI_H

#include <string>
using namespace std;

/**
 * 로그아웃 boundary 클래스
*/
class LogoutUI {
public: 
	LogoutUI(FILE* inFp, FILE* outFp);
	void startInterface();
	void showLogoutId(string memberId);
private: 
	FILE* inFp;
	FILE* outFp;
};

#endif //_LOGOUTUI_H