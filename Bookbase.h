#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	//�����ʱ���show��ָ��ֱ����д
	void Load();
protected:
	vector<WordInfo> m_word;
};

