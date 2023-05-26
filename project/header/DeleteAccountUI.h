#ifndef _DELETEACCOUNTUI_H
#define _DELETEACCOUNTUI_H

#include "Member.h"

#include <vector>
using namespace std;

class DeleteAccount;

class DeleteAccountUI {
private:
    FILE* inFp;
    FILE* outFp;
public: 
    DeleteAccountUI(FILE* inFp, FILE* outFp);
    void startInterface();
    void deleteAccount(DeleteAccount* deleteAccount, Member** member, vector<Member*>* members);
};

#endif //_DELETEACCOUNTUI_H