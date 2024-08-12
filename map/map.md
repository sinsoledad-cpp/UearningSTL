# map/multimap
1.  功能
    map中元素都是pair
    pair第一个元素是key(键值) 索引作用 第二个元素是value(实值)
    所有元素会根据元素键值自动排序
2.  本质
    map/multimap属于关联式容器
    底层结构 二叉树实现
    底层实现是红黑树
3.  优点
    根据key值快速找到value值
4.  map/multimap区别
    map不允许有重复的key值元素
    multimap允许有重复的key值元素
5.  构造
    map<T1, T2>mp;//map默认构造函数
    map(const map &mp);//拷贝构造函数
6.  赋值
    map& operator=(const map &mp);//重载等号操作符
7.  大小和交换
    map.size();//返回容器中元素数目
    map.empty();//判断容器是否为空
    map.swap(st);//交换两个集合容器
8.  插入和删除
    map.insert(elem);//在容器中插入元素
    map.clear();//清除所有元素
    map.erase(pos);//删除pos迭代器所指的元素 返回下一个元素的迭代器
    map.erase(beg,end);//删除[beg, end]的元素 返回下一个元素的迭代器
    map.erase(key);//删除容器中值为key的元素
9.  查找和统计
    map.find(key);//查找key是否存在 若存在 返回该元素的迭代器 若不存在 返回map.end();
    map.count(key);//统计key元素个数
10. 容器排序
    map容器默认排序为按照key值进行 从小到大排序 改变排序规则:利用仿函数

