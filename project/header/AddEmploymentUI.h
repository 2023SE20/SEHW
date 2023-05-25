#ifndef _ADDEMPLOYMENTUI_H
#define _ADDEMPLOYMENTUI_H

class AddEmployment;

/**
 * 채용 정보 등록 boundary 클래스
*/
class AddEmploymentUI {
public: 
	AddEmploymentUI(FILE* inFp, FILE* outFp);
	void startInterface();
	void createNewEmployment(AddEmployment* addEmployment);
private: 
	FILE* inFp;
	FILE* outFp;
};

#endif //_ADDEMPLOYMENTUI_H