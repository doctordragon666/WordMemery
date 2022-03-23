#pragma once
#include "File.h"
//��¼�ࣺ��¼ÿһ�εļ�¼�������ɼ�������

class Record
{
public:
	Record(unsigned int score);
	std::string GetDate() const;
	void SetScore(unsigned int score);
	friend std::ostream& operator<<(std::ostream& in, Record r);
	friend std::istream& operator>>(std::istream& out, Record r);
	void Save();
private:
	std::string m_date;
	unsigned int m_score;
};

