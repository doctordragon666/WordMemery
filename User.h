#pragma once
#include <iostream>
using namespace std;
class User
{
public:
	User();
	void subMenu();
private:
	vector<Word> self_dic;
};

User::User()
{
	self_dic = loadFile(USER_FILE);
}

void User::subMenu()
{
	cout << "\t\t------------------------------�ʿ���ս--------------------------------------" << endl << endl;
	cout << "\t\t\t\t1.��ѡ����" << endl;
	cout << "\t\t\t\t2.��ѡ��Ӣ" << endl;
	cout << "\t\t\t\t3.Ĭд����" << endl;
	cout << "\t\t\t\t4.Ĭд��Ӣ" << endl;
	cout << "\t\t\t\t5.ն��ģʽ" << endl;
	cout << "\t\t\t\t0.�˳���ս" << endl;
	cout << "\t\t\t\t         ���������ѡ��_________\b\b\b\b\b\b";
}