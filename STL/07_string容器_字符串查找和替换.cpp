#include <iostream>
#include <string>
using namespace std;

/*
*	int find(const string& str, int pos = 0) const; //����str��һ�γ���λ�ã���pos��ʼ����
*	int find(const char* s, int pos = 0) const; //����s��һ�γ���λ�ã���pos��ʼ����
*	int find(const char* s, int pos, int n) const; //��posλ�ò���s��ǰn���ַ���һ�γ���λ��
*	int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
*	int rfind(const string& str, int pos = npos) const; //����str���һ�γ���λ�ã���pos��ʼ
*	int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ�ã���pos��ʼ����
*	int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ�γ��ֵ�λ��
*	int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
*	string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
*	string& replace(int pos, int n, const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/

void test0007() {
	string str1 = "abcdefga";

	//int pos = str1.find("df");
	int pos = str1.find("a");
	if (pos == -1) {
		cout << "δ�ҵ��ַ���" << endl;
	}
	else {
		cout << "���ַ����������ҵ�һ�ε�λ���ڣ� " << pos << endl;
	}

	//rfind
	pos = str1.rfind("a");
	if (pos == -1) {
		cout << "δ�ҵ��ַ���" << endl;
	}
	else {
		cout << "���ַ������������һ�γ��ֵ�λ���ڣ� " << pos << endl;
	}
}

void test0107() {
	string str1 = "abcdefg";
	str1.replace(1, 3, "11111"); //��1��λ����3���ַ��滻Ϊ 11111
	cout << "str1 = " << str1 << endl; // a11111efg
}

int test07() {

	test0007();
	test0107();

	system("pause");

	return 0;
}