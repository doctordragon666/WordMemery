#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	//�����ʱ���show��ָ��ֱ����д
	Bookbase();
	void Load();
	~Bookbase();
protected:
	vector<WordInfo> m_word;
};

