#pragma once
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

#include "File.h"
class WordInfo
{
public:
	virtual void showself();
	WordInfo();
	WordInfo& operator++()
	{
		++m_error_time;
		return *this;//�������ã���Ϊÿ��ֻ�ܶ�ͬһit���
	}
	friend ostream& operator<<(ostream& out, WordInfo& w);
	friend istream& operator>>(istream& in, WordInfo& w);
	bool operator==(WordInfo& a)  
	{
		if (a.English == this->English)
		{
			return true;
		}
		else
		{
			return false;
		}
	}//���صȺ�����ȥ�ظ�
protected:
	int m_error_time;
	string Chinese;
	string English;

//	class Word
//	{
//	public:
//		Word();
//		Word(string e, string c);
//		void show(vector<string> v);
//		void show();
//		string Chinese;
//		string English;
//		pair<string, string> dic;
//		vector<string> Chinese_lst;
//		bool operator==(Word& a)
//		{
//			if (a.English == this->English)
//			{
//				return true;
//			}
//			else
//			{
//				return false;
//			}
//		}
//	};
//
//
//	Word::Word(string e, string c)
//	{
//		this->English = e;
//		this->Chinese_lst = split(c, '/');
//		this->dic = make_pair(e, c);
//		this->Chinese = c;
//	}
//
//	void Word::show(vector<string> v)
//	{
//		cout << "���ĺ�����˼�У�" << endl;
//		for (auto i : v)
//		{
//			cout << "\t\t" << i << endl;
//		}
//	}
//
//	void Word::show()
//	{
//		cout << endl << "\t\t����" << dic.first;
//		show(Chinese_lst);
//	}
//
//
//	class Error :public Word
//	{
//	public:
//		Error();
//		Error(string e, string c, int t);
//		int error_time = 0;


//	};
//
//
//	Error::Error(string e, string c, int t) :Word(e, c), error_time(t) {}
//

};

