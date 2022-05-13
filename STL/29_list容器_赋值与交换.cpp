#include <iostream>
#include <list>

using namespace std;

/*
*	assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
*	list &operator=(const list &lst); //重载等号操作符
*	swap(lst); //将lst与本身的元素交换
*/

void printList2(const list<int> &l) {
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test29() {

	list<int> l1;
	l1.push_back(10);
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	printList2(l1);


	list<int> l2 = l1;
	printList2(l2);

	list<int> l3;
	l3.assign(l2.begin(), l2.end());
	printList2(l3);

	list<int> l4;
	l4.assign(10, 9);
	printList2(l4);

	cout << "swap: " << endl;
	l1.swap(l4);
	printList2(l1);
	printList2(l4);

	system("pause");

	return 0;
}