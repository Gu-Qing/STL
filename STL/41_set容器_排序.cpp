#include <iostream>
#include <set>

using namespace std;

class MyCompare {
public :
	bool operator() (const int v1, const int v2) const{
		return v1 > v2; //����
	}
};

void test041() {
	set<int> s1;

	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(50);
	//Ĭ������Ϊ��С����
	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//ָ���������Ϊ�Ӵ�С
	//���÷º�����ɣ���Ϊ�������ȷ���������������Ҫ�ڴ���ʱ��ȷ���º���
	set<int, MyCompare> s2;

	s2.insert(40);
	s2.insert(30);
	s2.insert(20);
	s2.insert(50);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

class Student {
private :

	string m_Name;
	int m_Age;
public :
	Student(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string getName() const {
		return this->m_Name;
	}
	int getAge() const {
		return this->m_Age;
	}
};

 class CompareStudent {
public :
	bool operator() (const Student& s1, const Student& s2) const{
		//���併��
		return s1.getAge() > s2.getAge();
	}
};

//����Զ�����������
void test141() {
	//�����Զ����������ͣ�����Ҫָ���������
	set<Student, CompareStudent> s;

	Student stu1("����", 18);
	Student stu2("����", 19);
	Student stu3("����", 20);
	Student stu4("����", 14);
	Student stu5("Ǯ��", 18);

	s.insert(stu1);
	s.insert(stu2);
	s.insert(stu3);
	s.insert(stu4);
	s.insert(stu5);

	for (set<Student, CompareStudent>::iterator it = s.begin(); it != s.end(); it++) {
		cout << it->getName() << " " << it->getAge() << endl;
	}

	cout << endl;
}


int test41() {

	test041();
	test141();

	system("pause");

	return 0;
}