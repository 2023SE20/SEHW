#ifndef _EMPLOYMENTCOLLECTION_H
#define _EMPLOYMENTCOLLECTION_H

#include "Employment.h"
#include <vector>

/**
 * 회사 회원, 채용 정보 간의 1:N 관계를 나타내기 위한 collection 클래스
*/
class EmploymentCollection {
private: 
	vector<Employment*> employments;
public: 
	void addEmployment(Employment* newEmployment);
	void deleteEmployment(int idx);
	vector<Employment*> getEmployments();
};

#endif //_EMPLOYMENTCOLLECTION_H