// TempSTL.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include <list>

using namespace std;

///testVector
void testVector()
{
	vector<int> vt;
	vt.push_back(1);
	vt.push_back(2);
	vt.push_back(3);
	vt.push_back(5);
	vt.push_back(8);
	vt[2] = 6;
	vt.erase(vt.begin() + 1);

	vector<int> vt1;
	vt1.push_back(22);
	vt1.push_back(11);
	vt1.push_back(33);
	cout << "--------------------------" << endl;
	cout << vt.at(2) << endl;
	cout << vt.front() << endl;
	cout << vt.back() << endl;
	vt.swap(vt1);
	cout << "--------------------------" << endl;
	vector<int>::iterator it = vt.begin();
	for (; it != vt.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "0000000000000000000000" << endl;
	//vector�ĵ�����ֻ��ʹ��һ�Σ�ʹ����������ͷš���list�ĵ��������Զ��ʹ�á�
	//vector�ĵ��������Խ����������㣬��list�ĵ�����������ʹ���������㣬ֻ������++�������--���㡣
	for (; it != vt.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "0000000000000000000000" << endl;
	cout << endl;
	sort(vt.begin(), vt.end());
	vector<int>::reverse_iterator rit = vt.rbegin();
	for (; rit != vt.rend(); rit++)
	{
		cout << *rit << endl;
	}
	cout << endl;
	reverse(vt.begin(), vt.end());
	vector<int>::const_reverse_iterator crit = vt.crbegin();
	for (; crit != vt.crend(); crit++)
	{
		cout << *crit << endl;
	}
	sort(vt.begin(), vt.end());
	//reverse()
}

void testList()
{
	list<int> ls;
	list<int> lss;
}

void testDeque()
{
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(3);
	dq.push_back(5);
	dq.push_back(7);
	dq.push_back(9);

	deque<int> dq1;
	dq1.push_back(2);
	dq1.push_back(4);
	dq1.push_back(6);
	dq1.push_back(8);

	cout << "ahhhh: " << dq.at(2) << endl;

	deque<int>::iterator it = dq.begin();
	for (;it != dq.end();it++)
	{
		cout << *it << endl;
	}
	cout << "--------------------" << endl;
	//��������vectorһ����ʹ����ϣ������ͷš�
	for (; it != dq.end(); it++)
	{
		cout << *it << endl;
	}
// 	for (auto value : dq)
// 	{
// 		cout << value << endl;
// 	}
	for each (auto var in dq1)
	{
		cout << var << endl;
	}
}

int main()
{
	//testVector();

	testDeque();

	int a;
	cin >> a;
    return 0;
}

