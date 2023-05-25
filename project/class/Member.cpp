#include "../header/Member.h"

/**
 * Member implementation
 */

Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}


/**
 * @param 로그인했던 회원을 참조하는 포인터
 * @return 로그아웃한 회원의 아이디
 */
string Member::logout(Member** currentMember) {
    *currentMember = NULL;
    return this->id;
}