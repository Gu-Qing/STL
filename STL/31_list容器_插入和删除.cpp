#include <iostream>
#include <list>

using namespace std;

/*
*	push_back(elem); //������β������һ��Ԫ��
*	pop_back(); //ɾ�������е����һ��Ԫ��
*	push_front(); //��������ͷ����һ��Ԫ��
*	pop_front(); //��������ͷɾ��һ��Ԫ��
*	insert(pos, elem); //��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
*	insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ
*	insert(pos, beg, end); //��posλ�ò���[beg, end)��������ݣ��޷���ֵ
*	clear(); //�Ƴ������е���������
*	erase(beg, end); //ɾ��[beg, end)��������ݣ�������һ�����ݵ�λ��
*	erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
*	remove(elem); //ɾ��������������elemֵƥ���Ԫ��
*/

void printList4(const list<int>& lst) {
	for (list<int>::const_iterator cit = lst.begin(); cit != lst.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test31() {

	list<int> l1;

	//β��
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	printList4(l1);
	//ͷ��
	l1.push_front(100);
	l1.push_front(200);
	printList4(l1);
	//βɾ
	l1.pop_back();
	printList4(l1);
	//ͷɾ
	l1.pop_front();
	printList4(l1);

	list<int>::iterator it = l1.begin();
	l1.insert(++it, 1000);
	printList4(l1);

	it = l1.begin();
	l1.erase(++it);
	printList4(l1);


	l1.push_back(10000);
	l1.push_front(10000);
	printList4(l1);
	l1.remove(10000);
	printList4(l1);

	l1.clear();
	printList4(l1);


	system("pause");

	return 0;
}