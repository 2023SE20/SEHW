#include "CreateAccount.h"
#include "Member.h"
#include <string>
#include <vector>
using namespace std;

void CreateAccount::createAccount(string id, string password, string name, int number,vector<Member> members) {
    Member * member = new Member(id,password,name,number);
    members.push_back(*member);
    fprintf(outFp, "%s %s %s %d\n",id,password,name,number);
    
}


CreateAccountUI* CreateAccount::getCreateAccountUI() {
}