// CFeet.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	CFeet(int tf, int ti);
	~CFeet();
	void display();
	int getfeet();
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
	cout << "����Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet::CFeet(int tf, int ti)
{
	feet = tf;
	inches = ti;
	cout << "���๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet:: ~CFeet()
{
	cout << "������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
void CFeet:: display()
{
	cout << "Display"<<feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet :public CFeet //CMyfeet�Ǵ�CFeet�����������ģ�Ҳ����˵CMyfeet���ڼ̳�CFeet��
{
public:
	CMyfeet();
	CMyfeet(int f, int i);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "������Ĭ�Ϲ��캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::CMyfeet(int f, int i) :CFeet(f, i)// CFeet(f, i)����ָ����f��tf,��ָ���Ļ����Զ����л���Ĭ�Ϲ��캯����ֻ��ָ���Ļ��������л��๹��
{
	feet = f;
	inches = i;
	cout << "�����๹�캯��" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "��������������" << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CMyfeet omyfeet1(3, 6);
	omyfeet1.display();
    return 0;
}
//�Ȼ���Ĭ�Ϻ�������Ĭ�ϣ�����������������������������������ִ�У�û��ָ���Ļ�ִ�л���Ĭ�Ϲ��캯��
