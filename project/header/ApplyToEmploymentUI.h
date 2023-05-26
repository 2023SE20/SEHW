#ifndef _APPLYTOEMPLOYMENTUI_H
#define _APPLYTOEMPLOYMENTUI_H

#include <string>
using namespace std;

class ApplyToEmployment;

class ApplyToEmploymentUI {
private:
    FILE* inFp;
    FILE* outFp;
public:
    ApplyToEmploymentUI(FILE* inFp, FILE* outFp);
    void startInterface();
    void apply(ApplyToEmployment* applyEmployment, vector<Employment*> employments);
};

#endif // _APPLYTOEMPLOYMENTUI_H