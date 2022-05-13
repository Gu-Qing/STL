#include <iostream>
#include <list>

using namespace std;

/*
*	size(); //����������Ԫ�صĸ���
*	empty(); //�ж������Ƿ�Ϊ��
*	resize(num); //����ָ�������ĳ���Ϊnum�����䳤��Ĭ��ֵ��䣨Ĭ��Ϊ0�������ɾ�������ֵ
*	resize(num, elem); //����ָ�������ĳ���Ϊnum�����䳤��Ĭ��ֵelem��䣬���ɾ�������ֵ
*/

void printList3(const list<int>& lst) {
	for (list<int>::const_iterator cit = lst.begin(); cit != lst.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test30() {

	list<int> lst1;
	lst1.push_back(10);
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(20);
	printList3(lst1);


	if (!lst1.empty()) {
		cout << "list ��Ϊ��" << endl;
		cout << "list��Ԫ�ظ�����" << lst1.size() << endl;
	}

	lst1.resize(6);
	printList3(lst1);
	lst1.resize(10, 9);
	printList3(lst1);
	lst1.resize(5);
	printList3(lst1);


	return 0;
}