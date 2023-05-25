#include "../header/DeleteAccount.h"
#include "../header/Member.h"

#include <string>
using namespace std;

string DeleteAccount::deleteAccount(vector<Member*>* members, Member** member) {
	string id = (*member)->getId();

	for (int i = 0; i < members->size(); i++) {
		if (strcmp(id.c_str(), members->at(i)->getId().c_str()) == 0) {
			members->erase(members->begin() + i);
			break;
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