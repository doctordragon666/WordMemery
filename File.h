#pragma once
/*
�������ʹ�õ����ļ���
1.�û��ļ�
2.�ʿ��ļ�
3.�Զ����ļ�
4.��¼�ļ�
5.�����ļ�
*/
#define WORD_FILE "word.txt"
#define BASE_FILE "base.txt"
#define USER_FILE "user.txt"
#define RECORD_FILE "record.txt"
#define EXAM_FILE ".\\base\\exam.txt"
#define TEXT_FILE ".\\base\\textbook.txt"
#define TEST_FILE "test.txt"

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include <algorithm>
#include <stdlib.h>
#include <random>
#include <ctime>
using namespace std;

inline bool isrange(int choose)
{
	return choose <= 8 && choose >= 0;
}

inline int random(size_t num)
{
	return rand() % num;
}

inline int random(int num)
{
	return rand() % num;
}

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

inline vector<string> split(string& s, char c)
{
	vector<string> v;
	string behind;
	string end = s;
	while (end != "")
	{
		size_t pos = end.find(c);
		if (pos != -1)
		{
			behind = end.substr(0, pos);
			if (behind != "")
			{
				v.push_back(behind);
			}
			end = end.substr(pos + 1, s.size());
		}
		else
		{
			v.push_back(end);
			break;
		}
	}
	return v;
}