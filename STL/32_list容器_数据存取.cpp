#include <iostream>
#include <list>

using namespace std;

/*
*	front(); //���ص�һ��Ԫ��
*	back(); //�������һ��Ԫ��
*/

int test32() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	//��������[]��at����list�е�Ԫ�ء���Ϊlist���������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
	//l1[0];
	//l1.at(0);

	cout << "��һ��Ԫ�أ�" << l1.front() << endl;
	cout << "��һ��Ԫ�أ�" << l1.back() << endl;

	list<int>::iterator it = l1.begin();
	++it;
	--it;
	//it += 1; //��֧���������

	system("pause");

	return 0;
}