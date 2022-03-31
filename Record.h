#pragma once
#include "File.h"
//��¼�ࣺ��¼ÿһ�εļ�¼�������ɼ�������

class Record
{
public:
	Record(unsigned int score);
	Record(string s);
	std::string GetDate() const;
	void SetScore(unsigned int score);
	friend std::ostream& operator<<(std::ostream& out, Record r);
	friend std::istream& operator>>(std::istream& in, Record r);
	void Save();
private:
	std::string m_date;
	unsigned int m_score;
	string error = "";
};

