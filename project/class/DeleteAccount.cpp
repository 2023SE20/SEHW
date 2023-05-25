#include "../header/DeleteAccount.h"
#include "../header/Member.h"

#include <string>
using namespace std;

string DeleteAccount::deleteAccount(vector<Member*>* members, Member** member) {
	string id = (*member)->getId();

	for (int i = 0; i < members->size(); i++) {
		if (*member == members->at(i)) {
			members->erase(members->begin() + i);
		}
	}
	delete *member;

	return id;
}

void DeleteAccount::setDeleteAccountUI(DeleteAccountUI* deleteAccountUI) {
	this->deleteAccountUI = deleteAccountUI;
}

DeleteAccountUI* DeleteAccount::getDeleteAccountUI() {
	return this->deleteAccountUI;
}