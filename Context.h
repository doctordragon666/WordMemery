#pragma once
#include "Strategy.h"
#include "Bookbase.h"
/*
�㷨�������Ĺ�����
*/

class Context
{
public:
	Context(Strategy* strategy);//����һ���㷨���󣬲�����������ṩͳһ�Ľӿ�
	void ContextInterface(unsigned int& score)
	{
		score += m_strategy->AlgorithmInterface(&global_b);//�����㷨�ӿڣ�Ȼ���ȡ����ֵ
	}
	void setbase(Bookbase* b);
	~Context();
	Bookbase* global_b;//ȫ�ֱ�������˽��
private:
	Strategy* m_strategy;//Ψһ��˽�б������㷨��
};

