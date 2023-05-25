#include "CreateAccount.h"
#include "Member.h"
#include <string>
#include <vector>
using namespace std;

void CreateAccountUI::startInterface() {
	fprintf(outFp, "1.1 회원가입\n");

}

void CreateAccountUI::createAccount(CreateAccount* createaccount,vector<Member*> members) {
	string id;
	string password;
	string name;
	int number;
	fscanf(inFp, "%s %s %s %d\n",  id,  password, name, number);
	createaccount->createAccount(id, password, name, number,members);
	
}