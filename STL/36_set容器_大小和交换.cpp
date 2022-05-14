#include <iostream>
#include <set>

using namespace std;

void printSet1(set<int>& st) {
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test36() {

	set<int> s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);
	s1.insert(70);
	s1.insert(50);
	s1.insert(30);


	if (s1.empty()) {
		cout << "s1 is empty" << endl;
	}
	else {
		cout << "s1 is not empty" << endl;
	}

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(400);
	s2.insert(700);
	s2.insert(500);
	s2.insert(300);

	cout << "Before swap: " << endl;
	printSet1(s1);
	printSet1(s2);
	cout << "After swap: " << endl;
	s1.swap(s2);
	printSet1(s1);
	printSet1(s2);


	system("pause");

	return 0;
}