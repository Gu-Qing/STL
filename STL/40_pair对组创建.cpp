#include <iostream>

using namespace std;

/*
* pair���鴴�����ɶԳ��ֵ����ݣ����ö�����Է����������ݣ�
* ����Ҫ����ͷ�ļ�
*	pair<type, type> p(value1, value2);
*	pair<type, type> p = make_pair(value1, value2);
*/
int test40() {

	//��һ�ִ�����ʽ
	pair<string, int> p("Tom", 20);
	cout << "Name: " << p.first << " Age: " << p.second << endl;

	//�ڶ��ִ�����ʽ
	pair<string, int> p1 = make_pair("Marry", 18);
	cout << "Name: " << p1.first << " Age: " << p1.second << endl;


	return 0;
}