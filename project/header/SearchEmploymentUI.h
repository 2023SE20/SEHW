#ifndef _SEARCHEMPLOYMENTUI_H
#define _SEARCHEMPLOYMENTUI_H

#include "Employment.h"

using namespace std;

class SearchEmployment;

class SearchEmploymentUI {
private:
    FILE* inFp;
    FILE* outFp;
public:
    SearchEmploymentUI(FILE* inFp, FILE* outFp);
    void startInterface();
    vector<Employment*> searchEmployments(SearchEmployment* searchEmployment);
};

#endif // _SEARCHEMPLOYMENTUI_H