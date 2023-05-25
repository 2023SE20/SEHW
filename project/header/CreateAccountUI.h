
#ifndef _CREATEACCOUNTUI_H
#define _CREATEACCOUNTUI_H

#include "Member.h"

#include <vector>
using namespace std;

class CreateAccount;

class CreateAccountUI {
private:
    FILE* inFp;
    FILE* outFp;
public: 
    CreateAccountUI(FILE* inFp, FILE* outFp);
    void startInterface();
    void createAccount(CreateAccount* createaccount, vector<Member*>* members);
};

#endif //_CREATEACCOUNTUI_H