#pragma once
#include "Strategy.h"
#include "ChooseC.h"
#include "ChooseE.h"
#include "MulChoose.h"
class ChooseFactory :public Strategy
{
public:
	int AlgorithmInterface(Bookbase*& global_b)
	{
		Choose* c = nullptr;
		int choose = 0;
		int score = 0;
		cout << "选择题算法实现" << endl;
		cout << "1.选择中文" << endl;
		cout << "2.选择英文" << endl;
		cout << "3.自定义选项个数" << endl;
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
