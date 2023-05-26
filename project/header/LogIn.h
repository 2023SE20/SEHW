#ifndef _LOGIN_H
#define _LOGIN_H

#include "LogInUI.h"

#include <string>
using namespace std;

class Login {
private:
    LoginUI* loginUI;
public: 
    LoginUI* getLogInUI();
    void setlLoginUI(LoginUI* loginUI);
    void logIn(vector<Member*> members, Member** member, string id, string password);
};

#endif //_LOGIN_H