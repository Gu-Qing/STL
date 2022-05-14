#include <iostream>
#include <map>

using namespace std;

/*
*	insert(elem); //�������в���Ԫ��
*	clear(); //�������Ԫ��
*	erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
*	erase(beg, end); //ɾ������[beg, end)������Ԫ�أ�������һ��Ԫ�صĵ�����
*	erase(key); //ɾ��������ֵΪkey��Ԫ��
*/

void printMap3(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
}

int test44() {

	map<int, int> m;

	//��һ��
	m.insert(pair<int, int>(1, 10));

	//�ڶ���
	m.insert(make_pair(2, 20));

	//������
	m.insert(map<int, int>::value_type(3, 30));

	//������ ���������ڲ���
	m[4] = 40;

	printMap3(m);
	cout << m[5] << endl; //û������������ǻᴴ����������һḳ��Ĭ��ֵ0
	cout << m[1] << endl; //����ʹ��key���ʵ�value

	m.erase(m.begin()); 
	printMap3(m);

	m.erase(5); //����keyɾ��
	printMap3(m);

	//m.erase(m.begin(), m.end()); //���
	m.clear();
	printMap3(m);


	system("pause");

	return 0;
}