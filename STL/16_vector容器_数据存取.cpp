#include <iostream>
#include <vector>
using namespace std;

/*
*	at(int idx); //��������idx��ָ������
*	operator[idx]; //��������idx��ָ������
*	fornt(); //���������е�һ������Ԫ��
*	back(); //�������������һ��Ԫ��
*/

int test16() {
	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}

	//����[] ����Ԫ��
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at ����Ԫ��
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "The first element is : " << v1.front() << endl;
	cout << "The last element is : " << v1.back() << endl;


	system("pause");

	return 0;
}