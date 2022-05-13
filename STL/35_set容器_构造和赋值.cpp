#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& st) {
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int test35() {

	set<int> s1;

	s1.insert(10);
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);

	printSet(s1); //10 20 30 

	set<int> s2(s1);
	printSet(s2);

	set<int> s3;
	s3 = s2;
	printSet(s3);

	system("pause");

	return 0;
}