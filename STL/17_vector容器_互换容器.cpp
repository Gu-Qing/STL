#include <iostream>
#include <vector>

using namespace std;

void printVector4(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
}

int test17() {

	vector<int> v1;
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector4(v1);
	vector<int> v2;
	for (int i = 9; i >= 0; i--) {
		v2.push_back(i);
	}
	printVector4(v2);

	swap(v1, v2);

	cout << "After swap: " << endl;
	printVector4(v1);
	printVector4(v2);

	cout << "------------------------------------------" << endl;

	//ʵ����;
	//����swap���������ڴ�ռ�
	vector<int> v;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
	}
	cout << "v's capacity is: " << v.capacity() << endl; //v's capacity is: 138255
	cout << "v's size is: " << v.size() << endl; //v's size is: 100000

	v.resize(3);
	cout << "v's capacity is: " << v.capacity() << endl;  //v's capacity is: 138255
	cout << "v's size is: " << v.size() << endl; //v's size is: 3

	//ʹ��swap�����ڴ�
	//vector<int>(v); //���������൱������v������vector�Ŀ������캯��������һ���µĶ���
	//����vĿǰ���õĸ���������ʼ��
	vector<int>(v).swap(v); //ʵ����swap���������������Ĳ������������󴴽���ָ��ԭ����v������Ϊ�������ϻᱻ����
	cout << "v's capacity is: " << v.capacity() << endl;  //v's capacity is: 3
	cout << "v's size is: " << v.size() << endl; //v's size is: 3

	system("pause");

	return 0;
}
