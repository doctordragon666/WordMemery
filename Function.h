
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
//	template<class T>
//	void save(vector<T> data, string filename)
//	{
//		ofstream ofs(filename, ios::out | ios::trunc);
//		for (auto it : data)
//		{
//			ofs << it << endl;
//		}
//		ofs.close();
//	}
//
//	vector<Word> addWord(vector<Word> w_lst)
//	{
//		//����µ���
//		system("cls");
//		int k = 0;
//		cout << "\t\t��ֱ����뵥��Ӣ��:������˼(�����˼��/����)���ÿո����,����m��ʾ����:\n\n\t\t";
//		while (true)
//		{
//			string English;
//			string Chineseword;
//			//���뵥Ӣ��,m����
//			cin >> English;
//			if (English == "m")
//			{
//				system("cls");
//				if (k >= 1)
//				{
//					cout << "\n\t\t���ʵ���ʿ�ɹ������ι�����" << k << "�����ʣ���\n\n\t\t";
//				}
//				else
//				{
//					cout << "\n\t\t��û�е����κε��ʣ���\n\n" << endl;
//				}
//				cout << "\t\t<�س������ز˵�>";
//				system("pause");
//				system("cls");
//				return w_lst;
//			}
//			cin >> Chineseword;
//			Word w(English, Chineseword);
//			w_lst.push_back(w);
//			//���ʼ���ʿ�
//			k++;//������ͳ��
//			cout << "\t\t����ɹ�\n\t\t";
//		}
//	}
//
//	vector<Word> loadFile(string filename)
//	{
//		vector<Word> v;
//		ifstream ifs(filename, ios::in);
//		string a, b;
//		while (ifs >> a && ifs >> b)
//		{
//			v.push_back(Word(a, b));
//		}
//		sort(v.begin(), v.end(), MySort());
//		auto it = unique(v.begin(), v.end());
//		vector<Word> v_ture(v.begin(),it);
//		ifs.close();
//		save(v_ture, filename);
//		return v_ture;
//	}
//
//	vector<Error> loadFile(string filename, int tag)
//	{
//		vector<Error> v;
//		ifstream ifs(filename, ios::in);
//		string a, b;
//		int c;
//		if (tag)
//		{
//			while (ifs >> a && ifs >> b)
//			{
//				v.push_back(Error(a, b, 0));
//			}
//		}
//		else
//		{
//			while (ifs >> a && ifs >> b && ifs >> c)
//			{
//				v.push_back(Error(a, b, c));
//			}
//		}
//		ifs.close();
//		sort(v.begin(), v.end(), MySort());
//		auto it = unique(v.begin(), v.end());
//		vector<Error> v_ture(v.begin(), it);
//		ifs.close();
//		save(v_ture, filename);
//		return v;
//	}
//
//	template<class T>
//	Find_type<T> find_word(string find_word, vector<T> dic)
//	{
//		int num = 0;
//		for (auto it : dic)
//		{
//			if (it.English == find_word ||
//				find(it.Chinese_lst.begin(), it.Chinese_lst.end(), find_word) != it.Chinese_lst.end())
//			{
//				Find_type<T> tmp = { num, true, it };
//				return tmp;
//			}
//		}
//		Find_type<T> tmp = { -1, false, T() };
//		return tmp;
//	}
//
//

//
//	template<class T>
//	void dictation_c(vector<T> w_lst, vector<Error> error_lst)
//	{
//		//Ĭд����
//		system("cls");
//		int score = 0;
//		//��֤�е��ʼ� 
//		if (w_lst.size() < 4)
//		{
//			system("pause");
//			system("cls");
//			return;
//		}
//		while (true) {
//			string msg;
//			int seed = random(w_lst.size());
//			//ȷ���������λ�� 
//			cout << "\t\t�����뵥�ʡ�" << w_lst[seed].English << "����������˼������m���ز˵�����";
//			cin >> msg;
//			vector<string> answer = w_lst[seed].Chinese_lst;
//			if (msg == "m")
//			{
//				cout << "\n\n\t\t�����ܹ���" << score << "��!!!\n\n\t\t";
//				system("pause");
//				system("cls");
//				return;
//			}
//			if (find(answer.begin(), answer.end(), msg) != answer.end())
//			{
//				cout << "\n\t\t��ϲ�����ˣ�����,������" << ++score << "\n\n\t\t";
//			}
//			else
//			{
//				cout << endl << "\t\tд���ˡ�" << w_lst[seed].English << "����������˼��:" << w_lst[seed].Chinese;
//				auto error = find_word(w_lst[seed].English, error_lst);
//				if (error.tag)
//					++error_lst[error.serial];
//				else
//					error_lst.push_back(Error(w_lst[seed].English, w_lst[seed].Chinese, 0));
//				save(error_lst, USER_FILE);
//			}
//			cout << "\n\t\t<�س���һ��>";
//			system("pause");
//			system("cls");
//		}
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
