#pragma once
#include "File.h"
#include "WordInfo.h"
class Bookbase
{
public:
	Bookbase();
	virtual ~Bookbase();
	virtual void show();
	virtual vector<pair<WordInfo, string>> getword();
	const int type = 1;
	virtual void example();
	virtual void save(vector<pair<WordInfo, string>> v);
protected:
	vector<WordInfo> m_word;
};
