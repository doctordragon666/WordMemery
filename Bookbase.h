#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	//�����ʱ���show��ָ��ֱ����д
	Bookbase();
	~Bookbase();
	virtual void show();
	virtual vector<pair<WordInfo, string>> getword();
	const int type = 1;
	virtual void save(vector<pair<WordInfo, string>> v);
protected:
	vector<WordInfo> m_word;
};

