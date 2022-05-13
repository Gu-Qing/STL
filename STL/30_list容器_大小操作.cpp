#include <iostream>
#include <list>

using namespace std;

/*
*	size(); //返回容器中元素的个数
*	empty(); //判断容器是否为空
*	resize(num); //重新指定容器的长度为num，若变长以默认值填充（默认为0），变短删除多余的值
*	resize(num, elem); //重新指定容器的长度为num，若变长以默认值elem填充，变短删除多余的值
*/

void printList3(const list<int>& lst) {
	for (list<int>::const_iterator cit = lst.begin(); cit != lst.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test30() {

	list<int> lst1;
	lst1.push_back(10);
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(20);
	printList3(lst1);


	if (!lst1.empty()) {
		cout << "list 不为空" << endl;
		cout << "list的元素个数：" << lst1.size() << endl;
	}

	lst1.resize(6);
	printList3(lst1);
	lst1.resize(10, 9);
	printList3(lst1);
	lst1.resize(5);
	printList3(lst1);


	return 0;
}