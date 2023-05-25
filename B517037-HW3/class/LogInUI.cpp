#include "LogInUI.h"
#include "Member.h"
#include <string>
using namespace std;

void LogInUI::startInterface() {
	fprintf(outFp, "2.1 로그인\n");

}
void LogInUI::logIn(LogIn* login) {
	string id;
	string password;
	fscanf(inFp, "%s %s\n", id, password);
	//루프 돌며 로그인 확인하기
	//login->logIn(member);

	
}