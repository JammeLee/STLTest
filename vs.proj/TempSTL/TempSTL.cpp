// TempSTL.cpp : 定义控制台应用程序的入口点。
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
	//vector的迭代器只可使用一次，使用完毕立即释放。但list的迭代器可以多次使用。
	//vector的迭代器可以进行算数运算，而list的迭代器不可以使用算数运算，只可以做++运算或者--运算。
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
	//迭代器和vector一样，使用完毕，立即释放。
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

