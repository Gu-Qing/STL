#include <iostream>
#include <set>

using namespace std;

/*
*	find(key); //����key�Ƿ���ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end()
*	count(key); //ͳ��key��Ԫ�ظ���(����set��˵ֻ����0��1����Ϊ��������ֵ�ظ�)
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