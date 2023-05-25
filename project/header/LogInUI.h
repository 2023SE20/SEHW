#ifndef _LOGINUI_H
#define _LOGINUI_H

#include "Member.h"
#include <vector>

using namespace std;

class Login;

class LoginUI {
private:
    FILE* inFp;
    FILE* outFp;
public: 
    LoginUI(FILE* inFp, FILE* outFp);
    void startInterface();
    void logIn(vector<Member*> members, Member** currentMember, Login* login);
};

#endif //_LOGINUI_H