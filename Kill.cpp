#include "Kill.h"

int Kill::AlgorithmInterface(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	size_t i = 0;
	if (v.size() == 0)
	{
		cout << "����Ϊ��";
	}
	while (true)
	{
		v[i].first.showself();
		cout << endl << "�Ƿ�Ҫɾ���������K,������һ��A, �˳���M: \t";
		char c = 'D';
		cin >> c;
		switch (c)
		{
		case 'K':
			v.erase(v.begin() + i);
			i++;
			break;
		case 'A':
			if (i != 1 && i != 0)
			{
				i--;
			}
			break;
		case 'M':
			i = v.size();
			break;
		default:
			i++;
			break;
		}
		if (v.size() == 0 ||  i == v.size())
		{
			break;
		}
	}

	(*global_b)->save(v);
	return 0;
}