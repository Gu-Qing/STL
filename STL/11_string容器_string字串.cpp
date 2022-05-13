#include <iostream>
#include <string>
using namespace std;

/*
* string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串
*/

int test11() {

	string str = "abcdefg";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl; //bcd

	string email = "hello@sina.com";
	//从邮件地址中获取用户信息
	int ind = email.find('@');
	string name = email.substr(0, ind);
	cout << "name = " << name << endl;

	system("pause");

	return 0;
}