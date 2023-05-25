#ifndef _VIEWAPPLYINFO_H
#define _VIEWAPPLYINFO_H

#include "NormalMember.h"
#include "ViewApplyInfoUI.h"

/**
 * 등록한 채용 정보 조회 control 클래스
*/
class ViewApplyInfo {
public:
	void setViewApplyInfoUI(ViewApplyInfoUI* viewApplyInfoUI);
	void setNormalMember(NormalMember* normalMember);
	ViewApplyInfoUI* getViewApplyInfoUI();
	NormalMember* getNormalMember();
private: 
	NormalMember* normalMember;
	ViewApplyInfoUI* viewApplyInfoUI;
};

#endif //_VIEWAPPLYINFO_H