#include "Show.h"


int Show::AlgorithmInterface(Bookbase** global_b)
{
	if (!global_b)
	{
		cout << "������" << endl;
		return 0;
	}
	if (*global_b == nullptr)
	{
		cout << "������" << endl;
		return 0;
	}
	(*global_b)->show();
	cout << "��ʾ�㷨����" << endl;
	return 0;
}