#include <iostream>
#include <deque>

using namespace std;

/*
*	deque& operator=(const deque &deq); //重载等号操作符
*	assign(beg, end); //将[beg, end]区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
*/

void printDeque1(const deque<int>& d) {
	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test20() {

	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque1(d1);

	//operator =
	deque<int> d2;
	d2 = d1;
	printDeque1(d2);

	//assign(beg, end)
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	printDeque1(d3);

	//assign(n, elem)
	deque<int> d4;
	d4.assign(10, 100);
	printDeque1(d4);

	return 0; 
}