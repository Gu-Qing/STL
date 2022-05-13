#include <iostream>
#include <string>
using namespace std;

/*
*	int find(const string& str, int pos = 0) const; //查找str第一次出现位置，从pos开始查找
*	int find(const char* s, int pos = 0) const; //查找s第一次出现位置，从pos开始查找
*	int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次出现位置
*	int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
*	int rfind(const string& str, int pos = npos) const; //查找str最后一次出现位置，从pos开始
*	int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置，从pos开始查找
*	int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次出现的位置
*	int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
*	string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
*	string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
*/

void test0007() {
	string str1 = "abcdefga";

	//int pos = str1.find("df");
	int pos = str1.find("a");
	if (pos == -1) {
		cout << "未找到字符串" << endl;
	}
	else {
		cout << "该字符串从左往右第一次的位置在： " << pos << endl;
	}

	//rfind
	pos = str1.rfind("a");
	if (pos == -1) {
		cout << "未找到字符串" << endl;
	}
	else {
		cout << "该字符串从右往左第一次出现的位置在： " << pos << endl;
	}
}

void test0107() {
	string str1 = "abcdefg";
	str1.replace(1, 3, "11111"); //从1号位置起，3个字符替换为 11111
	cout << "str1 = " << str1 << endl; // a11111efg
}

int test07() {

	test0007();
	test0107();

	system("pause");

	return 0;
}