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
	vector<WordInfo> getword();
	const int type = 0;
	virtual void save(vector<WordInfo> v);
protected:
	vector<WordInfo> m_word;
};

