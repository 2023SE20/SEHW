#include "CreateAccount.h"
#include "CreateAccountUI.h"
#include "DeleteAccount.h"
#include "DeleteAccountUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "Member.h"

#include "stdio.h"
#include <string>
#include <vector>

using namespace std;

#define MAX_STRING 32
#define MAX_MEMBER 50
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit();

FILE* inFp, * outFp;
Member* currentMember;
vector<Member*> members;
string id, password, name;
int number;
int main() {
    inFp = fopen(INPUT_FILE_NAME, "r+");
    outFp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();
}

void doTask() {
    int menuLevel1 = 0, menuLevel2 = 0;
    int isProgramExit = 0;

    while (!isProgramExit) {
        fscanf(inFp, "%d %d\n", &menuLevel1, &menuLevel2);

        switch (menuLevel1) {
        case 1:
            switch (menuLevel2) {
            case 1:
                CreateAccount * createaccount = new CreateAccount;
                (createaccount->getCreateAccountUI())->startInterface();
                (createaccount->getCreateAccountUI())->createAccount(createaccount,members);
                break;
            case 2:
                DeleteAccount * deleteaccount = new DeleteAccount;
                (deleteaccount->getDeleteAccountUI())->startInterface();
                (deleteaccount->getDeleteAccountUI())->deleteAccount(deleteaccount);
                break;
            }
            break;
        case 2:
            switch (menuLevel2) {
            case 1:
                LogIn * login = new LogIn;
                (login->getLogInUI())->startInterface();
                (login->getLogInUI())->logIn(login);
                
                break;
            case 2: {


                break;
            }
            }
            break;
        case 3:
            switch (menuLevel2) {
            case 1: {


                break;
            }
            case 2: {

                break;
            }
            }
            break;
        case 4:
            switch (menuLevel2) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            }
            break;
        case 5:
            switch (menuLevel2) {
            case 1:
                break;
            }
            break;
        case 6:
            switch (menuLevel2) {
            case 1:
                programExit();
                isProgramExit = 1;
                break;
            }
            break;
        }
    }
}

void programExit() {
    fprintf(outFp, "6.1 종료\n");
}