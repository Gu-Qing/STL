#include <iostream>
#include <string>
using namespace std;

/*
* string substr(int pos = 0, int n = npos) const; //������pos��ʼ��n���ַ���ɵ��ַ���
*/

int test11() {

	string str = "abcdefg";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl; //bcd

	string email = "hello@sina.com";
	//���ʼ���ַ�л�ȡ�û���Ϣ
	int ind = email.find('@');
	string name = email.substr(0, ind);
	cout << "name = " << name << endl;

	system("pause");

	return 0;
}