// TempSTL.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout << "���캯��" << endl;
	a = value;
	cstr = new char[a];
	if (cstr != 0)
		strcpy(cstr, str);
}

ListTest::ListTest(ListTest & LT)
{
	cout << "�������캯��" << endl;
	a = LT.a;
	cstr = new char[a];
	if (cstr != 0)
		strcpy(cstr, LT.cstr);
}

ListTest::~ListTest()
{
	cout << "��������" << endl;
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

void testSet()
{
	set<int> s;
	s.insert(1);
	s.insert(5);
	s.insert(6);
	s.insert(2);
	s.insert(3);
//	s.clear(); //�����������
	s.erase(2); //���ָ������
	//set�в��ܲ�����ͬ��ֵ
	set<int>::iterator sit = s.find(6);
	set<int>::iterator sits = s.upper_bound(2);
	set<int>::iterator sitss = s.lower_bound(2);

	cout << "-------------" << endl;
	cout << s.max_size() << endl;
	cout << s.size() << endl;
	cout << *sits << endl;
	cout << *sitss << endl;
	cout << "-------------" << endl;
	s.erase(sits);

	set<int>::iterator it = s.begin();
	for (;it != s.end(); it ++)
	{
		cout << *it << endl;
	}
}

void testMultiset()
{
	multiset<int> ms;
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(2);

	multiset<int, greater<int>> msg; //�Ӵ�С  Ĭ��Ϊless ��С����~
	msg.insert(1);
	msg.insert(2);
	msg.insert(2);
	msg.insert(3);
	for each (auto var in msg)
	{
		cout << var << endl;
	}
	//set�����Բ�����ͬ��ֵ������multiset���Բ�����ͬ��ֵ
	multiset<int>::iterator it = ms.begin();
	auto its = it;
	for (; its != ms.end(); its++)
	{
		cout << *its << endl;
	}
	cout << "----------------------" << endl;
	cout << *it << endl;
	multiset<int>::iterator it_end = ms.end();
// 	if (*it_end == NULL)//==������ᱨ��
// 		cout << "it_end is nullptr" << endl;
	//cout << *it_end << endl; //���һ��Ԫ�ص���һ��λ��
	multiset<int>::reverse_iterator it_rbegin = ms.rbegin(); // ָ����������ĵ�һ��Ԫ��
	cout << *it_rbegin << endl;
	multiset<int>::reverse_iterator it_rend = ms.rend(); //ָ��������������һ��Ԫ�ص���һ��λ��
	//cout << *it_rend << endl;
}

void testMap()
{
	map<string, int> mp;
	
	//insert�������룬�������ؼ�����ͬ�����޷�����
	mp.insert(pair<string, int>("a", 1));
	mp.insert(map<string, int>::value_type("b", 2));
	pair<map<string, int>::iterator, bool> it_pair = mp.insert(pair<string, int>("b", 6)); //�����6û�ܱ����룬���Դ�ӡ������b��Ӧ�Ļ���2
	//����ͨ��pair����ȡinsert�Ƿ�ɹ�������ɹ�����second�ֶη���Ϊtrue������Ϊfalse����ôfirst���Ƿ���map�ĵ����������Ƕ�Ӧkeyλ�õĵ�������
	if (it_pair.second)
		cout << "insert is success" << endl;
	else
		cout << "insert is fail, now the key is " << it_pair.first->first.c_str() << ", the value is " << it_pair.first->second << endl;

	//mp.insert(pair<string, int>("c", 3));
	//���鷽ʽ����ʱ���������ؼ�����ͬ����֮ǰ�Ĺؼ��ֻᱻ����
	mp["c"] = 3;
	mp["c"] = 5; // ����ԭ��c��Ӧ��3�Ѿ������ǣ���ʱΪ5
	mp.insert(pair<string, int>("d", 4));

	cout << mp.at("a") << endl;

	map<string, int>::iterator it = mp.begin();
	for (; it != mp.end(); it++)
	{
		cout << it->first.c_str() << ": " << it->second << endl;
	}

}

int main()
{
	//testVector();

	//testDeque();

	//testSet();

	//testMultiset();

	testMap();

	int a;
	cin >> a;
    return 0;
}

