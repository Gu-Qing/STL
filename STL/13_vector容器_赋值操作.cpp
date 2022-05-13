#include <iostream>
#include <vector>
using namespace std;

/*
*	vector& operator=(const vector &vec); //赋值等号操作符
*	assign(beg, end); //将[beg, end]区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
*/

void printVector1(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test13() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector1(v1);

	vector<int> v2;
	v2 = v1;
	printVector1(v2);

	vector<int> v3;
	v3.assign(v1.begin(), v1.end());
	printVector1(v3);

	vector<int> v4;
	v4.assign(10, 100);
	printVector1(v4);

	return 0;
}