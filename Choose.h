#pragma once
#include "Strategy.h"
#include "File.h"
using namespace std;

class Choose :
    public Strategy
{
public:
    int AlgorithmInterface(Bookbase** global_b);//ѡ����ͨ�ýӿ�
};

