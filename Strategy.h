#pragma once
#include "Bookbase.h"
class Strategy
{
public:
	virtual int AlgorithmInterface(Bookbase** global_b) = 0;
	//���е��㷨��Ҫ���ط��������ұ���̳�����
};

