#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
#include <map>

using namespace std;

/**
 * 회사 회원 entity 클래스
*/
class CompanyMember: public Member {
private: 
	string companyName;
	string businessNumber;
	EmploymentCollection* employmentCollection;
public: 
	CompanyMember(string id, string password, string companyName, string businessNumber);
	// void listEmployments(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants, vector<int>* applicantsCount);
	void listEmployments(map<string, vector<string>>* dataMap);
	void addNewEmployment(Employment* newEmployment);
	string getCompanyName();
	string getBusinessNumber();
	vector<Employment*> getEmployments();
};

#endif //_COMPANYMEMBER_H