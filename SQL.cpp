#include "SQL.h"

bool SQL::ModifyAlgorithm(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	cout << "��������ӵ���Ϣ";
	int word_type = (*global_b)->type;
	cout << word_type;
	WordInfo w;
	string s;
	cin >> w >> s;

	return true;
}