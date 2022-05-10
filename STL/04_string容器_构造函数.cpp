#include <iostream>
#include <string>
using namespace std;

/*
* 构造函数原型：
*	string(); //创建一个空的字符串，string str;
*	string(const char* s); //使用字符富川s初始化
*	string(const string& str); //使用一个string对象初始化另一个string对象
*	string(int n, char c); //使用n个字符c初始化
*/
void test0004() {
	string s1; //默认构造

	const char* str = "hello world"; 
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int test04() {

	test0004();

	system("pause");

	return  0;
}