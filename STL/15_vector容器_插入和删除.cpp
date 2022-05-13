#include <iostream>
#include <vector>

using namespace std;

/*
*	push_back(ele); //β������һ��Ԫ��ele
*	pop_back(); //ɾ�����һ��Ԫ��
*	insert(const_iterator pos, ele); //������ָ��λ��pos����Ԫ��ele
*	insert(const_iterator pos, int count, ele); //������ָ��λ��pos����count��Ԫ��ele
*	erase(const_iterator pos); //ɾ��������ָ���Ԫ��
*	erase(const_iterator start, const_iterator end); //ɾ����������start��end֮���Ԫ��
*	clear(); //ɾ������������Ԫ��
*/

void printVector3(vector<int>& v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test15() {

	vector<int> v1;
	for (int i = 0; i < 5; i++) {
		v1.push_back(i);
	}

	printVector3(v1);

	v1.pop_back();
	printVector3(v1);

	v1.insert(v1.begin(), 100); //��һ�������ĵ�������λ��
	printVector3(v1);

	v1.insert(v1.begin(), 5, 10); //ͷ�巨��������5��10
	printVector3(v1);

	v1.erase(v1.begin()); //����Ҳ�ǵ�����
	printVector3(v1);

	v1.erase(v1.begin(), v1.end()); // == v1.clear();
	printVector3(v1);

	system("pause");

	return 0;
}