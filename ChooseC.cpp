#include "ChooseC.h"

int ChooseC::ChooseInterface(Bookbase** global_b)
{
	vector<WordInfo> v = (*global_b)->getword();
	//����Ӣ��ѡ����
	system("cls");
	int score = 0;
	if (v.size() < 4)
	{
		cout << "\t\t������ĸ�����" << endl;
		return 0;
	}
	while (true) {
		vector<int> book;
		int t = random(v.size());
		book.push_back(t);
		cout << "\t\t��ѡ�񵥴ʡ�" << v[t].gete() << "����������˼������M���ز˵�����";

		string wer = v[t].getc();//��ȷ��
		shuffle_word(book, v.size(), 4);
		for (int i = 0; i < 4; i++) 
		{
			cout << "\t\t";
			cout.put('A' + i);
			cout << "." << v[book[i]].getc() << "     ";
		}
		cout << endl << "\t\t�𰸣�";
		char answer;
		cin >> answer;
		if (answer == 'M') {
			cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
			system("pause");
			system("cls");
			(*global_b)->save(v);
			return score;
		}
		while (true)
		{
			if (answer - 'A' > 4 || answer - 'A' < 0)
			{
				cout << "\n\t\t�������󣡣�\n\n";
				cin >> answer;
				continue;
			}
			break;
		}
		if (v[book[answer - 'A']].getc() == wer)
		{
			cout << "\n\t\t��ϲ������!!!,������" << ++score << "\n\n\t\t" << endl;
		}
		else
		{
			cout << "\n\t\t�𰸴�����ȷ���ǣ�" << endl;
			cout << wer << endl << endl;
			++v[t];
		}
		cout << "\n\t\t<�س���һ��>";
		system("pause");
		system("cls");
		book.clear();
	}
	return 0;
}