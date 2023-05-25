#include "../header/LogIn.h"
#include "../header/Member.h"

#include <string>
using namespace std;

LoginUI::LoginUI(FILE* inFp, FILE* outFp) {
	this->inFp = inFp;
	this->outFp = outFp;
}

void LoginUI::startInterface() {
	fprintf(outFp, "2.1. 로그인\n");
}

void LoginUI::logIn(vector<Member*> members, Member** currentMember, Login* login) {
	string id;
	string password;
	fscanf(inFp, "%s %s\n", id.data(), password.data());

	login->logIn(members, currentMember, id, password);
	fprintf(outFp, "> %s %s\n\n", id.c_str(), password.c_str());
}