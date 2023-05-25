
#ifndef _CREATEACCOUNTUI_H
#define _CREATEACCOUNTUI_H
class CreateAccount;
class CreateAccountUI {
public: 
    
    void startInterface();
    

    void createAccount(CreateAccount* createaccount,vector<Member*> members);
private:
    FILE* inFp;
    FILE* outFp;
};

#endif //_CREATEACCOUNTUI_H