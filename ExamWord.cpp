#include "ExamWord.h"

void ExamWord::showself()
{
	cout << English << " " << Chinese << " ��Դ��" << source << "\n";
}

ExamWord::ExamWord()
{
}

ExamWord& ExamWord::operator++()
{
	++m_error_time;
	return *this;//�������ã���Ϊÿ��ֻ�ܶ�ͬһit���
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