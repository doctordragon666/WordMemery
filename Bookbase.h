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
protected:
	vector<WordInfo> m_word;
};

