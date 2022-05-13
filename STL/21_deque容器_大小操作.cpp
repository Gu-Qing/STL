#include <iostream>
#include <deque>

using namespace std;

/*
*	deque.empty(); //�ж������Ƿ�Ϊ��
*	deque.size(): //����������Ԫ�ظ���
*	deque.resize(num); //�����趨�����ĳ���num
*	deque.resize(num, elem); //�����趨�����ĳ���num��������Ĭ�ϵ����ֵelem
*/

void printDeque2(const deque<int> &d) {
	for (deque<int>::const_iterator cit = d.begin(); cit != d.end(); cit++) {
		cout << *cit << " ";
	}
	cout << endl;
}

int test21() {

	deque<int> d1;
	for (int i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	printDeque2(d1);

	if (d1.empty()) {
		cout << "d1 is empty!" << endl;
	}
	else {
		cout << "d1 is not empty!" << endl;
		cout << "d1's size is: " << d1.size() << endl; //deque û��capacity��û�������ĸ���
	}
	d1.resize(15);
	printDeque2(d1);
	d1.resize(20, 1);
	printDeque2(d1);
	d1.resize(10);
	printDeque2(d1);


	return 0;
}