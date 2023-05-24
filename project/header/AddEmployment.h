#ifndef _ADDEMPLOYMENT_H
#define _ADDEMPLOYMENT_H

#include "CompanyMember.h"
#include "AddEmploymentUI.h"
#include <string>

// using namespace std;

class AddEmployment {
public: 
	void addNewEmployment(CompanyMember* currentMember, std::string job, std::string deadline, int maxApplicants);
	void setAddEmploymentUI(AddEmploymentUI* addEmploymentUI);
	AddEmploymentUI* getAddEmploymentUI();
private: 
	AddEmploymentUI* addEmploymentUI;
};

#endif //_ADDEMPLOYMENT_H