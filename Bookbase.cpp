#include "Bookbase.h"

Bookbase::Bookbase()
{
	cout << "����ⴴ��" << endl;
	cout << "����⿪ʼ����" << endl;
	ifstream ifs(TEST_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	WordInfo w;
	while (ifs >> w) //���ж�ȡ��ֱ������
	{
		this->m_word.push_back(w);
	}
	ifs.close();
}

vector<WordInfo> Bookbase::getword()
{
	return m_word;
}

Bookbase::~Bookbase()
{
	ofstream ofs(TEST_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	for (vector<WordInfo>::iterator it = m_word.begin(); it != m_word.end(); it++)
	{
		ofs << *it;
	}
	ofs.close();
	this->m_word.clear();
}

void Bookbase::show()
{
	cout << "�������ʾ" << endl;
	for (auto i : m_word)
	{
		cout << i;
	}
}
