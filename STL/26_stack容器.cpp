#include <iostream>
#include <stack>

using namespace std;

int tes26() {

	stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	while (!s.empty()) {
		//�鿴ջ��
		cout << "ջ��Ԫ�أ�" << s.top() << endl;
		s.pop(); //��ջ
		cout << "ջ�Ĵ�С��" << s.size() << endl;
	}

	system("pause");

	return 0;
}