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

int Change::AlgorithmInterface(Bookbase** global_b)
{
	int choose = 0;
	cin >> choose;
	switch (choose)
	{
	case 1:
		*global_b = new Bookbase();
		break;
	case 2:
		*global_b = new Exam();
		break;
	case 3:
		*global_b = new Xinghuo();
		break;
	case 4:
		*global_b = new WordBook();
		break;
	case 0:
		break;
	default:
		break;
	}
	system("pause");
	system("cls");
	return 0;//����0����Ϊ������ⲻ�����κεķ���
}