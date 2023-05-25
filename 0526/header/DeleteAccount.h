#ifndef _DELETEACCOUNT_H
#define _DELETEACCOUNT_H
#include "DeleteAccountUI.h"

class DeleteAccountUI;
class DeleteAccount {
public: 
    DeleteAccountUI* getDeleteAccountUI();
    void deleteAccount(Member member);
    
private:
    FILE* inFp;
    FILE* outFp;
    DeleteAccountUI* DeleteAccountUI;   

};

#endif //_DELETEACCOUNT_H