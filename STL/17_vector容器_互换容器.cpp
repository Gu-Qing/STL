#include <iostream>
#include <vector>

using namespace std;

void printVector4(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int test17() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector4(v1);
	vector<int> v2;
	for (int i = 9; i >= 0; i--) {
		v2.push_back(i);
	}
	printVector4(v2);

	swap(v1, v2);

	cout << "After swap: " << endl;
	printVector4(v1);
	printVector4(v2);

	cout << "------------------------------------------" << endl;

	//实际用途
	//巧用swap可以收缩内存空间
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "v's capacity is: " << v.capacity() << endl; //v's capacity is: 138255
	cout << "v's size is: " << v.size() << endl; //v's size is: 100000

	v.resize(3);
	cout << "v's capacity is: " << v.capacity() << endl;  //v's capacity is: 138255
	cout << "v's size is: " << v.size() << endl; //v's size is: 3

	//使用swap收缩内存
	//vector<int>(v); //匿名对象。相当于利用v调用了vector的拷贝构造函数创建了一个新的对象
	//按照v目前所用的个数来做初始化
	vector<int>(v).swap(v); //实际上swap是做了容器交换的操作，匿名对象创建的指向原来的v，但因为匿名马上会被回收
	cout << "v's capacity is: " << v.capacity() << endl;  //v's capacity is: 3
	cout << "v's size is: " << v.size() << endl; //v's size is: 3

	system("pause");

	return 0;
}
