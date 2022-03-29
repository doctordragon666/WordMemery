#pragma once
#include "Strategy.h"
#include "ChooseC.h"
#include "ChooseE.h"
#include "MulChoose.h"
class ChooseFactory:public Strategy
{
public:
	int AlgorithmInterface(Bookbase**global_b)
	{
		Choose* c = nullptr;
		int choose = 0;
		int score = 0;
		cout << "ѡ�����㷨ʵ��" << endl;
		cout << "1.ѡ������" << endl;
		cout << "2.ѡ��Ӣ��" << endl;
		cout << "3.�Զ���ѡ�����" << endl;
		cin >> choose;
		switch (choose)
		{
		case 1:
			c = new ChooseC();
			break;
		case 2:
			c = new ChooseE();
			break;
		case 3:
			c = new MulChoose();
			break;
		default:
			break;
		}
		score = c->ChooseInterface(global_b);
		return score;
	}
};

