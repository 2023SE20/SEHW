/**
 * Project Untitled
 */


#ifndef _LOGIN_H
#define _LOGIN_H

class LogIn {
public: 
    LogInUI LogInUI;
    
/**
 * @param member
 * @param id
 * @param password
 */
void logIn(Member member, string id, string password);
    
LogInUI getLogInUI();
};

#endif //_LOGIN_H