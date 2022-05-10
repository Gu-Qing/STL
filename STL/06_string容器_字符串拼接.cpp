#include <iostream>
#include <string>
using namespace std;

/*
*	string& operator+=(const char* str); //����+=������
*	string& operator+=(const char c); //����+=������
*	string& operator+=(const string& str); //����+=������
*	string& append(const char *s); //���ַ���s���ӵ���ǰ�ַ�����β
*	string& append(const char *s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
*	string& append(const string &s); //ͬoperator+=(const string& str)
*	string& append(const string &s, int pos, int n); //�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ����ṹ
*/

void test0006() {
	string str1 = "��";
	str1 += "������Ϸ";
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL ORI ";
	str1 += str2;
	cout << "str1 = " << str1 << endl; 

	string str3 = "I";
	str3.append(" love play game");
	cout << "str3 = " << str3 << endl; //str3 = I love play game

	str3.append(" on computer. 12345", 13);
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.

	str3.append(str2);
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI 

	str3.append(str2, 0, 3); //ֻ��ȡ��LOL  �ӵ�0λ��ʼ��ȡ����ȡ3���ַ�
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI LOL
	
	str3.append(str2, 4, 3); //��ȡORI �ӵ�4λ��ʼ��ȡ����ȡ3���ַ�
	cout << "str3 = " << str3 << endl; //str3 = I love play game on computer.LOL ORI LOLORI
}

int test06() {

	test0006();

	system("pause");

	return 0;
}