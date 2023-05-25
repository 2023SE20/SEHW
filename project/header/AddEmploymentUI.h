#ifndef _ADDEMPLOYMENTUI_H
#define _ADDEMPLOYMENTUI_H

class AddEmployment;

class AddEmploymentUI {
public: 
	AddEmploymentUI(FILE* inFp, FILE* outFp);
	void setInFp(FILE* inFp);
	void setOutFp(FILE* outFp);
	void startInterface();
	void createNewEmployment(Member* currentMember, AddEmployment* addEmployment);
private: 
	FILE* inFp;
	FILE* outFp;
};

#endif //_ADDEMPLOYMENTUI_H