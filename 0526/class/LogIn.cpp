#include "LogIn.h"
#include "Member.h"
#include <string>
using namespace std;

void LogIn::logIn(Member member) {
    //로그인 체크하기
    fprintf(outFp, "%s %s\n", member.getId(),member.getPassword());
}


LogInUI* LogIn::getLogInUI() {
}
