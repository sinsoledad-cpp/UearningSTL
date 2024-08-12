# set/multiset
1.  功能
    所有元素会在插入时自动被排序
2.  本质
    set/multiset 属于关联式容器 底层结构是用 二叉树 实现
3.  set/multiset区别
    set插入数据同时返回插入结果 表示插入是否成功
    set不允许容器中有重复的元素
    multiset不会监测数据    
    multiset允许容器中有重复的元素
4.  构造
    set<T>st;//默认构造函数
    set(const set &st);//拷贝构造函数
5.  赋值
    set& operator=(const set &st);//重载等号操作符
6.  大小和交换
    set.size();//返回容器中元素数目
    set.empty();//判断容器是否为空
    set.swap(st);//交换两个集合容器
7.  插入和删除
    set.insert(elem);//在容器中插入元素
    set.clear()://清除所有元素
    set.erase(pos);//删除pos迭代器所指元素 返回下一个元素迭代器
    set.erase(beg,end);//删除区间[beg, end]所有元素 返回下一个元素迭代器
    set.erase(elem);//删除容器中值为elem元素
8.  查找和统计
    set.find(key);//查找key是否存在 若存在 返回该元素的迭代器 若不存在 返回set.end();
    set.count(key);//统计key元素个数

begin() 　　 ,返回set容器第一个元素的迭代器

end() 　　　　 ,返回一个指向当前set末尾元素的下一位置的迭代器.

clear() 　　 ,删除set容器中的所有的元素

empty() 　　　,判断set容器是否为空

max_size() 　 ,返回set容器可能包含的元素最大个数

size() 　　　　 ,返回当前set容器中的元素个数

rbegin()　　　　 ,返回的值是end()前一个

rend()　　　　 ,返回的值是begin()前一个