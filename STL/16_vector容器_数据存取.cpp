#include <iostream>
#include <vector>
using namespace std;

/*
*	at(int idx); //返回索引idx所指的数据
*	operator[idx]; //返回索引idx所指的数据
*	fornt(); //返回容器中第一个数据元素
*	back(); //返回容器中最后一个元素
*/

int test16() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	//利用[] 访问元素
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at 访问元素
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "The first element is : " << v1.front() << endl;
	cout << "The last element is : " << v1.back() << endl;


	system("pause");

	return 0;
}