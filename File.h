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

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

inline bool isrange(int choose)
{
	return choose < 7 && choose > 0;
}