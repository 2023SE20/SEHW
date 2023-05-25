#include "../header/CreateAccount.h"
#include "../header/Member.h"

#include <string>
#include <vector>
using namespace std;

CreateAccountUI::CreateAccountUI(FILE* inFp, FILE* outFp) {
	this->inFp = inFp;
	this->outFp = outFp;
}

void CreateAccountUI::startInterface() {
	fprintf(outFp, "1.1. 회원가입\n");
}

void CreateAccountUI::createAccount(CreateAccount* createAccount, vector<Member*>* members) {
	int type;
	string id, password, name, number;
	fscanf(inFp, "%d %s %s %s %s\n", &type, name.data(), number.data(), id.data(), password.data());

	createAccount->createAccount(type, id, password, name, number, members);
	fprintf(outFp, "> %d %s %s %s %s\n\n", type, name.c_str(), number.c_str(), id.c_str(), password.c_str());
}