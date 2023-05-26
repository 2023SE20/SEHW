#include "../header/Member.h"

/**
 * Member implementation
 */

/**
 * @param id 아이디
 * @param password 비밀번호
 * 
 * 각 멤버 변수를 초기화하는 생성자.
*/
Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}

/**
 * @param currentMember 로그인했던 회원을 참조하는 포인터
 * @return 로그아웃한 회원의 아이디
 * 
 * 로그인한 회원을 참조하는 포인터를 초기화하고
 * 해당 회원의 아이디를 반환함.
 */
string Member::logout(Member** currentMember) {
    *currentMember = NULL;
    return this->id;
}

string Member::getId() {
    return id;
}

string Member::getPassword() {
    return password;
}