#include "Memery.h"

int Memery::AlgorithmInterface(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	int error_word = 0;
	bool flag = false;

	cout << "���������Ŀ�굥�ʸ���" << endl;
	int target = 0;
	cin >> target;
	map<int, pair<WordInfo, string>> target_word;
	while (target_word.size() < target)
	{
		int t = random(v.size());
		target_word.insert(make_pair(t, v[t]));
	}
	cout << "��ȡ���" << endl;
	for (auto i : target_word)
	{
		cout << i.first << i.second.first;
	}
	system("pause");
	system("cls");

	while (true)
	{
		for (map<int, pair<WordInfo, string>>::iterator it = target_word.begin(); it != target_word.end(); it++)
		{
			it->second.first.showself();
			system("pause");
			system("cls");
			cout << it->second.first.getc();
			cout << "��������˼" << endl;
			string mean;
			cin >> mean;
			if (mean == it->second.first.gete())
			{
				continue;
			}
			else if (mean == "M")
			{
				break;
			}
			else
			{
				cout << "�������,��ȷ����" << it->second.first.gete();
				error_word++;
				it--;
			}
		}
		if (1.0 * error_word / (double)target < 0.001)
		{
			cout << "�������" << endl;
			Record r("����һ����ס��" + to_string(target) + "������");
			r.Save();
			break;
			system("pause");
		}
		else
		{
			cout << "���������" << endl;
		}
	}
	return 0;
}