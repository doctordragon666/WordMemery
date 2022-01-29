#pragma once
#include <iostream>
#include "Function.h"
using namespace std;
class User
{
public:
	User();
	void subMenu();
	void choose_c();
	void choose_e();
	void dictation_c();
	void dictation_e();
private:
	vector<Error> self_dic;
	void kill_word();
};

User::User()
{
	self_dic = f.loadFile(USER_FILE,0);
	if (self_dic.size() == 0)
	{
		self_dic = f.loadFile(BASE_FILE, 1);
		f.save(self_dic, USER_FILE);
	}
}

void User::subMenu()
{
	bool active = true;
	while (active)
	{
		system("cls");
		cout << "\t\t------------------------------�ʿ���ս--------------------------------------\n\t\t$$\n";
		cout << "\t\t$$\t\t1.��ѡ����" << endl;
		cout << "\t\t$$\t\t2.��ѡ��Ӣ" << endl;
		cout << "\t\t$$\t\t3.Ĭд����" << endl;
		cout << "\t\t$$\t\t4.Ĭд��Ӣ" << endl;
		cout << "\t\t$$\t\t5.ն��ģʽ" << endl;
		cout << "\t\t$$\t\t0.�˳���ս" << endl;
		cout << "\t\t\t\t         ���������ѡ��_________\b\b\b\b\b\b";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			active = false;
			system("cls");
			break;
		case 1:
			choose_c();
			break;
		case 2:
			choose_e();
			break;
		case 3:
			dictation_c();
			break;
		case 4:
			dictation_e();
			break;
		case 5:
			kill_word();
		default:
			break;
		}
	}
}

void User::choose_c()
{
	f.choose_c(self_dic, self_dic);
}

void User::choose_e()
{
	f.choose_e(self_dic, self_dic);
}

void User::dictation_c()
{
	f.dictation_c(self_dic, self_dic);
}

void User::dictation_e()
{
	f.dictation_e(self_dic, self_dic);
}

void User::kill_word()
{
	system("cls");
	for (auto it = self_dic.begin(); it != self_dic.end(); it++)
	{
		it->show();
		cout << "\n\n\t\t�Ƿ�Ҫն���������(��kն,0�˳�,����������): ";
		string tip;
		cin >> tip;
		if (tip == "k")
		{
			self_dic.erase(it);
			cout << "\t\t�Ѿ�ɾ��";
		}
		else if(tip == "0")
		{
			break;
		}
		else
		{
			system("cls");
			continue;
		}
		system("cls");
	}
	f.save(self_dic, USER_FILE);
}