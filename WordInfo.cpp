#include "WordInfo.h"

WordInfo::WordInfo()
{
	m_error_time = 0;
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
	cout <<"����Ĵ���"<< m_error_time<<"��Դ" << source;
}