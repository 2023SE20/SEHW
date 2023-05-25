#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"

/**
 * 회사 회원 entity 클래스
*/
class CompanyMember: public Member {
public: 
	CompanyMember(string id, string password, string companyName, int businessNumber);
	void listEmployments(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants);
	void addNewEmployment(Employment* newEmployment);
	string getCompanyName();
private: 
	string companyName;
	int businessNumber;
	EmploymentCollection* employmentCollection;
};

#endif //_COMPANYMEMBER_H