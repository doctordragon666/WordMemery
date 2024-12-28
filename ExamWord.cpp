#include "ExamWord.h"

void ExamWord::showself()
{
	cout << English << " " << Chinese << " 来源：" << source << "\n";
}

ExamWord::ExamWord()
{
	m_error_time = 0;
}

ExamWord::ExamWord(WordInfo w, string s)
{
	this->Chinese = w.getc();
	this->English = w.gete();
	this->m_error_time = w.gettime();
	this->source = s;
}

ExamWord& ExamWord::operator++()
{
	++m_error_time;
	return *this;//返回引用，因为每次只能对同一it相加
}
ostream& operator<<(ostream& out, ExamWord& w)
{
	out << w.English << " " << w.Chinese << " " << w.m_error_time << " " << w.source << "\n";
	return out;
}

istream& operator>>(istream& in, ExamWord& w)
{
	in >> w.English >> w.Chinese >> w.m_error_time >> w.source;
	return in;
}

string ExamWord::getsource()
{
	return this->source;
}

bool ExamWord::operator==(ExamWord& a)
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