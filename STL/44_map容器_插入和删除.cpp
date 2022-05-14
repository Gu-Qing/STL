#include <iostream>
#include <map>

using namespace std;

/*
*	insert(elem); //在容器中插入元素
*	clear(); //清除所有元素
*	erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器
*	erase(beg, end); //删除区间[beg, end)的所有元素，返回下一个元素的迭代器
*	erase(key); //删除容器中值为key的元素
*/

void printMap3(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	cout << endl;
}

int test44() {

	map<int, int> m;

	//第一种
	m.insert(pair<int, int>(1, 10));

	//第二种
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种 不建议用于插入
	m[4] = 40;

	printMap3(m);
	cout << m[5] << endl; //没有这个键，但是会创建这个键并且会赋予默认值0
	cout << m[1] << endl; //可以使用key访问到value

	m.erase(m.begin()); 
	printMap3(m);

	m.erase(5); //根据key删除
	printMap3(m);

	//m.erase(m.begin(), m.end()); //清空
	m.clear();
	printMap3(m);


	system("pause");

	return 0;
}