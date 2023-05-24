#include "../header/ViewEmployments.h"

/**
 * ViewEmployments implementation
 */

void ViewEmployments::setViewEmploymentUI(ViewEmploymentsUI* viewEmploymentsUI) {
    this->viewEmploymentsUI = viewEmploymentsUI;
}

void ViewEmployments::setCompanyMember(CompanyMember* companyMember) {
    this->companyMember = companyMember;
}

ViewEmploymentsUI* ViewEmployments::getViewEmploymentUI() {
    return this->viewEmploymentsUI;
}

CompanyMember* ViewEmployments::getCompanyMember() {
    return this->companyMember;
}