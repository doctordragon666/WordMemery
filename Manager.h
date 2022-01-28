#pragma once
#include <iostream>
#include <map>
#include <algorithm>
#include "Function.h"
#include "File.h"
using namespace std;
class Manager
{
public:
	Manager();
	void submenu();
	void m_addWord();
	void search();
private:
	vector<Word> dic;
};

void Manager::submenu()
{
	bool active = true;
	while (active)
	{
		cout << "\t\t------------------------------�ʿ���ս--------------------------------------" << endl << endl;
		cout << "\t\t\t\t1.��ѡ����" << endl;
		cout << "\t\t\t\t2.��ѡ��Ӣ" << endl;
		cout << "\t\t\t\t3.Ĭд����" << endl;
		cout << "\t\t\t\t4.Ĭд��Ӣ" << endl;
		cout << "\t\t\t\t4.Ĭд��Ӣ" << endl;
		cout << "\t\t\t\t         ���������ѡ��_________\b\b\b\b\b\b";
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 0:
			active = false;
			break;
		case 1:
			
		default:
			break;
		}
	}
}

Manager::Manager()
{
	dic = loadFile(WORD_FILE);
}

void Manager::m_addWord()
{
	save(addWord(dic),WORD_FILE);
}

void Manager::search()
{
	system("cls");
	while (true)
	{
		string find_word;
		cout << "\t\t��������Ҫ���ҵĵ���/����: ����m����: ";
		cin >> find_word;
		if (find_word == "m")
		{
			system("cls");
			break;
		}
		pair<bool, Word> result = find(find_word, dic);
		if (result.first)
		{
			cout << endl << "\t\t���ҵ�" << endl;
			result.second.show();
		}
		else
		{
			cout << endl << "\t\t���ʲ����ڣ����ȼ���ʿ�" << endl;
		}
		printf("\t\t<�س���������>");
		system("pause");
		system("cls");
	}
}
