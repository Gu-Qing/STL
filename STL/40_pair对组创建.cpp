#include <iostream>

using namespace std;

/*
* pair对组创建（成对出现的数据，利用对组可以返回两个数据）
* 不需要包含头文件
*	pair<type, type> p(value1, value2);
*	pair<type, type> p = make_pair(value1, value2);
*/
int test40() {

	//第一种创建方式
	pair<string, int> p("Tom", 20);
	cout << "Name: " << p.first << " Age: " << p.second << endl;

	//第二种创建方式
	pair<string, int> p1 = make_pair("Marry", 18);
	cout << "Name: " << p1.first << " Age: " << p1.second << endl;


	return 0;
}