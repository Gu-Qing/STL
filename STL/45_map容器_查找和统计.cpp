#include <iostream>
#include <map>

using namespace std;

/*
*	find(key); //查找key是否存在，若存在返回该键的元素的迭代器，不存在返回set.end();
*	count(key); //统计key的元素个数
*/

int test45() {

	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(3, 40));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end()) {
		cout << "Find element 3 —— " << pos->second << endl;
	}
	else {
		cout << "Not found element 3" << endl;
	}

	int num = m.count(3); //要么为0要么为1
	cout << "Num = " << num << endl;

	system("pause");

	return 0;
}