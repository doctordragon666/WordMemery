#pragma once
#include "File.h"
#include "WordInfo.h"
#include "Show.h"
class Bookbase
{
public:
	//�����ʱ���show��ָ��ֱ����д
	virtual void Load() {}
protected:
	vector<WordInfo> m_word;
	Show show;//����Show��ָ��
};

