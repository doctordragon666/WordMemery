//�˰汾Ϊ���ϰ汾�� �����Ѿ������������ο�
/*
����ȫ�ֺ��������Լ�һЩ�ṹ���Լ��º���ν��
�ṹ�壺���ҷ������ͣ���ţ������߼������ض���
���װ�ĺ���
1.��ӵ���
2.ѡ������
3.ѡ����Ӣ
4.Ĭд����
5.Ĭд��Ӣ
6.�����ļ������������汾
7.������������������汾
8.�������ݱ����ʽ���浽�ļ�
9.����ѡ����ѡ�
10.�����¼
�º���ν��
����ͬ�����ͽ���ν��
*/
//
//template<typename T>
//struct Find_type
//{
//	int serial;
//	bool tag;
//	T v;
//};
//
//class MySort
//{
//public:
//	bool operator()(Error a, Error b)
//	{
//		return a.error_time < b.error_time;
//	}
//	bool operator()(Word a, Word b)
//	{
//		return a.English < b.English;
//	}
//};
//
//
//class Fun
//{
//	template<class T>
//	void shuffle_word(vector<T>& v, size_t s, int num)
//	{
//		//����������Ҳ��ҷ������ɸ������е�Ԫ��
//		while (v.size() < num)
//		{
//			int tmp = random(s);
//			if (find(v.begin(), v.end(), tmp) == v.end())
//			{
//				v.push_back(tmp);
//			}
//		}
//		random_shuffle(v.begin(), v.end());
//		cout << endl << endl;
//	}
//
//
//	}
//
//
//

//	}
//
//	template<class T>
//	void dictation_e(vector<T> w_lst, vector<Error> error_lst)
//	{
//		//ĬдӢ��
//		system("cls");
//		string answer;
//		int score = 0;
//		//��֤�е��ʼ� 
//		if (w_lst.size() == 0)
//		{
//			system("pause");
//			system("cls");
//			return;
//		}
//		while (true) 
//		{
//			int s = random(w_lst.size());
//			auto t = w_lst[s].Chinese_lst[random(w_lst[s].Chinese_lst.size())];
//			cout << "\t\t�����뵥�ʡ�" << t << "����Ӣ����˼������m���ز˵�����";
//			cin >> answer;
//			if (answer == "m")
//			{
//				cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
//				system("pause");
//				system("cls");
//				break;
//			}
//			if (w_lst[s].English == answer) {
//				cout << "\n\t\t��ϲ�����ˣ�����,������" << ++score << "\n\n\t\t";
//			}
//			else {
//				cout << endl << "\t\t����ˡ�" << t << "����Ӣ����:" << w_lst[s].English << endl << endl;
//				auto error = find_word(w_lst[s].English, error_lst);
//				if (error.tag)
//					++error_lst[error.serial];
//				else
//					error_lst.push_back(Error(w_lst[s].English, w_lst[s].Chinese, 0));
//				save(error_lst, USER_FILE);
//			}
//			cout << "\n\t\t<�س���һ��>";
//			system("pause");
//			system("cls");
//		}
//	}
//};
//
//Fun f;
