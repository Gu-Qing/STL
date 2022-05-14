#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <ctime>

/*
公司照片了10个员工（ABCDEFGHIJ），10名员工进入公司厚，需要指派员工在哪个部门工作
员工信息由 姓名和工资组成；部分分为：策划、美术、研发 
随机给10名员工分配部门和工资
通过multimap进行信息的插入 key（部门编号） value（员工）
分部门显示员工信息
*/

using namespace std;

#define MASTERMIND 0 //策划
#define ARTISTIC 1 //美术
#define DEVELOPMENT 2 //研发

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
		string str = "员工";
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
		//产生随机部门编号
		int deptId = rand() % 3; //0 1 2 

		mm.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& mm) {
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = mm.find(MASTERMIND);
	int count = mm.count(MASTERMIND); //统计具体人数
	int index = 0;
	while (pos != mm.end() && index++ < count) {
		cout << "Name: " << pos->second.getName() << "\tSalary: " << pos->second.getSalary() << endl;
		++pos;
	}
	cout << "-------------------------------------------------" << endl;
	cout << "美术部门：" << endl;
	pos = mm.find(ARTISTIC);
	count = mm.count(ARTISTIC);
	index = 0;
	while (pos != mm.end() && index++ < count) {
		cout << "Name: " << pos->second.getName() << "\tSalary: " << pos->second.getSalary() << endl;
		++pos;
	}
	cout << "-------------------------------------------------" << endl;
	cout << "研发部门：" << endl;
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

	//创建员工
	vector<Worker> vWorker;
	createWorker(vWorker);
	printWroker(vWorker);

	//员工分组
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);

	//分组显示员工
	showWorkerByGroup(mWorker);

	return 0;
}