#pragma once
#include "Bookbase.h"
#include "Xing.h"
class Xinghuo :
    public Bookbase
{
public:
    Xinghuo();
    //~Xinghuo();
    //void show();
    //virtual vector<pair<WordInfo, string>> getword();
    //const int type = 1;
    //void save(vector<pair<WordInfo, string>> v);
    //����ģʽ
    //��ȡ�Լ����ļ�
    //���뵥���б���
    //�������������г�ȡ
    //��ʾ������������������ʾ
private:
    vector<Xing> m_word;//�����б�
    //�û�����ĵ����б�
};

