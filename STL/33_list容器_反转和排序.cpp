#include <iostream>
#include <list>
//#include <algorithm>

using namespace std;

void printList5(const list<int> &l) {
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

bool myCompare(int a, int b) {
	//降序，让第一个数 > 第二个数
	return a > b;
}

int test33() {

	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	cout << "Before reverse: " << endl;
	printList5(l1);
	cout << "After reverse: " << endl;
	l1.reverse();
	printList5(l1);

	cout << "After sort: " << endl;
	//所有不支持随机访问的迭代器，不能使用标准算法
	// sort(l1.begin(), l1.end());
	//不支持随机访问迭代器的容器内部会提供对应一些算法
	l1.sort(); //默认升序
	printList5(l1);
	l1.sort(myCompare);
	printList5(l1);


	system("pause");

	return 0;
}