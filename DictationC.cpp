#include "DictationC.h"

int DictationC::DictationAlgorithm(Bookbase** global_b)
{
	//Ĭд����
	system("cls");
	int score = 0;
	vector<pair<WordInfo, string>> v = (*global_b)->getword();
	//��֤�е��ʼ� 
	if (v.empty())
	{
		system("pause");
		system("cls");
		return 0;
	}
	while (true) {
		string msg;
		int seed = random(v.size());
		//ȷ���������λ�� 
		cout << "\t\t�����뵥�ʡ�" << v[seed].first.gete() << "����������˼������M���ز˵�����";
		cin >> msg;
		vector<string> answer = v[seed].first.getcl();
		if (msg == "M")
		{
			cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		if (find(answer.begin(), answer.end(), msg) != answer.end())
		{
			cout << "\n\t\t��ϲ�����ˣ�����,������" << ++score << "\n\n\t\t";
		}
		else
		{
			cout << endl << "\t\tд���ˡ�" << v[seed].first.gete() << "����������˼��:" << v[seed].first.getc();
			++v[seed].first;
		}
		cout << "\n\t\t<�س���һ��>";
		system("pause");
		system("cls");
	}
}