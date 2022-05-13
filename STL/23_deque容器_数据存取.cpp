#include <iostream>
#include <deque>

using namespace std;

/*
*	at(int idx); //返回索引idx所指的数据
*	operator[]; //返回索引idx所指的数据
*	front(); //返回容器中第一个数据元素
*	back(); //返回容器中最后一个数据元素
*/

int test23() {
	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	for (int i = 0; i < d1.size(); i++) {
		cout << d1[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < d1.size(); i++) {
		cout << d1.at(i) << endl;
	}
	cout << endl;
	cout << d1.front() << endl;
	cout << d1.back() << endl;

	return 0;
}