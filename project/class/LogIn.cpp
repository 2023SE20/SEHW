#include "../header/LogIn.h"
#include "../header/Member.h"

#include <string>
#include <vector>
using namespace std;

void Login::logIn(vector<Member*> members, Member** member, string id, string password) {
    for (int i = 0; i < members.size(); i++) {
        Member* temp = members.at(i);
        if (strcmp(id.c_str(), temp->getId().c_str()) == 0 
                && strcmp(password.c_str(), temp->getPassword().c_str()) == 0) {
            *member = temp;
            break;
        } else {
        }

    }
}

void Login::setlLoginUI(LoginUI* loginUI) {
    this->loginUI = loginUI;
}

LoginUI* Login::getLogInUI() {
    return this->loginUI;
}
