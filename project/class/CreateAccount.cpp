#include "../header/CreateAccount.h"
#include "../header/CompanyMember.h"
#include "../header/NormalMember.h"
#include "../header/Member.h"

#include <string>
#include <vector>
using namespace std;

void CreateAccount::createAccount(int type, string id, string password,
        string name, string number, vector<Member*>* members) {
    Member* newMember;

    if (type == 1) {
        newMember = new CompanyMember(id, password, name, number);
    } else {
        newMember = new NormalMember(id, password, name, number);
    }
    members->push_back(newMember);
}

void CreateAccount::setCreateAccountUI(CreateAccountUI* createAccountUI) {
    this->createAccountUI = createAccountUI;
}

CreateAccountUI* CreateAccount::getCreateAccountUI() {
    return this->createAccountUI;
}