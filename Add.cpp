#include "Add.h"

bool Add::ModifyAlgorithm(Bookbase** global_b)
{
	system("cls");
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	cout << "��������ӵĵ�����Ϣ�� ʾ������" << endl;
	(*global_b)->example();
	cout << "��M���˳�" << endl;
	bool flag = true;
	string s = "";// ʣ�µ����ݽ���wordinfoȥ����
	if ((*global_b)->getword()[0].second == "")
	{
		flag = false;
	}

	while (true)
	{
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
		target.push_back(make_pair(w, s));

		cout << endl << "��ӳɹ�" << endl;
		cout.flush();
	}

	(*global_b)->save(target);
	cout << "�Ѿ��������";
	return true;
}