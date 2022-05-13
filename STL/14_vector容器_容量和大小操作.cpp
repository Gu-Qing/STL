#include <iostream>
#include <vector>
using namespace std;

/*
*	empty(); //�ж������Ƿ�Ϊ��
*	capacity(); //����������
*	size(); //����������Ԫ�صĸ���
*	resize(int num); //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�ã�����̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
*	resize(int num, elem); //ͬ��
*/

void printVector2(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test14() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector2(v1);

	if (v1.empty()) {
		cout << "v1 is empty!" << endl;
	}
	else {
		cout << "v1 is not empty!" << endl;
		cout << "v1's capacity is: " << v1.capacity() << endl; //13
		cout << "v1's size is: " << v1.size() << endl;
	}

	//����ָ����С
	v1.resize(15);
	printVector2(v1); //�������ָ���ı�ԭ������Ĭ����0�����λ��

	v1.resize(20, 100); //Ҳ����ָ��Ĭ�����ֵ
	printVector2(v1); //

	//
	v1.resize(10); //����ָ����ԭ��С�ͻ�ɾ�������
	printVector2(v1);

	system("pause");

	return 0;
}