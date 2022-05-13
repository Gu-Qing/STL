#include <iostream>
#include <vector>

using namespace std;

int test18() {

	vector<int> v;
	v.reserve(100000);

	int num = 0; //统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			++num;
		}
	}
	cout << num << endl; //30 加上reserve之后是1



	system("pause");

	return 0;
}