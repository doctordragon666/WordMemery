#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

/*
�����˵����࣬��Ϊ���֣�������ӿڣ�
һ���洢�ڴʿ��еĵ���
�ӿڣ�
1.�޲ι�����вι���
2.��ʾ���󣨸�ʽ����
3.���غ���ڣ�����ȥ�ظ�
���ԣ�
1.����
2.Ӣ��
3.��Ӣ�ֵ�
4.һ�ʶ���
�����洢���û��еĵ���
�̳���1
�ӿڣ�4.������++�ţ����Ӵ������
���ԣ�5.�������
�������ݵ���Ҫ����������һ���ַ����������ָ�ĳ���ض��ķ���
*/

vector<string> split(string& s, char c)
{
	vector<string> v;
	string behind;
	string end = s;
	while (end != "")
	{
		size_t pos = end.find(c);
		if (pos != -1)
		{
			behind = end.substr(0, pos);
			if (behind != "")
			{
				v.push_back(behind);
			}
			end = end.substr(pos + 1, s.size());
		}
		else
		{
			v.push_back(end);
			break;
		}
	}
	return v;
}

class Word
{
public:
	Word();
	Word(string e, string c);
	void show(vector<string> v);
	void show();
	friend ostream& operator <<(ostream& out, Word w);
	string Chinese;
	string English;
	pair<string, string> dic;
	vector<string> Chinese_lst;
	bool operator==(Word& a)
	{
		if (a.English == this->English)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

Word::Word(){}

Word::Word(string e, string c)
{
	this->English = e;
	this->Chinese_lst = split(c, '/');
	this->dic = make_pair(e, c);
	this->Chinese = c;
}

void Word::show(vector<string> v)
{
	cout << "���ĺ�����˼�У�" << endl;
	for (auto i : v)
	{
		cout << "\t\t" << i << endl;
	}
}

void Word::show()
{
	cout << endl << "\t\t����" << dic.first;
	show(Chinese_lst);
}

ostream& operator <<(ostream& out, Word w)
{
	out << w.English << " " << w.Chinese;
	return out;
}

class Error:public Word
{
public:
	Error();
	Error(string e, string c, int t);
	int error_time = 0;
	Error& operator++()
	{
		++error_time;
		return *this;//�������ã���Ϊÿ��ֻ�ܶ�ͬһit���
	}
	bool operator==(Error& a)
	{
		if (a.English == this->English)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

Error::Error(){}

Error::Error(string e, string c, int t)
{
	this->English = e;
	this->Chinese_lst = split(c, '/');
	this->dic = make_pair(e, c);
	this->Chinese = c;
	this->error_time = t;
}

ostream& operator <<(ostream& out, Error w)
{
	out << w.English << " " << w.Chinese << " " << w.error_time;
	return out;
}