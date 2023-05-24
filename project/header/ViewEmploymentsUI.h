#ifndef _VIEWEMPLOYMENTSUI_H
#define _VIEWEMPLOYMENTSUI_H

#include <string>
#include <vector>
using namespace std;

class ViewEmploymentsUI {
public: 
	ViewEmploymentsUI(FILE* inFp, FILE* outFp);
	void startInterface();
	void showEmployment(vector<string>* job, vector<string>* deadline, vector<int>* maxApplicants);
private: 
	FILE* inFp;
	FILE* outFp;
};

#endif //_VIEWEMPLOYMENTSUI_H