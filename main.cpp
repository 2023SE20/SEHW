#include "./header/Member.h"
#include "./header/AddEmployment.h"
#include "./header/Logout.h"
#include "./header/ViewEmployments.h"
#include "./header/CancelApply.h"
#include "./header/StatisticApplyInfo.h"

#include "CreateAccount.h"
#include "CreateAccountUI.h"
#include "DeleteAccount.h"
#include "DeleteAccountUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "Member.h"

#include "stdio.h"
#include <string>

using namespace std;

#define MAX_STRING 32
#define MAX_MEMBER 50
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask();
void programExit();

FILE *inFp, *outFp;
Member* currentMember;
vector<Member*> members;

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

        switch(menuLevel1) {
            case 1: 
                switch(menuLevel2) {
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
                switch(menuLevel2) {
                    case 1:
	          LogIn * login = new LogIn;
	         (login->getLogInUI())->startInterface();
       	         (login->getLogInUI())->logIn(login);
                        // currentMember = new CompanyMember("id", "pw1234", "hongik", 12345);
                        currentMember = new NormalMember("id", "password", "name", "12345");
                        ((NormalMember*) currentMember)->getEmploymentCollection()->addEmployment(
                            new Employment("backend", "2023/05/31", "hongik", "1234", 20)
                        );
                        ((NormalMember*) currentMember)->getEmploymentCollection()->addEmployment(
                            new Employment("frontend", "2023/05/31", "hongik", "22222", 20)
                        );
                        ((NormalMember*) currentMember)->getEmploymentCollection()->addEmployment(
                            new Employment("backend", "2023/05/31", "hongik", "54321", 20)
                        );
                        break;
                    case 2: {
                        Logout* control = new Logout();
                        control->setLogoutUI(new LogoutUI(inFp, outFp));
                        control->setMember(currentMember);

                        (control->getLogoutUI())->startInterface();
                        string id = (control->getMember())->logout(&currentMember);
                        (control->getLogoutUI())->showLogoutId(id);

                        break;
                    }
                }
                break;
            case 3: 
                switch(menuLevel2) {
                    case 1: {
                        AddEmployment* control = new AddEmployment();
                        control->setAddEmploymentUI(new AddEmploymentUI(inFp, outFp));

                        (control->getAddEmploymentUI())->startInterface();
                        (control->getAddEmploymentUI())->createNewEmployment(currentMember, control);

                        break;
                    }
                    case 2: {
                        ViewEmployments* control = new ViewEmployments();
                        control->setViewEmploymentUI(new ViewEmploymentsUI(inFp, outFp));
                        control->setCompanyMember((CompanyMember*) currentMember);

                        vector<int> maxApplicants, applicantsCount;
                        vector<string> jobs, deadlines;
                        (control->getViewEmploymentUI())->startInterface();
                        (control->getCompanyMember())->listEmployments(&jobs, &deadlines, &maxApplicants, &applicantsCount);
                        (control->getViewEmploymentUI())->showEmployment(&jobs, &deadlines, &maxApplicants);

                        break;
                    }
                }
                break;
            case 4: 
                switch(menuLevel2) {
                    case 1:
                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4: {
                        CancelApply* control = new CancelApply();
                        control->setCancelApplyUI(new CancelApplyUI(inFp, outFp));

                        (control->getCancelApplyUI())->startInterface();
                        (control->getCancelApplyUI())->selectApplyToCancel((NormalMember*) currentMember, control);

                        break;
                    }
                }
                break;
            case 5: 
                switch(menuLevel2) {
                    case 1: {
                        StatisticApplyInfo* control = new StatisticApplyInfo();
                        control->setStatisticApplyInfoUI(new StatisticApplyInfoUI(inFp, outFp));

                        (control->getStatisticApplyInfoUI())->startInterface();
                        (control->getStatisticApplyInfoUI())->statisticApplyInfo(currentMember, control);

                        break;
                    }
                }
                break;
            case 6: 
                switch(menuLevel2) {
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