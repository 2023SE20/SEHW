#ifndef _MEMBER_H
#define _MEMBER_H

#include <string>
using namespace std;

/**
 * 회원 entity 클래스
*/
class Member {
public: 
	Member(string id, string password);
	string logout(Member** currentMember);
	string getId();
	string getPassword();
private: 
	string id;
	string password;
};

#endif //_MEMBER_H