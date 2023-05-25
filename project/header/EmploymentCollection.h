#ifndef _EMPLOYMENTCOLLECTION_H
#define _EMPLOYMENTCOLLECTION_H

#include "Employment.h"
#include <vector>

class EmploymentCollection {
private: 
	vector<Employment*> employments;
public: 
	void addEmployment(Employment* newEmployment);
	void deleteEmployment(int idx);
	vector<Employment*> getEmployments();
};

#endif //_EMPLOYMENTCOLLECTION_H