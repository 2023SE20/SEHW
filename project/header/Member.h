#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>
using namespace std;

class Member {
public: 
	Member(string id, string password);
	string logout(Member** currentMember);
	string getId() {return id;}
private: 
	string id;
	string password;
};

#endif //_MEMBER_H