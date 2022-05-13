#include <iostream>
#include <list>

using namespace std;

/*
*	front(); //返回第一个元素
*	back(); //返回最后一个元素
*/

int test32() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//不可以用[]和at访问list中的元素。因为list本质是链表，不是连续线性空间存储数据，迭代器也是不支持随机访问的
	//l1[0];
	//l1.at(0);

	cout << "第一个元素：" << l1.front() << endl;
	cout << "第一个元素：" << l1.back() << endl;

	list<int>::iterator it = l1.begin();
	++it;
	--it;
	//it += 1; //不支持随机访问

	system("pause");

	return 0;
}