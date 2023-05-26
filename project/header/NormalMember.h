#ifndef _NORMALMEMBER_H
#define _NORMALMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
#include <string>
#include <map>
using namespace std;

class NormalMember : public Member {
private:
  string name;
  string idNumber;
  EmploymentCollection* employmentCollection;
public: 
  NormalMember(string id, string password, string name, string idNumber);
  EmploymentCollection* getEmploymentCollection() {return employmentCollection;}
  void listEmployments(map<string, vector<string>>* dataMap);
  void apply(Employment* employment);
};

#endif //_NORMALMEMBER_H