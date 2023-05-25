#include "CancelApply UI.h"

// CancelApplyUI(FILE* inFp, FILE* outFp);
// 	  void setInFp(FILE* inFp);
// 	  void setOutFp(FILE* outFp);
// 	  void startInterface();
// 	  void selectApplyToCancel(CancelApply* cancelApply);

/**
 * CancelApply UI implementation
 */

CancelApplyUI::CancelApplyUI(FILE* inFp, FILE* outFp){
  this->inFp = inFp;
  this->outFp = outFp
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
void CancelApplyUI::selectApplyToCacncel(NormalMember* currentMember, CancelApply* cancelApply) {
  string businessNumber;
  vector<string> tmp = cancelApply->CanceltoApply(currentMember);
  fscanf(inFp, "%s\n", businessNumber.data());
  fprintf(outFp, "> %s %s %s\n\n", tmp.front().c_str(), businessNumber.c_str(), tmp.back().c_str());
}