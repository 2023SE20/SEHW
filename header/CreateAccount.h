/**
 * Project Untitled
 */


#ifndef _CREATEACCOUNT_H
#define _CREATEACCOUNT_H

class CreateAccount {
public: 
    CreateAccountUI CreateAccountUI;
    
/**
 * @param id
 * @param password
 * @param name
 * @param number
 */
void createAccount(string id, string password, string name, int number);
    
CreateAccountUI getCreateAccountUI();
};

#endif //_CREATEACCOUNT_H