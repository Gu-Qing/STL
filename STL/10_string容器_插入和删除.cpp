#include <iostream>
#include <string>
using namespace std;

/*
*	string& insert(int pos, const char *s); //�����ַ���
*	string& insert(int pos, const string& str); //�����ַ���
*	string& insert(int pos, int n, char c); //��ָ��λ�ò���n���ַ�c
*	string& erase(int pos, int n = npos); //ɾ����pos��ʼ��n���ַ���
*/

int test10() {

	string str = "hello";

	str.insert(1, "111");

	cout << "str = " << str << endl; //str = h111ello

	str.erase(1, 3);
	 
	cout << "str = " << str << endl; //str = hello

	return 0;
}