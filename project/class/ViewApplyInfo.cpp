#include "../header/ViewApplyInfo.h"

/**
 * ViewApplyInfo implementation
 */


void ViewApplyInfo::setViewApplyInfoUI(ViewApplyInfoUI* viewApplyInfoUI) {
    this->viewApplyInfoUI = viewApplyInfoUI;
}

void ViewApplyInfo::setNormalMember(NormalMember* normalMember) {
    this->normalMember = normalMember;
}

ViewApplyInfoUI* ViewApplyInfo::getViewApplyInfoUI() {
    return this->viewApplyInfoUI;
}

NormalMember* ViewApplyInfo::getNormalMember() {
    return this->normalMember;
}