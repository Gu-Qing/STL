#include <iostream>
#include <string>
using namespace std;

/*
*	string& operator+=(const char* str); //重载+=操作符
*	string& operator+=(const char c); //重载+=操作符
*	string& operator+=(const string& str); //重载+=操作符
*	string& append(const char *s); //把字符串s连接到当前字符串结尾
*	string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
*	string& append(const string &s); //同operator+=(const string& str)
*	string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结构
*/

void test0006() {
	string str1 = "我";
	str1 += "爱玩游戏";
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL ORI ";
	str1 += str2;
	cout << "str1 = " << str1 << endl; 

	string str3 = "I";
	str3.append(" love play game");
	cout << "str3 = " << str3 << endl; //str3 = I love play game

	str3.append(" on computer. 12345", 13);
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.

	str3.append(str2);
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI 

	str3.append(str2, 0, 3); //只截取到LOL  从第0位开始截取，截取3个字符
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI LOL
	
	str3.append(str2, 4, 3); //截取ORI 从第4位开始截取，截取3个字符
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI LOLORI
}

int test06() {

	test0006();

	system("pause");

	return 0;
}