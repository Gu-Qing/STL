#include <iostream>
#include <set>

using namespace std;

int test39() {

	set<int> s1;
	pair<set<int>::iterator, bool> ret = s1.insert(10);
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}

	ret = s1.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}

	cout << "------------------------------------" << endl;

	//��������ظ�ֵ
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