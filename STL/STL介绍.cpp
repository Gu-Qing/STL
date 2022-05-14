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
*	int compare(const char *s) const; //与字符串s比较
* 比较方式：字符串比较是按字符的ASCII码进行对比
* == 返回0、 > 返回1、 < 返回-1
* 
* 9.string字符存取
* string中单个字符存取方式有两种：
*	char& operator[] (int n); //通过[] 方式取字符
*	char& ar(int n); //通过at方法获取字符
* 
* 10.string插入和删除
* 函数原型：
*	string& insert(int pos, const char *s); //插入字符串
*	string& insert(int pos, const string& str); //插入字符串
*	string& insert(int pos, int n, char c); //在指定位置插入n个字符c
*	string& erase(int pos, int n = npos); //删除从pos开始的n个字符串
* 
* 11.string子串
* 函数原型：
*	string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串
* 
* ---------------------------------------------------------------------------------------------
* 
* vector：
* 与数组非常相似，称为单端数组
* 与普通数组的区别：数组是静态控件，vector可以动态扩展
* 动态扩展：
* 寻找更大的内存空间，将原数组拷贝到新空间，释放原空间
* 
* 1.vector的构造函数：
*	vector<T> v; //采用模板实现类实现，默认构造函数
*	vector<v.begin(), v.end()); //将v[begin(), end())区间中的元素拷贝给本身
*	vector<n, elem>; //构造函数将n个elem拷贝给本身
*	vector<const vector &vec); //拷贝构造函数
* 
* 2.vector的赋值
*	vector& operator=(const vector &vec); //赋值等号操作符
*	assign(beg, end); //将[beg, end]区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
* 
* 3.vector的容量和大小
*	empty(); //判断容器是否为空
*	capacity(); //容器的容量
*	size(); //返回容器中元素的个数
*	resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置；若变短，则末尾超出容器长度的元素被删除
*	resize(int num, elem); //同上
* 
* 4.vector的插入和删除
*	push_back(ele); //尾部插入一个元素ele
*	pop_back(); //删除最后一个元素
*	insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
*	insert(const_iterator pos, int count, ele); //迭代器指向位置pos插入count个元素ele
*	erase(const_iterator pos); //删除迭代器指向的元素
*	erase(const_iterator start, const_iterator end); //删除迭代器从start到end之间的元素
*	clear(); //删除容器中所有元素
* 
* 5.vector数据存取
*	at(int idx); //返回索引idx所指的数据
*	operator[idx]; //返回索引idx所指的数据
*	fornt(); //返回容器中第一个数据元素
*	back(); //返回容器中最后一个元素
* 
* 6.vector互换容器
*	swap(vec); //将vec与本身的元素互换
* 
* 7.vector预留空间（减少vector在动态扩展容量是的扩展次数）
*	reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问
* 
* ---------------------------------------------------------------------------------------------
* 
* deque容器：
* 双端数组，可以对头端进行插入删除操作
* deque与vector的区别：
*  vector对于头部的插入删除效率太低，数据量越大，效率越低
*  deque相对而言，对头部的插入删除速度会比vector快
*  vector访问元素是的速度会比deque快，这和两者内部实现有关
* deque内部工作原理：
*	deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
*	中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间
* deque容器的迭代器也是支持随机访问的
* 
* 1.deque的构造函数
*	deque<T> deqT; //默认构造形式
*	deque(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身
*	deque(n, elem); //构造函数将n个elem拷贝给本身
*	deque(const deque &deq); //拷贝构造函数
* 
* 2.deque赋值操作
*	deque& operator=(const deque &deq); //重载等号操作符
*	assign(beg, end); //将[beg, end]区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
* 
* 3.deque大小操作
*	deque.empty(); //判断容器是否为空
*	deque.size(): //返回容器中元素个数
*	deque.resize(num); //重新设定容器的长度num
*	deque.resize(num, elem); //重新设定容器的长度num，并给定默认的填充值elem
* 
* 4.deque插入和删除
* 两端插入操作：
*	push_back(elem); //在容器尾部添加一个数据
*	push_front(elem); //在容器头部添加一个数据
*	pop_back(); //删除容器最后一个数据
*	pop_front(); //删除容器第一个数据
* 指定位置操作：
*	insert(pos, elem); //在pos位置插入一个elem元素的拷贝，返回新数据的位置
*	insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值
*	insert(pos, beg, end); //在pos位置插入[beg, end)区间的数据，无返回值
*	clear(); //清空容器中所有数据
*	erase(beg, end); //删除[beg, end)区间的数据看，返回下一个数据的位置
*	erase(pos); //删除pos位置的数据，返回下一个数据的位置
* 
* 5.deque数据存取
*	at(int idx); //返回索引idx所指的数据
*	operator[]; //返回索引idx所指的数据
*	front(); //返回容器中第一个数据元素
*	back(); //返回容器中最后一个数据元素
* 
* 6.deque排序
* 对于支持随机访问的迭代器容器，都可以利用sort算法对其进行排序
*	sort(iterator beg, iterator end); //对beg到end区间内的元素进行排序
* 
* -------------------------------------------------------------------------------------
* 
* stack容器
* stack是一种先进后出（FILO）的数据结构，只有一个出口。
* 只有栈顶元素才可以被外界使用，不允许遍历
* 入栈——push、出栈——pop
* 构造函数：
*	stack<T> stk; //stack采用模板类实现、stack对象的默认构造形式
*	stack(const stack &stk); //拷贝构造函数
* 赋值操作：
*	stack& operator=(const stack &stk); //重载等号操作符
* 数据存取：
*	push(elem); //向栈顶添加元素
*	pop(); //从栈顶移除第一个元素
*	top(); //返回栈顶元素
*大小操作：
*	empty(); //判断栈堆是否为空
*	size(); //返回栈的大小
* 
* -----------------------------------------------------------------------------
* 
* queue容器
* 是一种先进先出（FIFO）的数据结构，有两个出口
* 队列容器允许从一端新增元素，从另一端移除元素
* 队列中只有队头和队尾可以呗外界使用，因此队列不允许有遍历行为
* push——入队、pop——出队
* 构造函数：
*	queue<T> que; //queue采用模板类实现，queue对象的默认构造形式
*	queue<const queue &que); //拷贝构造函数
* 赋值操作：
*	queue& operator=(const queue &que); //重载等号操作符
* 数据存取：
*	push(elem); //往队尾添加元素
*	pop(); //从对头移除第一个元素
*	back(); //返回最后一个元素
*	front(); //返回第一个元素
* 大小操作：
*	empty(); //判断堆栈是否为空
*	size(); //返回栈的大小
* 
* ------------------------------------------------------------------------
* 
* list容器：
* 将数据进行链式存储。
* 链表是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
* 链表的组成：一系列结点（一个结点是存储数据元素的数据域，另一个结点是存储下一个结点地址的指针域）
* 由于链表的存储方式并不是连续的内存空间，因此链表中的迭代器只支持前移和后移，属于双向迭代器
* 优点：
* 1.采用动态存储分配，不会造成内存浪费和移除
* 2.链表执行插入和删除操作十分方便，修改指针即可，不需要修改大量元素
* 缺点：
* 空间（指针域）和时间（遍历）额外耗费较大。
* 特性：插入擦做和删除操作都不会造成原有list迭代器的失效，这个特性在vector是不成立的
* 
* 1.构造函数：
*	list<T> list; //采用模板类实现，对象的默认构造形式
*	list(beg, end); //构造函数将[beg, end)区间中的元素拷贝给本身
*	list(n, elem); //构造函数将n个elem拷贝给本身
*	list(const list &lst); //拷贝构造函数
* 
* 2.赋值和交换：
*	assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身
*	assign(n, elem); //将n个elem拷贝赋值给本身
*	list &operator=(const list &lst); //重载等号操作符
*	swap(lst); //将lst与本身的元素交换
* 
* 3.大小操作
*	size(); //返回容器中元素的个数
*	empty(); //判断容器是否为空
*	resize(num); //重新指定容器的长度为num，若变长以默认值填充（默认为0），变短删除多余的值
*	resize(num, elem); //重新指定容器的长度为num，若变长以默认值elem填充，变短删除多余的值
* 
* 4.插入和删除
*	push_back(elem); //在容器尾部插入一个元素
*	pop_back(); //删除容器中的最后一个元素
*	push_front(); //在容器开头插入一个元素
*	pop_front(); //在容器开头删除一个元素
*	insert(pos, elem); //在pos位置插入elem元素的拷贝，返回新数据的位置
*	insert(pos, n, elem); //在pos位置插入n个elem数据，无返回值
*	insert(pos, beg, end); //在pos位置插入[beg, end)区间的数据，无返回值
*	clear(); //移除容器中的所有数据
*	erase(beg, end); //删除[beg, end)区间的数据，返回下一个数据的位置
*	erase(pos); //删除pos位置的数据，返回下一个数据的位置
*	remove(elem); //删除容器中所有与elem值匹配的元素
* 
* 5.数据存取
*	front(); //返回第一个元素
*	back(); //返回最后一个元素
* 
* 6.反转和排序
*	reverse(); //反转链表
*	sort(); //链表排序，默认升序，可以自己写函数然后把函数名放入作为参数改为自己想要的排序
* 
* -----------------------------------------------------------------------------------------------
* 
* set/multiset容器(#include <set>即可)：
* 所有的元素都会在插入时自动被排序
* set/multiset属于关联式容器，底层结构是二叉树实现（红黑树）
* 
* set和multiset的区别：
*	set不允许容器中有重复元素
*	multiset允许容器中有重复的元素
* 
* 1.set构造和赋值：
*	set<T> st; //默认构造函数
*	set(const set &st); //拷贝构造函数
*	set& operter=(const set &st); //重载等号操作符
* 
* 2.set大小和交换
* 因为一般resize重新指定大小会用一个默认值填充大小，但是set不允许有重复的值，所以也不存在resize
*	size(); //返回容器中元素的数目
*	empty(); //判断容器是否为空
*	swap(st); //交换两个集合容器
* 
* 3.set插入和删除
*	insert(elem); //在容器中插入元素
*	clear(); //清楚所有元素
*	erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器
*	erase(beg, end); //删除区间[beg, end)的所有元素，返回下一个元素的迭代器
*	erase(elem); //删除容器中值为elem的元素
* 
* 4.set查找和统计
*	find(key); //查找key是否存在，返回该键的元素的迭代器；若不存在，返回set.end()
*	count(key); //统计key的元素个数
* 
* 5.pair对组创建（成对出现的数据，利用对组可以返回两个数据）
* 不需要包含头文件
*	pair<type, type> p(value1, value2);
*	pair<type, type> p = make_pair(value1, value2);
* 
* 6.set容器排序。默认规则是从小到大
* 利用仿函数，改变排序规则
* 
* ----------------------------------------------------------------------------------------------
* 
* map/multimap容器：
* 1.map中所有元素都是pair
* 2.pair中第一个元素为key(键值)，起到索引作用，第二个元素为value(实值)
* 3.所有元素都会根绝元素的键值自动排序
* 4.本质：map/multimap属于关联式容器，底层结构是用二叉树实现的（红黑树）
* 5.优点：可以根据key值快速找到value值
* 6.区别：map不允许容器有重复key值元素；multimap允许容器中有重复元素
* 
* 1.map构造和赋值
*	map<T1, T2> mp; //map默认构造函数
*	map(const map &map); //拷贝构造函数
*	map& operator= (const map &map); //重载等号操作符
* 
* 2.map大小和交换
*	size(); //返回容器中元素的数目
*	empty(); //判断容器是否为空
*	swap(st); //交换两个集合的容器
* 
* 3.map插入和删除
*	insert(elem); //在容器中插入元素
*	clear(); //清除所有元素
*	erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器
*	erase(beg, end); //删除区间[beg, end)的所有元素，返回下一个元素的迭代器
*	erase(key); //删除容器中值为key的元素
* 
* 4.map查找和统计
*	find(key); //查找key是否存在，若存在返回该键的元素的迭代器，不存在返回set.end();
*	count(key); //统计key的元素个数
* 
* 5.map排序
*	默认规则：按照key值从小到大排序
*	利用仿函数改变排序规则
*/