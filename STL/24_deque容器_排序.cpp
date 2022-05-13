#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void printDeque5(const deque<int>& d) {
	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test24() {

	deque<int> d;
	d.push_back(1);
	d.push_back(5);
	d.push_back(2);
	d.push_front(10);
	d.push_front(20);
	d.push_front(8);

	printDeque5(d);

	//对于支持随机访问的迭代器容器，都可以利用sort算法对其进行排序
	sort(d.begin(), d.end()); //默认是升序

	printDeque5(d);

	system("pause");

	return 0;
}