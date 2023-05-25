#ifndef _CREATEACCOUNT_H
#define _CREATEACCOUNT_H

#include "CreateAccountUI.h"

#include <string>
using namespace std;

class CreateAccount {
private:
	CreateAccountUI* createAccountUI;
public: 
	CreateAccountUI* getCreateAccountUI();
	void setCreateAccountUI(CreateAccountUI* createAccountUI);
	void createAccount(int type, string id, string password, string name, string number, vector<Member*>* members);
};

#endif //_CREATEACCOUNT_H