// CFeet.cpp : 定义控制台应用程序的入口点。
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
	cout << "基类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet::CFeet(int tf, int ti)
{
	feet = tf;
	inches = ti;
	cout << "基类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CFeet:: ~CFeet()
{
	cout << "基类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}
void CFeet:: display()
{
	cout << "Display"<<feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet :public CFeet //CMyfeet是从CFeet里派生出来的，也就是说CMyfeet是在继承CFeet。
{
public:
	CMyfeet();
	CMyfeet(int f, int i);
	~CMyfeet();
};
CMyfeet::CMyfeet()
{
	cout << "派生类默认构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::CMyfeet(int f, int i) :CFeet(f, i)// CFeet(f, i)是在指定把f给tf,不指定的话会自动运行基类默认构造函数，只有指定的话才能运行基类构造
{
	feet = f;
	inches = i;
	cout << "派生类构造函数" << feet << "英尺" << inches << "英寸" << endl;
}
CMyfeet::~CMyfeet()
{
	cout << "派生类析构函数" << feet << "英尺" << inches << "英寸" << endl;
}
int main()
{
	CMyfeet omyfeet1(3, 6);
	omyfeet1.display();
    return 0;
}
//先基类默认后派生类默认，先派生类析构后基类析构，析构函数最后执行，没有指定的话执行基类默认构造函数
