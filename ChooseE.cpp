#include "ChooseE.h"

int ChooseE::ChooseInterface(Bookbase** global_b)
{
	vector<WordInfo> w_lst = (*global_b)->getword();
	int score = 0;
	//��������ѡ��Ӣ��
	system("cls");
	if (w_lst.size() < 4)
	{
		system("pause");
		system("cls");
		return 0;
	}
	while (true) 
	{
		vector<int> book;
		int t = random(w_lst.size());
		book.push_back(t);
		cout << "\t\t��ѡ�����ġ�" << w_lst[t].getcl()[random(w_lst[t].getcl().size())] << "����Ӣ�ﵥ�ʣ�����m���ز˵�����";

		string wer = w_lst[t].gete();//��ô�; 
		//��ʼ��ѡ��
		shuffle_word(book, w_lst.size(),4);
		for (int i = 0; i < 4; i++) 
		{
			cout << "\t\t";
			cout.put('A' + i) << "." << w_lst[book[i]].gete() << "     ";
		}
		cout << "\n\n\t\t�𰸣�";
		//�����
		char answer;
		cin >> answer;
		if (answer == 'm') {
			cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
			system("pause");
			system("cls");
			return score;
		}
		while (true)
		{
			if (answer - 'A' > 4)
			{
				cout << "\n\t\t�������󣡣�\n\n";
				cin >> answer;
				continue;
			}
			break;
		}
		if (w_lst[book[answer - 'A']].gete() == wer)
		{
			cout << "\n\t\t��ϲ������!!!,������" << ++score << "\n\n\t\t";
		}
		else
		{
			cout << "\n\t\t\a�𰸴�����ȷ���ǣ�" << wer << endl;
			++w_lst[t];
		}
		cout << "\n\t\t<�س���һ��>";
		system("pause");
		system("cls");
		book.clear();
	}
	return 0;
}