#include "MulChoose.h"

int MulChoose::ChooseInterface(Bookbase** global_b)
{
	system("cls");
	cout << "���������ѡ���󲻳���10";
	int num;
	cin >> num;
	vector<pair<WordInfo, string>> w_lst = (*global_b)->getword();
	int score = 0;
	//��������ѡ��Ӣ��
	system("cls");
	if (w_lst.size() < num)
	{
		cout << "���ʲ���";
		system("pause");
		system("cls");
		return 0;
	}
	while (true)
	{
		vector<int> book;
		int t = random(w_lst.size());
		book.push_back(t);
		cout << "\t\t��ѡ�����ġ�" << w_lst[t].first.getcl()[random(w_lst[t].first.getcl().size())] << "����Ӣ�ﵥ�ʣ�����M���ز˵�����";

		string wer = w_lst[t].first.gete();//��ô�; 
		//��ʼ��ѡ��
		shuffle_word(book, w_lst.size(), num);
		for (int i = 0; i < num; i++)
		{
			cout << "\t\t";
			cout.put('A' + i) << "." << w_lst[book[i]].first.gete() << "     ";
		}
		cout << "\n\n\t\t�𰸣�";
		//�����
		char answer;
		cin >> answer;
		if (answer == 'M') {
			cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		while (true)
		{
			if (answer - 'A' > num)
			{
				cout << "\n\t\t�������󣡣�\n\n";
				cin >> answer;
				continue;
			}
			break;
		}
		if (w_lst[book[answer - 'A']].first.gete() == wer)
		{
			cout << "\n\t\t��ϲ������!!!,������" << ++score << "\n\n\t\t";
		}
		else
		{
			cout << "\n\t\t\a�𰸴�����ȷ���ǣ�" << wer << endl;
			++w_lst[t].first;
		}
		cout << "\n\t\t<�س���һ��>";
		system("pause");
		system("cls");
		book.clear();
	}
	return 0;
}