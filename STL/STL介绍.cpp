/*
* 1.STL的诞生
* C++的面向对象和泛型编程思想，目的就是复用性的提升
* 大多数情况下，数据结构和算法都未能有一套标准，导致被迫从事大量重复的工作
* 为了建立数据结构和算法的一套标准，诞生了STL
* 
* 2.STL基本概念
* STL(Standard Template Library)标准模板库
* STL从广义上分为：容器(container)算法(algorithm)迭代器(iterator)
* 容器和算法之间通过迭代器进行无缝连接
* STL几乎所有的代码都采用了模板类或者模板函数
* 
* 3.STL六大组件
* 容器、算法、迭代器、仿函数、适配器（配接器）、空间配置器
* 1.容器：各种数据结构，如vector、list、deque、set、map等，用来存放数据
* 2.算法：各种常用的算法，如sort、find、copy、for_each等
* 3.迭代器：扮演了容器与算法之间的胶合剂
* 4.仿函数：行为类似函数，可作为算法的某种策略
* 5.适配器：一种用来修饰容器或者仿函数或迭代器接口的东西
* 6.空间配置器：负责空间的配置与管理
* 
* 3.1 STL中容器、算法、迭代器
* （1）容器：STL中的容器就是将运用最广泛的一些数据结构实现出来
* 常用的数据结构：数组、链表、树、栈、队列、集合、映射表等
* 这些容器分为序列式容器和关联式容器：
*  序列式容器：强调值的排序，序列式容器中的每个元素均有固定的位置
*  关联式容器：二叉树结构，个元素之间没有严格的物理上的顺序关系
* 
* （2）算法：用有限的步骤，解决逻辑或数学上的问题
* 算法分为质变算法和非质变算法：
*  质变算法：运算过程中会更改区间内的元素的内容。eg：拷贝、替换、删除等
*  非质变算法：运算过程中不会更改区间内的元素内容。eg：查找、计数、遍历、寻找极值等
* 
* （3）迭代器：
* 提供一种方法，使之能够依序寻访某个容器所含的各个元素，而又无需暴露该容器的内部表示方法。
* 每个容器都有自己专属的迭代器。
* 迭代器使用个非常类似于指针，初学阶段可以先理解为指针
* 迭代器种类：
* 1.输入迭代器	对数据的只读访问	只读，支持++、==、!=
* 2.输出迭代器	对数据的只写访问	致谢，支持++
* 3.前向迭代器	读写操作，并能向前推进迭代器	读写，支持++、==、!=
* 4.双向迭代器	读写操作，并能向前和向后操作	读写，支持++、--【常用】
* 5.随机访问迭代器	读写操作，可以以跳跃的方式访问任意数据，功能最强的迭代器	支持++、--、[n]、-n、<、<=、>、>= 【常用】
* 
* 
* string：
* 1.本质：string是C++风格的字符串，而string本质上是一个类
* 2.string和char*的区别：
* （1）char*是一个指针
* （2）string是一个类，类内部封装了char*，管理这个字符串，是一个char*类型的容器
* 3.特点：
* （1）string类内部封装了很多成员方法，eg：find、copy、delete、replace、insert等
* （2）string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责
* 4.string构造函数
* 构造函数原型：
*	string(); //创建一个空的字符串，string str;
*	string(const char* s); //使用字符富川s初始化
*	string(const string& str); //使用一个string对象初始化另一个string对象
*	string(int n, char c); //使用n个字符c初始化
* 5.string赋值操作
* 赋值的函数原型：
*	string& operator=(const char *s); //char*类型字符串赋值给当前的字符串
*	string& operator=(const string &s); //吧字符串s赋给当前的字符串
*	string& operator=(char c); //字符赋值给当前的字符串
*	string& assign(const char *s); //把字符串s赋给当前的字符串
*	string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
*	string& assign(const string &s); //把字符串s赋给当前字符串
*	string& assign(int n, char c); //用n个字符赋给当前字符串
* 6.string字符串拼接
* 函数原型：
*	string& operator+=(const char* str); //重载+=操作符
*	string& operator+=(const char c); //重载+=操作符
*	string& operator+=(const string& str); //重载+=操作符
*	string& append(const char *s); //把字符串s连接到当前字符串结尾
*	string& append(const char *s, int n); //把字符串s的前n个字符连接到当前字符串结尾
*	string& append(const string &s); //同operator+=(const string& str)
*	string& append(const string &s, int pos, int n); //字符串s中从pos开始的n个字符连接到字符串结构
* 
* 7.string查找和替换
*函数原型：
*	int find(const string& str, int pos = 0) const; //查找str第一次出现位置，从pos开始查找
*	int find(const char* s, int pos = 0) const; //查找s第一次出现位置，从pos开始查找
*	int find(const char* s, int pos, int n) const; //从pos位置查找s的前n个字符第一次出现位置
*	int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
*	int rfind(const string& str, int pos = npos) const; //查找str最后一次出现位置，从pos开始
*	int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置，从pos开始查找
*	int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次出现的位置
*	int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
*	string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
*	string& replace(int pos, int n, const char* s); //替换从pos开始的n个字符为字符串s
* 
* 8.string字符串比较
* 函数原型：
*	int compare(const string &s) const; //与字符串s比较
*/