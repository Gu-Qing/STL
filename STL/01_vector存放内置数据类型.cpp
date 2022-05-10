#include <iostream>
#include <vector>
#include <algorithm> //标准算法头文件
using namespace std;

/*
* 容器：vector
* 算法：for_each
* 迭代器：vector<int>::iterator
*/

void MyPrint(int val) {
	cout << val << endl;
}

void test0001() {
	//创建了一个vector容器，可以看作是一个数组
	vector<int> v;

	//向容器中插入数据
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//通过迭代器访问容器中的数据
	vector<int>::iterator itBegin = v.begin(); //起始迭代器，指向容器中第一个元素
	vector<int>::iterator itEnd = v.end(); //结束迭代器，指向容器中最后一个元素的后一位

	//第一种遍历方式
	while (itBegin != itEnd) {
		cout << *itBegin << endl;
		++itBegin;
	}
	cout << "---------------------------------" << endl;
	//第二种遍历方式 常用
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
	cout << "---------------------------------" << endl;
	//第三种遍历方式 利用STL提供的方法
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