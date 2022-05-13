#include <iostream>
#include <list>
//#include <algorithm>

using namespace std;

void printList5(const list<int> &l) {
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

bool myCompare(int a, int b) {
	//�����õ�һ���� > �ڶ�����
	return a > b;
}

int test33() {

	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	cout << "Before reverse: " << endl;
	printList5(l1);
	cout << "After reverse: " << endl;
	l1.reverse();
	printList5(l1);

	cout << "After sort: " << endl;
	//���в�֧��������ʵĵ�����������ʹ�ñ�׼�㷨
	// sort(l1.begin(), l1.end());
	//��֧��������ʵ������������ڲ����ṩ��ӦһЩ�㷨
	l1.sort(); //Ĭ������
	printList5(l1);
	l1.sort(myCompare);
	printList5(l1);


	system("pause");

	return 0;
}