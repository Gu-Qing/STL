#include <iostream>
#include <deque>

using namespace std;

/*
* ���˲��������
*	push_back(elem); //������β�����һ������
*	push_front(elem); //������ͷ�����һ������
*	pop_back(); //ɾ���������һ������
*	pop_front(); //ɾ��������һ������
* ָ��λ�ò�����
*	insert(pos, elem); //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
*	insert(pos, n, elem); //��posλ�ò���n��elem���ݣ��޷���ֵ
*	insert(pos, beg, end); //��posλ�ò���[beg, end)��������ݣ��޷���ֵ
*	clear(); //�����������������
*	erase(beg, end); //ɾ��[beg, end)��������ݿ���������һ�����ݵ�λ��
*	erase(pos); //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
*/

void printDeque3(const deque<int>& d) {
	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test22() {

	deque<int> d1;

	//β��
	d1.push_back(10);
	d1.push_back(20);
	printDeque3(d1);
	//ͷ��
	d1.push_front(30);
	d1.push_front(40);
	printDeque3(d1);

	//ͷɾ
	d1.pop_front();
	printDeque3(d1);

	//βɾ
	d1.pop_back();
	printDeque3(d1);

	cout << "-------------------" << endl;

	deque<int> d2;
	d2.push_back(100);
	d2.push_back(50);
	d2.push_back(200);
	d2.push_back(400);
	printDeque3(d2);

	//insert
	d2.insert(d2.begin(), 1000);
	printDeque3(d2);
	d2.insert(d2.begin(), 2, 2000);

	deque<int> d3;
	d3.push_back(1);
	d3.push_back(2);
	d3.push_back(3);

	//��d2.begin()��λ�ò���[d3.begin(),d3.end())���������
	d2.insert(d2.begin(), d3.begin(), d3.end());
	printDeque3(d2);

	cout << "-------------------------------------" << endl;
	deque<int> d4;
	d4.push_back(1);
	d4.push_back(2);
	d4.push_back(3);
	d4.push_back(4);
	//delete
	deque<int>::iterator it = d4.begin();
	++it;
	d4.erase(it);
	printDeque3(d4); //1 3 4

	//���
	d4.erase(d4.begin(), d4.end());
	printDeque3(d4);
	d4.clear();
	printDeque3(d4);

	return 0;
}