#include <iostream>
#include <map>

using namespace std;

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key: " << it->first << " value: " << it->second << endl;
	}
	cout << endl;
}

int test42() {
	//创建map
	map<int, int> m1;

	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(4, 40));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(3, 50));// 不会再被插入，3对应的value还是30
	printMap(m1);

	map<int, int> m2(m1);
	printMap(m2);

	map<int, int> m3 = m2;
	printMap(m3);

	return 0;
}