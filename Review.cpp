#include "Review.h"

int Review::AlgorithmInterface(Bookbase*& global_b)
{
	int score = 0;
	cout << "选择复习模式" << endl;
	cout << "1.听写中文" << endl;
	cout << "2.听写英文" << endl;
	int choose;
	cin >> choose;
	Dictation* target = new Dictation();
	switch (choose)
	{
	case 1:
		target = new DictationC();
		break;
	case 2:
		target = new DictationE();
		break;
	default:
		break;
	}
	score = target->DictationAlgorithm(global_b);
	delete target;
	return score;
}