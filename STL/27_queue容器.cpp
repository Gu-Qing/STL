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
	
	Student s1("����", 18);
	Student s2("����", 20);
	Student s3("����", 22);
	Student s4("����", 30);

	q.push(s1);
	q.push(s2);
	q.push(s3);
	q.push(s4);

	while (!q.empty()) {
		cout << "��ͷԪ�ء��� ������" << q.front().m_Name
			<< " ���䣺" << q.front().m_Age << endl;

		cout << "��βԪ�ء��� ������" << q.back().m_Name
			<< " ���䣺" << q.back().m_Age << endl;

		cout << "���д�С��" << q.size() << endl;

		cout << "-----------------------------------" << endl;

		q.pop();
	}

	system("pause");

	return 0;
}