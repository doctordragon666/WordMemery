#include "Del.h"

bool Del::ModifyAlgorithm(Bookbase** global_b)
{
	vector<pair<WordInfo, string>> target = (*global_b)->getword();
	Show().AlgorithmInterface(global_b);


	while (true)
	{
		cout << "������ɾ���ĵ��ʱ��, -1����";
		int num;
		cin >> num;
		if (num == -1)
		{
			break;
		}
		else
		{
			cout << (*(target.begin() + num-1)).first;
			swap(*(target.begin() + num-1), *(target.end()-1));
			target.pop_back();
			cout << "ɾ���ɹ�\n";
		}
	}

	(*global_b)->save(target);

	return true;
}