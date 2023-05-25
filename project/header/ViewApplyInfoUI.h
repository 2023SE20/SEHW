#ifndef _VIEWAPPLYINFOUI_H
#define _VIEWAPPLYINFOUI_H

#include <string>
#include <vector>
#include <map>
using namespace std;

class ViewApplyInfo;

/**
 * 등록한 채용 정보 조회 control 클래스
*/
class ViewApplyInfoUI {
public:
	ViewApplyInfoUI(FILE* inFp, FILE* outFp);
	void startInterface();
	void showApplyInfos(map<string, vector<string>> dataMap);
private: 
	FILE* inFp;
	FILE* outFp;
};

#endif //_VIEWAPPLYINFOUI_H