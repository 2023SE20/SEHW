#ifndef _MEMBER_H
#define _MEMBER_H
#include <string>
using namespace std;

class Member {
public: 

void deleteAccount(Member member);

void createAccount(string id, string password, string name, int number);

void logOut(Member member);

void logIn(Member member, string id, string passsword);
    
string getId();
    
string getPassword();
    
string getName();
    
int getNumber();
private: 
    string id;
    string password;
    string name;
    int number;
};

#endif //_MEMBER_H