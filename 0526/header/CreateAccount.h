#ifndef _CREATEACCOUNT_H
#define _CREATEACCOUNT_H

#include "CreateAccountUI.h"
#include <string>
using namespace std;

class CreateAccount {
public: 
CreateAccountUI* getCreateAccountUI();
void createAccount(string id, string password, string name, int number,vector<Member> members);
private:
	FILE* inFp;
	FILE* outFp;
    
CreateAccountUI* CreateAccountUI;
};

#endif //_CREATEACCOUNT_H