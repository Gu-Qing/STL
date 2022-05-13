#include <iostream>
#include <vector>
using namespace std;

/*
*	empty(); //判断容器是否为空
*	capacity(); //容器的容量
*	size(); //返回容器中元素的个数
*	resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置；若变短，则末尾超出容器长度的元素被删除
*	resize(int num, elem); //同上
*/

void printVector2(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test14() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector2(v1);

	if (v1.empty()) {
		cout << "v1 is empty!" << endl;
	}
	else {
		cout << "v1 is not empty!" << endl;
		cout << "v1's capacity is: " << v1.capacity() << endl; //13
		cout << "v1's size is: " << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15);
	printVector2(v1); //如果重新指定的比原来长，默认用0填充新位置

	v1.resize(20, 100); //也可以指定默认填充值
	printVector2(v1); //

	//
	v1.resize(10); //重新指定比原来小就会删除后面的
	printVector2(v1);

	system("pause");

	return 0;
}