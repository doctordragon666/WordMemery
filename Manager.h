#pragma once
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
class Manager
{
public:
	Manager();
	~Manager();
	void menu();
private:

};

void Manager::menu()
{
	cout << "����ϵͳ" << endl << endl;
	cout << "1.¼�뵥��" << endl;
	cout << "\t\t\t\t         ���������ѡ��_________\b\b\b\b\b\b";
}

Manager::Manager()
{
}

Manager::~Manager()
{
}