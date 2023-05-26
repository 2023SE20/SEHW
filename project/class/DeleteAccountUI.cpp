#include "../header/DeleteAccount.h"
#include "../header/Member.h"

#include <string>
using namespace std;

DeleteAccountUI::DeleteAccountUI(FILE* inFp, FILE* outFp) {
	this->inFp = inFp;
	this->outFp = outFp;
}

void DeleteAccountUI::startInterface() {
	fprintf(outFp, "1.2. 회원탈퇴\n");
}

void DeleteAccountUI::deleteAccount(DeleteAccount* deleteAccount, Member** member, vector<Member*>* members) {
	string id = deleteAccount->deleteAccount(members, member);
	fprintf(outFp, "> %s\n\n", id.c_str());
}