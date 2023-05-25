#include "./header/Member.h"
#include "./header/CreateAccount.h"
#include "./header/DeleteAccount.h"
#include "./header/LogIn.h"
#include "./header/Logout.h"
#include "./header/AddEmployment.h"
#include "./header/ViewEmployments.h"
#include "./header/CancelApply.h"
#include "./header/AddEmployment.h"
#include "./header/ApplyToEmployment.h"
#include "./header/SearchEmployment.h"
#include "./header/ViewApplyInfo.h"
#include "./header/StatisticApplyInfo.h"

#include "stdio.h"
#include <string>
#include <map>
#include <iostream>

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
vector<Employment*> searchedList;

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
                    case 1: {
                        CreateAccount* control = new CreateAccount();
                        control->setCreateAccountUI(new CreateAccountUI(inFp, outFp));

                        (control->getCreateAccountUI())->startInterface();
                        (control->getCreateAccountUI())->createAccount(control, &members);
                        break;
                    }
                    case 2: {
                        DeleteAccount* control = new DeleteAccount();
                        control->setDeleteAccountUI(new DeleteAccountUI(inFp, outFp));

                        (control->getDeleteAccountUI())->startInterface();
                        (control->getDeleteAccountUI())->deleteAccount(control, &currentMember, &members);
                        cout << members.size() << endl;
                        break;
                    }
                }
                break;
            case 2: 
                switch(menuLevel2) {
                    case 1: {
                        Login* control = new Login();
                        control->setlLoginUI(new LoginUI(inFp, outFp));
                        
                        (control->getLogInUI())->startInterface();
                        (control->getLogInUI())->logIn(members, &currentMember, control);
                    
                        break;
                    }
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
                        control->setCompanyMember((CompanyMember*) currentMember);

                        (control->getAddEmploymentUI())->startInterface();
                        (control->getAddEmploymentUI())->createNewEmployment(control);

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
                    {
                    case 1:{
                        // vector<Employment*> searchedList;
                        SearchEmployment* searchControl = new SearchEmployment();
                        searchControl->setSearchEmploymentUI(new SearchEmploymentUI(inFp, outFp));
                        searchControl->setMembers(&members);

                        (searchControl->getSearchEmploymentUI())->startInterface();
                        searchedList = (searchControl->getSearchEmploymentUI())->searchEmployment(searchControl);
                        break;
                    }
                    case 2:
                        ApplyToEmployment* applyControl = new ApplyToEmployment();
                        applyControl->setApplyToEmploymentUI(new ApplyToEmploymentUI(inFp, outFp));
                        applyControl->setNormalMember((NormalMember*) currentMember);

                        (applyControl->getApplyToEmploymentUI())->startInterface();
                        (applyControl->getApplyToEmploymentUI())->apply(applyControl, searchedList);
                        break;
                    }
                    case 3: {
                        ViewApplyInfo* control = new ViewApplyInfo();
                        control->setViewApplyInfoUI(new ViewApplyInfoUI(inFp, outFp));
                        control->setNormalMember((NormalMember*) currentMember);

                        // vector<string> job, companyName, deadline, businessNumber;
                        // vector<int> maxApplicants, applicantsCount;
                        map<string, vector<string>> dataMap;
                        (control->getViewApplyInfoUI())->startInterface();
                        // (control->getNormalMember())->listEmployments(&job, &deadline, &companyName,
                        //      &businessNumber, &applicantsCount, &maxApplicants);
                        // ((control->getViewApplyInfoUI()))->showApplyInfo(&companyName, &businessNumber, &job, &deadline, &maxApplicants);
                        (control->getNormalMember())->listEmployments2(&dataMap);
                        (control->getViewApplyInfoUI())->showApplyInfo2(dataMap);

                        break;
                    }
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
    fprintf(outFp, "6.1. 종료\n");
}