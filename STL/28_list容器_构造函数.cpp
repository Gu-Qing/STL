#include <iostream>
#include <list>

using namespace std;

/*
*	list<T> list; //����ģ����ʵ�֣������Ĭ�Ϲ�����ʽ
*	list(beg, end); //���캯����[beg, end)�����е�Ԫ�ؿ���������
*	list(n, elem); //���캯����n��elem����������
*	list(const list &lst); //�������캯��
*/
void printList(const list<int>& l) {
	for (list<int>::const_iterator cit = l.begin(); cit != l.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test28() {

	list<int> l1;

	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	printList(l1);

	list<int> l2(l1.begin(), l1.end());
	printList(l2);

	list<int> l3(10, 6);
	printList(l3);

	list<int> l4(l3);
	printList(l4);

	system("pause");

	return 0;
}