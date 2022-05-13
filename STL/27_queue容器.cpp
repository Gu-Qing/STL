#include <iostream>
#include <queue>

using namespace std;

class Student {
public :
	string m_Name;
	int m_Age;

	Student(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
};

int test27() {

	queue<Student> q;
	
	Student s1("张三", 18);
	Student s2("李四", 20);
	Student s3("王五", 22);
	Student s4("赵六", 30);

	q.push(s1);
	q.push(s2);
	q.push(s3);
	q.push(s4);

	while (!q.empty()) {
		cout << "队头元素—— 姓名：" << q.front().m_Name
			<< " 年龄：" << q.front().m_Age << endl;

		cout << "队尾元素—— 姓名：" << q.back().m_Name
			<< " 年龄：" << q.back().m_Age << endl;

		cout << "队列大小：" << q.size() << endl;

		cout << "-----------------------------------" << endl;

		q.pop();
	}

	system("pause");

	return 0;
}