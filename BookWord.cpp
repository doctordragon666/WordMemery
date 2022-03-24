#include "BookWord.h"

void BookWord::showself()
{
	cout << English << Chinese << m_error_time << "��" << unit << "��Ԫ ��Դ��" << book << endl;
}

BookWord::BookWord()
{
	m_error_time = 0;
	unit = 0;
}

BookWord& BookWord::operator++()
{
	++m_error_time;
	return *this;//�������ã���Ϊÿ��ֻ�ܶ�ͬһit���
}

ostream& operator<<(ostream& out, BookWord& w)
{
	out << w.English << " " << w.Chinese << " " << w.m_error_time <<
		" " << w.unit << " " << w.book << "\n";
	return out;
}

istream& operator>>(istream& in, BookWord& w)
{
	in >> w.English >> w.Chinese >> w.m_error_time >> w.unit >> w.book;
	return in;
}

bool BookWord::operator==(BookWord& a)
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

string BookWord::getbook() const
{
	return book;
}

int BookWord::getunit() const
{
	return unit;
}