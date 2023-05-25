
#ifndef _LOGINUI_H
#define _LOGINUI_H

#include "LogIn.h"

class LogInUI {
public: 
    
    void startInterface();
    void logIn(LogIn* login);
private:
    FILE* inFp;
    FILE* outFp;
};

#endif //_LOGINUI_H