#include "Revise.h"

bool Revise::ModifyAlgorithm(Bookbase** global_b)
{
	system("cls");
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	Show().AlgorithmInterface(global_b);
	bool flag = true;
	string s = "";
	if ((*global_b)->type == 1)
	{
		flag = false;
	}

	while (true)
	{
		cout << "��������Ҫ�޸ĵĺ���, ��-1�˳��޸�";
		int num;
		cin >> num;
		if (num == -1)
		{
			return false;
		}
		(*global_b)->example();
		cout << "��M���˳�" << endl;

		string e;
		string c;
		cin >> e;

		if (e == "M")
		{
			break;
		}
		cin >> c;

		if (flag)
		{
			cin >> s;
		}

		WordInfo w(e, c);
		target[num] = make_pair(w, s);

		cout << endl << "��ӳɹ�" << endl;
	}

	(*global_b)->save(target);

	return true;
}