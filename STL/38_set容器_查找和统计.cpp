#include <iostream>
#include <set>

using namespace std;

/*
*	find(key); //查找key是否存在，返回该键的元素的迭代器；若不存在，返回set.end()
*	count(key); //统计key的元素个数(对于set来说只能是0或1，因为不允许有值重复)
*/

int test38() {

	set<int> s1;

	s1.insert(1);
	s1.insert(2);
	s1.insert(3);
	s1.insert(4);
	s1.insert(1);
	s1.insert(10);

	set<int>::iterator pos = s1.find(3);

	if (pos != s1.end()) {
		cout << "Find element 3!" << endl;
	}
	else {
		cout << "Not find element 3!" << endl;
	}

	pos = s1.find(30);

	if (pos != s1.end()) {
		cout << "Find element 30!" << endl;
	}
	else {
		cout << "Not find element 30!" << endl;
	}

	cout << "--------------------------------------" << endl;

	int num = s1.count(1);
	cout << "No.3 total is: " << num << endl;

	num = s1.count(30);
	cout << "No.30 total is: " << num << endl;

	system("pause");

	return 0;
}