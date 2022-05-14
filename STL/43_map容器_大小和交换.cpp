#include <iostream>
#include <map>

using namespace std;

void printMap2(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "First: " << it->first << " Second: " << it->second << endl;
	}
	cout << endl;
}

int test43() {
	map<int, int> m;
	m.insert(pair<int, int>(10, 100));
	m.insert(pair<int, int>(20, 200));
	m.insert(pair<int, int>(30, 300));
	m.insert(pair<int, int>(40, 400));

	if (m.empty()) {
		cout << "Map is empty" << endl;
	}
	else {
		cout << "Map is not empyt" << endl;
		cout << "Map's size is: " << m.size() << endl;
	}

	map<int, int> m2;
	m2.insert(pair<int, int>(1, 10));
	m2.insert(pair<int, int>(2, 20));
	m2.insert(pair<int, int>(3, 30));
	m2.insert(pair<int, int>(4, 40));

	cout << "Before swap: " << endl;
	printMap2(m);
	printMap2(m2);
	cout << "After swap: " << endl;
	m.swap(m2);
	printMap2(m);
	printMap2(m2);

	system("pause");

	return 0;
}