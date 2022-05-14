#include <iostream>
#include <map>

using namespace std;

class MyCompare {
public :
	bool operator() (const int v1, const int v2) const {
		//½µĞò
		return v1 > v2;
	}
};

void test046() {
	map<int, int, MyCompare> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(5, 50));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(3, 30));

	for (map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
}

int test46() {

	test046();

	system("pause");

	return 0;
}