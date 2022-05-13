#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

//5��ѡ�֣�ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȡ����߷ֺ���ͷ֣�ȡƽ����

//ѡ����
class Person {
private:
	string m_Name;
	int m_Score;

public :
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}

	string getName() {
		return this->m_Name;
	}
	void setName(string name) {
		this->m_Name = name;
	}
	int getScore() {
		return this->m_Score;
	}
	void setScore(int score) {
		this->m_Score = score;
	}
};

void createPerson(vector<Person>& v) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++) {
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		
		Person p(name, score);

		v.push_back(p);
	}
}

void printPerson(vector<Person>& vp) {
	for (vector<Person>::iterator cit = vp.begin(); cit != vp.end(); cit++) {
		cout << "Name: " << (*cit).getName() << "\tAvgScore: " << (*cit).getScore() << endl;
	}
	cout << endl;
}

void setScore(vector<Person> &vp) {
	for (vector<Person>::iterator it = vp.begin(); it != vp.end(); it++) {
		deque<int> d;

		for (int i = 0; i < 10; i++) {
			int score = rand() % 41 + 60; //[0~40] + 60;
			d.push_back(score);
		}

		sort(d.begin(), d.end());

		d.pop_back();
		d.pop_front();

		int sum = 0;
		cout << "Name: " << it->getName() << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " "; 
			sum += *dit;
		}
		cout << endl;
		double avg = sum * 1.0 / d.size(); 

		it->setScore(avg);
	}
}

int test25() {

	srand((unsigned long)time(0));

	//��������ѡ��
	vector<Person> vp;
	createPerson(vp);

	//Test
	printPerson(vp);

	//��5��ѡ�ִ��
	setScore(vp);
	printPerson(vp);


	return 0;
}
