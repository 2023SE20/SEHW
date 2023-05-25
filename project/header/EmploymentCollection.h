#ifndef _EMPLOYMENTCOLLECTION_H
#define _EMPLOYMENTCOLLECTION_H

#define MAX_EMPLOYMENT 50

#include "Employment.h"
#include <vector>

/**
 * 회사 회원, 채용 정보 간의 1:N 관계를 나타내기 위한 collection 클래스
*/
class EmploymentCollection {
public: 
	void addEmployment(Employment* newEmployment);
	vector<Employment*> getEmployments();
private: 
	vector<Employment*> employments;
};

#endif //_EMPLOYMENTCOLLECTION_H