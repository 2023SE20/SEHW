#include "../header/CancelApply.h"

/**
 * CancelApply UI implementation
 */

CancelApplyUI::CancelApplyUI(FILE* inFp, FILE* outFp) {
  this->inFp = inFp;
  this->outFp = outFp;
}

void CancelApplyUI::startInterface() {
  fprintf(outFp, "4.4. 지원 취소\n");
}

void CancelApplyUI::setInFp(FILE* inFp) {
    this->inFp = inFp;
}

void CancelApplyUI::setOutFp(FILE* outFp) {
    this->outFp = outFp;
}

//이름 번호 업무
void CancelApplyUI::selectApplyToCancel(NormalMember* currentMember, CancelApply* cancelApply) {
  string businessNumber;
  fscanf(inFp, "%s\n", businessNumber.data());
  
  vector<string> tmp = cancelApply->cancelToApply(currentMember, businessNumber);
  fprintf(outFp, "> %s %s %s\n\n", tmp.front().c_str(), businessNumber.c_str(), tmp.back().c_str());
}