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
	bool operator==(WordInfo& a);
protected:
	int m_error_time;
	string Chinese;
	string English;
};

