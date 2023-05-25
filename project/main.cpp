#include "./header/Member.h"
#include "./header/AddEmployment.h"
#include "./header/Logout.h"
#include "./header/ViewEmployments.h"

#include "stdio.h"
#include <string>
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
                        break;
                    case 2:
                        break;
                }
                break;
            case 2: 
                switch(menuLevel2) {
                    case 1:
                        currentMember = new CompanyMember("id", "pw1234", "hongik", 12345);
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
                        control->setCompanyMember((CompanyMember*) currentMember);

                        (control->getAddEmploymentUI())->startInterface();
                        (control->getAddEmploymentUI())->createNewEmployment(control);

                        break;
                    }
                    case 2: {
                        ViewEmployments* control = new ViewEmployments();
                        control->setViewEmploymentUI(new ViewEmploymentsUI(inFp, outFp));
                        control->setCompanyMember((CompanyMember*) currentMember);

                        vector<int> maxApplicants;
                        vector<string> jobs, deadlines;
                        (control->getViewEmploymentUI())->startInterface();
                        (control->getCompanyMember())->listEmployments(&jobs, &deadlines, &maxApplicants);
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
                    case 4:
                        break;
                }
                break;
            case 5: 
                switch(menuLevel2) {
                    case 1:
                        break;
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