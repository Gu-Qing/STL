#include <iostream>
#include <map>

using namespace std;

/*
*	find(key); //����key�Ƿ���ڣ������ڷ��ظü���Ԫ�صĵ������������ڷ���set.end();
*	count(key); //ͳ��key��Ԫ�ظ���
*/

int test45() {

	map<int, int> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(3, 40));

	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end()) {
		cout << "Find element 3 ���� " << pos->second << endl;
	}
	else {
		cout << "Not found element 3" << endl;
	}

	int num = m.count(3); //ҪôΪ0ҪôΪ1
	cout << "Num = " << num << endl;

	system("pause");

	return 0;
}