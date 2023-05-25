#include "DeleteAccountUI.h"
#include "Member.h"
#include <string>
using namespace std;

void DeleteAccountUI::startInterface() {

	fprintf(outFp, "1.2 회원탈퇴\n");

}
void DeleteAccountUI::deleteAccount(DeleteAccount* deleteaccount) {
	string id;

	fscanf(inFp, "%s\n", id);
}