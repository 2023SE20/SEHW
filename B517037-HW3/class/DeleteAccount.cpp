#include "DeleteAccount.h"
#include "Member.h"
#include <string>
using namespace std;

void DeleteAccount::deleteAccount(Member member) {
	fprintf(outFp, "%s\n", member.getId());
}

DeleteAccountUI* DeleteAccount::getDeleteAccountUI() {
}