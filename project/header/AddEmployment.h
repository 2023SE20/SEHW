#ifndef _ADDEMPLOYMENT_H
#define _ADDEMPLOYMENT_H

#include "CompanyMember.h"
#include "AddEmploymentUI.h"

class AddEmployment {
public: 
	void addNewEmployment(CompanyMember* currentMember, string job, string deadline, int maxApplicants);
	void setAddEmploymentUI(AddEmploymentUI* addEmploymentUI);
	AddEmploymentUI* getAddEmploymentUI();
private: 
	AddEmploymentUI* addEmploymentUI;
};

#endif //_ADDEMPLOYMENT_H