#include "Change.h"
#include "Bookbase.h"
#include "Exam.h"
#include "Xinghuo.h"
#include "WordBook.h"
#include "Bookbase.h"

Bookbase* base;

Change::Change()
{
	cout << "�ı�ʿ�����" << endl;
	cout << "1.�ܴʿ�" << endl;
	cout << "2.���Դʿ�" << endl;
	cout << "3.�ǻ�ʿ�" << endl;
	cout << "4.�鱾�ʿ�" << endl;
	cout << "0.ȡ������" << endl;
	cout << "��ȷ��Ҫ������������ʿ����ÿ�ν�����һ�β�����" << endl;
}

int Change::AlgorithmInterface()
{
	int choose = 0;
	cin >> choose;
	switch (choose)
	{
	case 1:
		base = new Bookbase();
		break;
	case 2:
		base = new Exam();
		break;
	case 3:
		base = new Xinghuo();
		break;
	case 4:
		base = new WordBook();
		break;
	case 0:
		break;
	default:
		break;
	}
	return 0;
}