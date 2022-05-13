#include <iostream>
#include <deque>

using namespace std;

/*
* 两端插入操作：
*	push_back(elem); //在容器尾部添加一个数据
*	push_front(elem); //在容器头部添加一个数据
*	pop_back(); //删除容器最后一个数据
*	pop_front(); //删除容器第一个数据
* 指定位置操作：
*	insert(pos, elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置
*	insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值
*	insert(pos, beg, end); //在pos位置插入[beg, end)区间的数据，无返回值
*	clear(); //清空容器中所有数据
*	erase(beg, end); //删除[beg, end)区间的数据看，返回下一个数据的位置
*	erase(pos); //删除pos位置的数据，返回下一个数据的位置
*/

void printDeque3(const deque<int>& d) {
	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test22() {

	deque<int> d1;

	//尾插
	d1.push_back(10);
	d1.push_back(20);
	printDeque3(d1);
	//头插
	d1.push_front(30);
	d1.push_front(40);
	printDeque3(d1);

	//头删
	d1.pop_front();
	printDeque3(d1);

	//尾删
	d1.pop_back();
	printDeque3(d1);

	cout << "-------------------" << endl;

	deque<int> d2;
	d2.push_back(100);
	d2.push_back(50);
	d2.push_back(200);
	d2.push_back(400);
	printDeque3(d2);

	//insert
	d2.insert(d2.begin(), 1000);
	printDeque3(d2);
	d2.insert(d2.begin(), 2, 2000);

	deque<int> d3;
	d3.push_back(1);
	d3.push_back(2);
	d3.push_back(3);

	//在d2.begin()的位置插入[d3.begin(),d3.end())区间的数据
	d2.insert(d2.begin(), d3.begin(), d3.end());
	printDeque3(d2);

	cout << "-------------------------------------" << endl;
	deque<int> d4;
	d4.push_back(1);
	d4.push_back(2);
	d4.push_back(3);
	d4.push_back(4);
	//delete
	deque<int>::iterator it = d4.begin();
	++it;
	d4.erase(it);
	printDeque3(d4); //1 3 4

	//清空
	d4.erase(d4.begin(), d4.end());
	printDeque3(d4);
	d4.clear();
	printDeque3(d4);

	return 0;
}