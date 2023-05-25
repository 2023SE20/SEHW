/**
 * Project Untitled
 */


#ifndef _MEMBER_H
#define _MEMBER_H

class Member {
public: 
    
/**
 * @param member
 */
void deleteAccount(Member member);
    
/**
 * @param id
 * @param password
 * @param name
 * @param number
 */
void createAccount(string id, string password, string name, int number);
    
/**
 * @param member
 */
void logOut(Member member);
    
/**
 * @param member
 * @param id
 * @param passsword
 */
void logIn(Member member, string id, string passsword);
    
void getId();
    
void getPassword();
    
void getName();
    
void getNumber();
private: 
    string id;
    string password;
    string name;
    int number;
};

#endif //_MEMBER_H