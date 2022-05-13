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
		//查看栈顶
		cout << "栈顶元素：" << s.top() << endl;
		s.pop(); //出栈
		cout << "栈的大小：" << s.size() << endl;
	}

	system("pause");

	return 0;
}