#ifndef _VIEWEMPLOYMENTS_H
#define _VIEWEMPLOYMENTS_H

#include "CompanyMember.h"
#include "ViewEmploymentsUI.h"

/**
 * 등록한 채용 정보 조회 control 클래스
*/
class ViewEmployments {
public:
	void setViewEmploymentUI(ViewEmploymentsUI* ViewEmploymentsUI);
	void setCompanyMember(CompanyMember* companyMember);
	ViewEmploymentsUI* getViewEmploymentUI();
	CompanyMember* getCompanyMember();
private: 
	CompanyMember* companyMember;
	ViewEmploymentsUI* viewEmploymentsUI;
};

#endif //_VIEWEMPLOYMENTS_H