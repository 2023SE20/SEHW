#ifndef _EMPLOYMENT_H
#define _EMPLOYMENT_H

#include <string>
using namespace std;

class Employment {
public: 
	Employment(string job, string deadline, int maxApplicants);
	string getJob();
	string getDeadline();
	int getMaxApplicants();
private: 
	string job;
	string deadline;
	int maxApplicants;
	int applicantsCount;
};

#endif //_EMPLOYMENT_H