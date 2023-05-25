#ifndef _ADDEMPLOYMENT_H
#define _ADDEMPLOYMENT_H

#include "CompanyMember.h"
#include "AddEmploymentUI.h"

/**
 * 채용 정보 등록 control 클래스
*/
class AddEmployment {
public: 
	void addNewEmployment(string job, string deadline, int maxApplicants);
	void setAddEmploymentUI(AddEmploymentUI* addEmploymentUI);
	void setCompanyMember(CompanyMember* currentMember);
	AddEmploymentUI* getAddEmploymentUI();
private: 
	AddEmploymentUI* addEmploymentUI;
	CompanyMember* companyMember;
};

#endif //_ADDEMPLOYMENT_H