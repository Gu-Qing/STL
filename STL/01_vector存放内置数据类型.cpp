#include <iostream>
#include <vector>
#include <algorithm> //��׼�㷨ͷ�ļ�
using namespace std;

/*
* ������vector
* �㷨��for_each
* ��������vector<int>::iterator
*/

void MyPrint(int val) {
	cout << val << endl;
}

void test0001() {
	//������һ��vector���������Կ�����һ������
	vector<int> v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ�����������������е�����
	vector<int>::iterator itBegin = v.begin(); //��ʼ��������ָ�������е�һ��Ԫ��
	vector<int>::iterator itEnd = v.end(); //������������ָ�����������һ��Ԫ�صĺ�һλ

	//��һ�ֱ�����ʽ
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		++itBegin;
	}
	cout << "---------------------------------" << endl;
	//�ڶ��ֱ�����ʽ ����
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << "---------------------------------" << endl;
	//�����ֱ�����ʽ ����STL�ṩ�ķ���
	// FUNCTION TEMPLATE for_each
	//template <class _InIt, class _Fn>
	//_CONSTEXPR20 _Fn for_each(_InIt _First, _InIt _Last, _Fn _Func) { // perform function for each element [_First, _Last)
	//	_Adl_verify_range(_First, _Last);
	//	auto _UFirst = _Get_unwrapped(_First);
	//	const auto _ULast = _Get_unwrapped(_Last);
	//	for (; _UFirst != _ULast; ++_UFirst) {
	//		_Func(*_UFirst);
	//	}
	//	return _Func;
	//}
	for_each(v.begin(), v.end(), MyPrint);
}

int test01() {

	test0001();

	system("pause");

	return 0;
}