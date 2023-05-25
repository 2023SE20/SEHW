#ifndef _DELETEACCOUNT_H
#define _DELETEACCOUNT_H

#include "DeleteAccountUI.h"

#include <vector>
using namespace std;

class DeleteAccount {
public: 
    DeleteAccountUI* getDeleteAccountUI();
    void setDeleteAccountUI(DeleteAccountUI* deleteAccountUI);
    string deleteAccount(vector<Member*>* members, Member** member);
private:
    DeleteAccountUI* deleteAccountUI;   
};

#endif //_DELETEACCOUNT_H