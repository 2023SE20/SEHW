#ifndef _EMPLOYMENT_H
#define _EMPLOYMENT_H

#include <string>
using namespace std;

/**
 * 채용 정보 entity 클래스
*/
class Employment {
private: 
	string job;
	string deadline;
	string companyName;
	string businessNumber;
	int maxApplicants;
	int applicantsCount;
public: 
	Employment(string job, string deadline, string companyName, string businessNumber, int maxApplicants);
	string getJob();
	string getDeadline();
	string getCompanyName();
	string getBusinessNumber();
	int getMaxApplicants();
	int getApplicantsCount();
};

#endif //_EMPLOYMENT_H