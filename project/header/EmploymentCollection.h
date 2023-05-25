#ifndef _EMPLOYMENTCOLLECTION_H
#define _EMPLOYMENTCOLLECTION_H

#define MAX_EMPLOYMENT 50

#include "Employment.h"
#include <vector>

class EmploymentCollection {
public: 
	void addEmployment(Employment* newEmployment);
	void deleteEmployment(Employment* newEmployment);
	vector<Employment*> getEmployments();
private: 
	vector<Employment*> employments;
};

#endif //_EMPLOYMENTCOLLECTION_H