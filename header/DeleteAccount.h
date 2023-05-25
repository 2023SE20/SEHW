/**
 * Project Untitled
 */


#ifndef _DELETEACCOUNT_H
#define _DELETEACCOUNT_H

class DeleteAccount {
public: 
    DeleteAccountUI DeleteAccountUI;
    
/**
 * @param member
 */
void deleteAccount(Member member);
    
DeleteAccountUI getDeleteAccountUI();
};

#endif //_DELETEACCOUNT_H