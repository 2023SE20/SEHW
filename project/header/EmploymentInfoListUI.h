#ifndef _EMPLOYMENTINFOLISTUI_H
#define _EMPLOYMENTINFOLISTUI_H

#include "CompanyMember.h"
#include "EmploymentInfoList.h"
#include "ViewEmployments.h"
#include <string>

using namespace std;

class EmploymentInfoList;

class EmploymentInfoListUI {
public:
	EmploymentInfoListUI(FILE* inFp, FILE* outFp);
	void startInterface();
	void keywordEmploymentInfoList(CompanyMember* companymember, EmploymentInfoList* employmentInfoList);
	void showEmploymentApplying();
private:
	FILE* inFp;
	FILE* outFp;
};

#endif