#include "WordInfo.h"

WordInfo::WordInfo()
{
	m_error_time = 0;
}

WordInfo::WordInfo(string e, string c)
{
	this->English = e;
	this->Chinese = c;
}

ostream& operator<<(ostream& out, WordInfo& w)
{
	out << w.English << " " << w.Chinese << " " << w.m_error_time << "\n";
	return out;
}

istream& operator>>(istream& in, WordInfo& w)
{
	in >> w.English >> w.Chinese >> w.m_error_time;
	return in;
}

void WordInfo::showself()
{
	cout << English << Chinese << endl;
}

bool WordInfo::operator==(WordInfo& a)
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

bool WordInfo::operator>(const WordInfo& a)
{
	if (this->English.compare(a.English) > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string WordInfo::getc()
{
	return Chinese;
}

string WordInfo::gete()
{
	return English;
}

vector<string> WordInfo::getcl()
{
	vector<string> cl = split(Chinese, ';');
	return cl;
}

WordInfo& WordInfo::operator++()
{
	++m_error_time;
	return *this;//返回引用，因为每次只能对同一it相加
}

int WordInfo::gettime()
{
	return m_error_time;
}