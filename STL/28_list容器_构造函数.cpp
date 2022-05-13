#include <iostream>
#include <list>

using namespace std;

/*
*	list<T> list; //采用模板类实现，对象的默认构造形式
*	list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身
*	list(n, elem); //构造函数将n个elem拷贝给本身
*	list(const list &lst); //拷贝构造函数
*/
void printList(const list<int>& l) {
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test28() {

	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3(10, 6);
	printList(l3);

	list<int> l4(l3);
	printList(l4);

	system("pause");

	return 0;
}