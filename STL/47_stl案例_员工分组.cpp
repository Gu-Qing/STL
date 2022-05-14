#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>

/*
��˾��Ƭ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾����Ҫָ��Ա�����ĸ����Ź���
Ա����Ϣ�� �����͹�����ɣ����ַ�Ϊ���߻����������з� 
�����10��Ա�����䲿�ź͹���
ͨ��multimap������Ϣ�Ĳ��� key�����ű�ţ� value��Ա����
�ֲ�����ʾԱ����Ϣ
*/

using namespace std;

#define MASTERMIND 0 //�߻�
#define ARTISTIC 1 //����
#define DEVELOPMENT 2 //�з�

class Worker {
private :
	string m_Name;
	int m_Salary;

public :

	Worker() {}
	Worker(string name, int salary) {
		this->m_Name = name;
		this->m_Salary = salary;
	}

	string getName() const {
		return this->m_Name;
	}
	void setName(string name) {
		this->m_Name = name;
	}
	int getSalary() const {
		return this->m_Salary;
	}
	void setSalary(int salary) {
		this->m_Salary = salary;
	}
};

void createWorker(vector<Worker>& vWorker) {
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Worker worker;
		string str = "Ա��";
		worker.setName(str + nameSeed[i]);

		worker.setSalary(rand() % 10000 + 10000); //10000 ~ 19999

		vWorker.push_back(worker);
	}
	return;
}

void printWroker(const vector<Worker> &v) {
	for (vector<Worker>::const_iterator it = v.begin(); it != v.end(); it++) {
		cout << "Name: " << it->getName() << "\tSalary: " << it->getSalary() << endl;
	}
	cout << endl;
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &mm) {
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		//����������ű��
		int deptId = rand() % 3; //0 1 2 

		mm.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& mm) {
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = mm.find(MASTERMIND);
	int count = mm.count(MASTERMIND); //ͳ�ƾ�������
	int index = 0;
	while (pos != mm.end() && index++ < count) {
		cout << "Name: " << pos->second.getName() << "\tSalary: " << pos->second.getSalary() << endl;
		++pos;
	}
	cout << "-------------------------------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = mm.find(ARTISTIC);
	count = mm.count(ARTISTIC);
	index = 0;
	while (pos != mm.end() && index++ < count) {
		cout << "Name: " << pos->second.getName() << "\tSalary: " << pos->second.getSalary() << endl;
		++pos;
	}
	cout << "-------------------------------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = mm.find(DEVELOPMENT);
	count = mm.count(DEVELOPMENT);
	index = 0;
	while (pos != mm.end() && index++ < count) {
		cout << "Name: " << pos->second.getName() << "\tSalary: " << pos->second.getSalary() << endl;
		++pos;
	}
}

int main() {

	srand((unsigned int)time(0));

	//����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);
	printWroker(vWorker);

	//Ա������
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	//������ʾԱ��
	showWorkerByGroup(mWorker);

	return 0;
}