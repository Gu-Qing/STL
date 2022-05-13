#include <iostream>
using namespace std;

void test0008() {

	string str1 = "hello";
	string str2 = "hello";
	string str3 = "xello";
	string str4 = "aello";

	if (str1.compare(str2) == 0) {
		cout << "str1 == str2" << endl;
	}
	if (str1.compare(str3) == -1) { // < ·µ»Ø-1
		cout << "str1 < str3" << endl;
	}
	if (str1.compare(str4) == 1) { // > ·µ»Ø1
		cout << "str1 > str4" << endl;
	}
}

int test08() {

	test0008();

	system("pause");

	return 0;
}