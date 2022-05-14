#include <iostream>
#include <set>

using namespace std;

/*
*	insert(elem); //�������в���Ԫ��
*	clear(); //�������Ԫ��
*	erase(pos); //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
*	erase(beg, end); //ɾ������[beg, end)������Ԫ�أ�������һ��Ԫ�صĵ�����
*	erase(elem); //ɾ��������ֵΪelem��Ԫ��
*/

void printSet3(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test37() {

	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(50);

	printSet3(s1);

	s1.erase(s1.begin());
	printSet3(s1);

	cout << s1.erase(20) << endl; //������һ��Ԫ�صĵ�����
	printSet3(s1);

	//s1.erase(s1.begin(), s1.end());
	s1.clear();

	system("pause");

	return 0;
}