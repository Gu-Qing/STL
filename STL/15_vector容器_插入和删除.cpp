#include <iostream>
#include <vector>

using namespace std;

/*
*	push_back(ele); //尾部插入一个元素ele
*	pop_back(); //删除最后一个元素
*	insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
*	insert(const_iterator pos, int count, ele); //迭代器指向位置pos插入count个元素ele
*	erase(const_iterator pos); //删除迭代器指向的元素
*	erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
*	clear(); //删除容器中所有元素
*/

void printVector3(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test15() {

	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}

	printVector3(v1);

	v1.pop_back();
	printVector3(v1);

	v1.insert(v1.begin(), 100); //第一个参数的迭代器的位置
	printVector3(v1);

	v1.insert(v1.begin(), 5, 10); //头插法，插入了5个10
	printVector3(v1);

	v1.erase(v1.begin()); //参数也是迭代器
	printVector3(v1);

	v1.erase(v1.begin(), v1.end()); // == v1.clear();
	printVector3(v1);

	system("pause");

	return 0;
}