#include "Bookbase.h"

Bookbase::Bookbase()
{
	cout << "����ⴴ��";
}

void Bookbase::Load()
{
	cout << "load";
	//fstream fs(WORD_FILE, ios::out);
	//char buf[100] = "";
	//if (!fs.is_open())
	//{
	//	cout << "�ļ���ʧ��";
	//	return;
	//}
	//while (fs.getline(buf, sizeof(buf)/sizeof(char)))
	//{
	//	cout << buf << endl;
	//	system("pause");
	//}
}

Bookbase::~Bookbase()
{
	cout << "���������";
}