// TempSTL.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;

class ListTest
{
public:
	ListTest(int value, char *str);
	ListTest(ListTest &LT);
	~ListTest();

	void showValue();

private:
	int a;
	char *cstr;
};

ListTest::ListTest(int value, char *str)
{
	cout << "构造函数" << endl;
	a = value;
	cstr = new char[a];
	if (cstr != 0)
		strcpy(cstr, str);
}

ListTest::ListTest(ListTest & LT)
{
	cout << "拷贝构造函数" << endl;
	a = LT.a;
	cstr = new char[a];
	if (cstr != 0)
		strcpy(cstr, LT.cstr);
}

ListTest::~ListTest()
{
	cout << "析构函数" << endl;
	if (cstr != NULL)
	{
		cout << "ahh" << endl;
	}
	delete[]cstr;
}

void ListTest::showValue()
{
	cout << "hello ListTest" << endl;
	cout << this->a << endl;
	cout << this->cstr << endl;
	cout << "bye print" << endl;
}

void testList()
{

	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(8);
	l.push_front(0);
	//l.insert(l.begin(), 6);
	//l.assign(1, 88);
	list<int> ll;
	ll.assign({ 1,2,3 });

	//ll.splice(ll.begin()++, l);
	l.merge(ll);

	list<int>::iterator ls = l.begin();
	// 	for (;ls != l.end(); ls++)
	// 	{
	// 		cout << *ls << endl;
	// 	}
	// 	for each (auto var in l)
	// 	{
	// 		cout << var << endl;
	// 	}
	for (auto var : l)
	{
		cout << var << endl;
	}


	cout << "-------------------------------" << endl;

	list<int>::iterator lss = ll.begin();
	for (; lss != ll.end(); lss++)
	{
		cout << *lss << endl;
	}

	int aa[10] = { 1,2,3,4,5,6,7,8,9,0 };
	aa[1] = 1;
	for (int i = 0; i < 10; i++)
	{
		cout << aa[i] << endl;
	}
}

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

void testClass()
{
	char *ch = new char[2];
	ch[0] = 'a';
	ListTest *lt = new ListTest(1, ch);
	lt->showValue();
	cout << "YES COPY" << endl;
	ListTest *lt1 = new ListTest(*lt);
	lt1->showValue();

	delete[] ch;
	cout << "DELETE" << endl;
	delete lt;
	delete lt1;
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

void testStack()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.pop();
	int a = st.top();
	cout << "a: " << a << endl;
}

void testQueue()
{
	queue<string> qu;
	qu.push("a");
	qu.push("b");
	qu.push("c");
	qu.pop();
	string str1 = qu.back();
	string str = qu.front();
	cout << str.c_str() << endl;
}

int main()
{
	//testVector();

	testDeque();

	int a;
	cin >> a;
    return 0;
}

