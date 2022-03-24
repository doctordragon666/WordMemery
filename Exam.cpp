#include "Exam.h"
Exam::Exam()
{
	cout << "���Կ⿪ʼ����" << endl;
	ifstream ifs(EXAM_FILE, ios::out);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	ExamWord ew;
	while (ifs >> ew) //���ж�ȡ��ֱ������
	{
		cout << ew;
		this->m_word.push_back(ew);
	}
	ifs.close();
}

Exam::~Exam()
{
	ofstream ofs(EXAM_FILE, ios::in | ios::trunc);
	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��";
		return;
	}
	for (vector<ExamWord>::iterator it = m_word.begin(); it != m_word.end(); it++)
	{
		ofs << *it;
	}
	ofs.close();
	this->m_word.clear();
}

vector<ExamWord> Exam::getexam()
{
	return this->m_word;
}

void Exam::show()
{
	vector<ExamWord> listen;
	vector<ExamWord> passage;
	vector<ExamWord> translate;
	vector<ExamWord> write;
	for (auto i : m_word)
	{
		if (i.getsource() == "listen")
		{
			listen.push_back(i);
		}
		else if (i.getsource() == "passage")
		{
			passage.push_back(i);
		}
		else if (i.getsource() == "translate")
		{
			translate.push_back(i);
		}
		else if (i.getsource() == "write")
		{
			write.push_back(i);
		}
		else
		{
			continue;
		}
	}

	vector<vector<ExamWord>> v;
	v.push_back(listen);
	v.push_back(passage);
	v.push_back(translate);
	v.push_back(write);
	
	

	for (auto i : v)
	{
		for (auto j : i)
		{
			j.showself();
		}
		cout << "---------------" << endl;
	}
}