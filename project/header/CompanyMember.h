#ifndef _COMPANYMEMBER_H
#define _COMPANYMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"

// #include <vector>
// #include <string>
// using namespace std;

class CompanyMember: public Member {
private: 
	string companyName;
	string businessNumber;
	EmploymentCollection* employmentCollection;
public: 
	CompanyMember(string id, string password, string companyName, int businessNumber);
	void listEmployments(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants, vector<int>* applicantsCount);
	void addNewEmployment(Employment* newEmployment);
	string getCompanyName();
	string getBusinessNumber();
};

#endif //_COMPANYMEMBER_H