//#pragma once
//#include <iostream>
//#include <map>
//#include <algorithm>
//#include "Function.h"
//#include "File.h"
//using namespace std;
//
///*
//
//�����˹���Ա���������Ϲ�������ļ�������������û�������
//���캯��
//��Ա��1.�Զ���ʿ�
//	 2.����ʿ�
//�ӿڣ�
//1.�Ӳ˵�
//2.��ӵ���
//3.����
//4.��ӵ���
//5.ѡ������
//6.ѡ����Ӣ
//7.Ĭд����
//8.Ĭд��Ӣ
//
//*/
//
//class Manager
//{
//public:
//	Manager();
//	void submenu();
//	void m_addWord();
//	void choose_c();
//	void choose_e();
//	void dictation_c();
//	void dictation_e();
//	void search();
//private:
//	vector<Word> dic;
//	vector<Error> error;
//};
//
//void Manager::submenu()
//{
//	bool active = true;
//	while (active)
//	{
//		system("cls");
//		cout << "\t\t------------------------------�ʿ���ս--------------------------------------\n\t\t**\n";
//		cout << "\t\t**\t\t1.��ѡ����" << endl;
//		cout << "\t\t**\t\t2.��ѡ��Ӣ" << endl;
//		cout << "\t\t**\t\t3.Ĭд����" << endl;
//		cout << "\t\t**\t\t4.Ĭд��Ӣ" << endl;
//		cout << "\t\t**\t\t0.�˳���ս" << endl;
//		cout << "\t\t\t\t         ���������ѡ��_________\b\b\b\b\b\b";
//		int choice;
//		cin >> choice;
//		switch (choice)
//		{
//		case 0:
//			active = false;
//			system("cls");
//			break;
//		case 1:
//			choose_c();
//			break;
//		case 2:
//			choose_e();
//			break;
//		case 3:
//			dictation_c();
//			break;
//		case 4:
//			dictation_e();
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//Manager::Manager()
//{
//	dic = f.loadFile(WORD_FILE);
//	error = f.loadFile(USER_FILE,0);
//}
//
//void Manager::m_addWord()
//{
//	f.save(f.addWord(dic),WORD_FILE);
//}
//
//void Manager::search()
//{
//	system("cls");
//	while (true)
//	{
//		string find_word;
//		cout << "\t\t��������Ҫ���ҵĵ���/����: ����m����: ";
//		cin >> find_word;
//		if (find_word == "m")
//		{
//			system("cls");
//			break;
//		}
//		auto result = f.find_word(find_word, dic);
//		if (result.tag)
//		{
//			cout << endl << "\t\t���ҵ�" << endl;
//			result.v.show();
//		}
//		else
//		{
//			cout << endl << "\t\t���ʲ����ڣ����ȼ���ʿ�" << endl;
//		}
//		printf("\t\t<�س���������>");
//		system("pause");
//		system("cls");
//	}
//}
//
//void Manager::choose_c()
//{
//	f.choose_c(dic, error);
//}
//
//void Manager::choose_e()
//{
//	f.choose_e(dic, error);
//}
//
//void Manager::dictation_c()
//{
//	f.dictation_c(dic, error);
//}
//
//void Manager::dictation_e()
//{
//	f.dictation_e(dic, error);
//}