#include "WordBook.h"

WordBook::WordBook()
{
	cout << "����ⴴ��" << endl;
	cout << "����⿪ʼ����" << endl;
	ifstream ifs(TEXT_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	BookWord w;
	while (ifs >> w) //���ж�ȡ��ֱ������
	{
		this->m_word.push_back(w);
	}
	ifs.close();
}

WordBook::~WordBook()
{
	ofstream ofs(TEXT_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	for (vector<BookWord>::iterator it = m_word.begin(); it != m_word.end(); it++)
	{
		ofs << *it;
	}
	ofs.close();
	this->m_word.clear();
}

void WordBook::show()
{
	for (auto i : m_word)
	{
		cout << i;
	}
}

vector<BookWord> WordBook::getword()
{
	return m_word;
}