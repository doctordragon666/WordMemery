#pragma once
#include "Strategy.h"
/*
�㷨�������Ĺ�����
*/

class Context
{
public:
	Context(Strategy* strategy) :m_strategy(strategy) {}//����һ���㷨���󣬲�����������ṩͳһ�Ľӿ�
	void ContextInterface(unsigned int& score)
	{
		score += m_strategy->AlgorithmInterface();//�����㷨�ӿڣ�Ȼ���ȡ����ֵ
	}
private:
	Strategy* m_strategy;//Ψһ��˽�б������㷨��
};

