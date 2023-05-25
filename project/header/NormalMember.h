/**
 * Project Untitled
 */


#ifndef _NORMALMEMBER_H
#define _NORMALMEMBER_H

#include "Member.h"
#include "EmploymentCollection.h"
#include <string>
using namespace std;

class NormalMember : Member{
  private:
    string name;
    string idNumber;
    EmploymentCollection* employmentCollection;
  public: 
    NormalMember(String id, string password, string name, string idNumber);
    void listEmployments(vector<string>* job, 
      vector<string>* deadline, 
      vector<string>* companyName,
      vector<string>* businessNumber, 
      vector<int>* applicantsCount,
      vector<int>* maxApplicants);
  
};

#endif //_NORMALMEMBER_H