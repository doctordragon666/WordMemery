#include "DictationE.h"

int DictationE::DictationAlgorithm(Bookbase** global_b)
{
	//ĬдӢ��
	system("cls");
	string answer;
	int score = 0;
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	//��֤�е��ʼ� 
	if (v.empty())
	{
		system("pause");
		system("cls");
		return score;
	}
	while (true) 
	{
		int s = random(v.size());
		auto t = v[s].first.getcl()[random(v[s].first.getcl().size())];
		cout << "\t\t�����뵥�ʡ�" << t << "����Ӣ����˼������M���ز˵�����";
		cin >> answer;
		if (answer == "M")
		{
			cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		if (v[s].first.gete() == answer) {
			cout << "\n\t\t��ϲ�����ˣ�����,������" << ++score << "\n\n\t\t";
		}
		else {
			cout << endl << "\t\t����ˡ�" << t << "����Ӣ����:" << v[s].first.gete() << endl << endl;
			++v[s].first;
		}
		cout << "\n\t\t<�س���һ��>";
		system("pause");
		system("cls");
	}
}