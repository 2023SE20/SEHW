#ifndef _LOGIN_H
#define _LOGIN_H

#include "LogInUI.h"
#include <string>
using namespace std;
class LogIn {
public: 
    
    LogInUI* getLogInUI();
    void logIn(Member member);
private:
    FILE* inFp;
    FILE* outFp;
    LogInUI LogInUI;

};

#endif //_LOGIN_H