#include "../header/LogIn.h"
#include "../header/Member.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

void Login::logIn(vector<Member*> members, Member** member, string id, string password) {
    for (int i = 0; i < members.size(); i++) {
        Member* temp = members.at(i);
        if (id == temp->getId() && password == temp->getPassword()) {
            cout << temp->getId() << temp->getPassword() << endl;
            *member = temp;
            break;
        }
    }
}

void Login::setlLoginUI(LoginUI* loginUI) {
    this->loginUI = loginUI;
}

LoginUI* Login::getLogInUI() {
    return this->loginUI;
}
