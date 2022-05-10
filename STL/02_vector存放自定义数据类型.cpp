#include <iostream>
#include <vector>
using namespace std;

class Person {
private :
	string m_Name;
	int m_Age;
public :
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}

	string GetName() {
		return m_Name;
	}

	int GetAge() {
		return m_Age;
	}
};

void test0002() {
	vector<Person> v;
	Person p1("aa", 10);
	Person p2("bb", 20);
	Person p3("cc", 30);

	//���������������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//���������е�����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "Name: " << (*it).GetName()
			<< " Age: " << (*it).GetAge() << endl;
		cout << "Name: " << it->GetName()
			<< " Age: " << it->GetAge() << endl;
	}
}

//����Զ����������� ָ��
void test0102() {
	vector<Person*> v;
	Person p1("aa", 10);
	Person p2("bb", 20);
	Person p3("cc", 30);

	//���������������
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);

	//��������
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "Name: " << (*it)->GetName()
			<< " Age: " << (*it)->GetAge() << endl;
	}
}

int test02() {

	test0002();
	cout << "------------------------" << endl;
	test0102();

	return 0;
}