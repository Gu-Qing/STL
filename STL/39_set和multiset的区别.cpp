#include <iostream>
#include <set>

using namespace std;

int test39() {

	set<int> s1;
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second) {
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}

	ret = s1.insert(10);
	if (ret.second) {
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
	}

	cout << "------------------------------------" << endl;

	//允许插入重复值
	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	system("pause");

	return 0;
}