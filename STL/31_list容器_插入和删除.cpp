#include <iostream>
#include <list>

using namespace std;

/*
*	push_back(elem); //在容器尾部插入一个元素
*	pop_back(); //删除容器中的最后一个元素
*	push_front(); //在容器开头插入一个元素
*	pop_front(); //在容器开头删除一个元素
*	insert(pos, elem); //在pos位置插入elem元素的拷贝，返回新数据的位置
*	insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值
*	insert(pos, beg, end); //在pos位置插入[beg, end)区间的数据，无返回值
*	clear(); //移除容器中的所有数据
*	erase(beg, end); //删除[beg, end)区间的数据，返回下一个数据的位置
*	erase(pos); //删除pos位置的数据，返回下一个数据的位置
*	remove(elem); //删除容器中所有与elem值匹配的元素
*/

void printList4(const list<int>& lst) {
	for (list<int>::const_iterator cit = lst.begin(); cit != lst.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test31() {

	list<int> l1;

	//尾插
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	printList4(l1);
	//头插
	l1.push_front(100);
	l1.push_front(200);
	printList4(l1);
	//尾删
	l1.pop_back();
	printList4(l1);
	//头删
	l1.pop_front();
	printList4(l1);

	list<int>::iterator it = l1.begin();
	l1.insert(++it, 1000);
	printList4(l1);

	it = l1.begin();
	l1.erase(++it);
	printList4(l1);


	l1.push_back(10000);
	l1.push_front(10000);
	printList4(l1);
	l1.remove(10000);
	printList4(l1);

	l1.clear();
	printList4(l1);


	system("pause");

	return 0;
}