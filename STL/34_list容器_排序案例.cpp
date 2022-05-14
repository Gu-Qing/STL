#include <iostream>
#include <list>

using namespace std;

#pragma pack(1)

class Person {
private:
	string m_Name;
	int m_Age;
	int m_Height;
	int m_Test;

public:
	Person(string name, int age, int height, int test) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
		this->m_Test = test;
	}

	string getName() {
		return this->m_Name;
	}
	int getAge() {
		return this->m_Age;
	}
	int getHeight() {
		return this->m_Height;
	}
	int getTest() {
		return this->m_Test;
	}
};

bool myCompare(Person* p1, Person* p2) {
	if (p1->getAge() == p2->getAge()) {
		return p1->getHeight() > p2->getHeight();
	}
	return p1->getAge() < p2->getAge();
}

void printPerson(list<Person*>& L) {
	for (list<Person*>::iterator it = L.begin(); it != L.end(); it++) {
		cout << "Name: " << (*it)->getName() << " Age: " << (*it)->getAge() << " Height: " << (*it)->getHeight() << " Test: " << (*it)->getTest() << endl;
	}
}


int test34() {

	list<Person*> L;

	Person p1("张三", 10, 158, 1);
	Person p2("李四", 20, 150, 2);
	Person p3("王五", 20, 150, 3);
	Person p4("赵六", 26, 180, 4);
	Person p5("钱多多", 18, 160, 5);
	Person p6("孙多宝", 18, 175, 6);

	L.push_back(&p1);
	L.push_back(&p2);
	L.push_back(&p3);
	L.push_back(&p4);
	L.push_back(&p5);
	L.push_back(&p6);

	cout << "Before sort: " << endl;
	printPerson(L);
	cout << "After sort: " << endl;
	L.sort(myCompare);
	printPerson(L);

	system("pause");

	return 0;
}

#pragma pack()
