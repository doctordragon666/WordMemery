#include "Search.h"
Search::Search()
{
	cout << "����ģʽ����" << endl;
}

int Search::AlgorithmInterface(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	string s;
	bool flag = true;
	int i;
	while (true)
	{
		cout << "��������Ҫ���ҵ�����, ����M����";
		cin >> s;
		if (s == "M")
		{
			break;
		}
		for (i = 0; i < v.size(); i++)
		{
			if (find_mode(v[i], s))
			{
				cout << "���ҵ�";
				v[i].first.showself();
				flag = false;
			}
		}
		if (flag)
		{
			cout << "����ʧ�ܣ��Ƿ���Ӹõ���?Y/N";
			string choose;
			cin >> choose;
			if (choose == "Y")
			{
				cout << "�������걸��Ϣ����" << endl;
				v[0].first.showself();
				cout << "δ�����" << endl;
			}
		}
	}
	return 0;
}

bool Search::find_mode(pair<WordInfo, string> v, string s)
{
	vector<string> cl = v.first.getcl();
	return (find(cl.begin(), cl.end(), s) != cl.end()) || (v.first.gete().find(s) != -1);
}