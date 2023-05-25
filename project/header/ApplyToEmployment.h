#ifndef _APPLYTOEMPLOYMENT_H
#define _APPLYTOEMPLOYMENT_H

#include "NormalMember.h"
#include "ApplyToEmploymentUI.h"
#include <vector>
#include <map>

class ApplyToEmployment {
private:
    NormalMember* normalMember;
    ApplyToEmploymentUI* applyToEmploymentUI;
public:
    ApplyToEmploymentUI* getApplyToEmploymentUI();
    void setNormalMember(NormalMember* normalMember);
    void setApplyToEmploymentUI(ApplyToEmploymentUI* applyToEmploymentUI);
    vector<string> apply(string businessNumber, vector<Employment*> employments);
};

#endif // _APPLYTOEMPLOYMENT_H