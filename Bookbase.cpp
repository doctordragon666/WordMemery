#include "Bookbase.h"

Bookbase::Bookbase()
{
	cout << "总书库创建" << endl;
	cout << "总书库开始加载" << endl;
	ifstream ifs(TEST_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	WordInfo w;
	while (ifs >> w) //逐行读取，直到结束
	{
		this->m_word.push_back(w);
	}
	ifs.close();
	system("cls");
}

vector<pair<WordInfo, string>> Bookbase::getword()
{
	vector<pair<WordInfo, string>> v;
	for (auto i : m_word)
	{
		v.push_back(make_pair(i, ""));
	}
	return v;
}

Bookbase::~Bookbase()
{
	ofstream ofs(TEST_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "文件打开失败";
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
	cout << "总书库显示" << endl;
	int row_num = 0;
	for (auto i : m_word)
	{
		cout << ++row_num << "  " << i;
	}
}

void Bookbase::save(vector<pair<WordInfo, string>> v)
{
	m_word.clear();
	for (auto i : v)
	{
		m_word.push_back(i.first);
	}
	sort(m_word.begin(), m_word.end(), greater<>());
}

void Bookbase::example()
{
	cout << "词库示例： 中文空格英文" << endl;
}