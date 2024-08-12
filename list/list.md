# list  链表
1.  功能
    将数据进行链式存储
2.  特点
    是一种物理存储单元上非连续的存储结构
    数据元素的逻辑顺序是通过链表中的指针链接实现的
    由一系列结点组成 结点:一个是存储数据元素的数据域一个是结点地址的指针域
    是一个双向循环链表
    由于链表的存储方式并不是连续的内存空间 因此list的迭代器只支持前移和后移 属于双向迭代器
    插入操作和删除操作都不会造成原有list迭代器失效 (vector不成立)
3.  优点
    采用动态存储分配 不会造成内存浪费和溢出
    执行插入和删除操作方便 修改指针即可 不需要移动大量元素
4.  缺点
    空间(指针域)和时间(遍历)额外耗费较大
5.  构造函数
    list<T>lst;//采用模板实现类
    list(beg, end);//将[beg, end]区间中的元素拷贝给本身
    list(n, elem);//构造函数将n个elem拷贝给本身
    list(const list &lst);//拷贝构造函数
6.  赋值操作
    list& operator=(const list &lst);//重载等号操作符
    list.assign(v.begin(),v.end());//将v[begin(), v.end()]区间中的数据拷贝赋值给本身
    list.assign(n, elem);//将n个elem拷贝赋值给本身
7.  交换
    list.swap(lst);//将lst与本身的元素互换
8.  容器和大小
    list.empty();//判断容器是否为 空
    list.size();//返回容器中元素的 个数
    list.resize(int num);//重新指定容器的长度为num  若容器变长 以默认值填充新位置  若容器变短 末尾超出容器长度被删除
    list.resize(int num, elem);//重新指定容器的长度为num 若容器变长 以elem值填充新位置 若容器变短 末尾超出容器长度删除
9.  插入和删除
    list.push_back(elem);//尾部添加元素elem
    list.push_front(elem);//头部插入有序elem
    list.pop_back();//删除最后一个元素
    list.pop_front();//删除第一个元素
    list.insert(const_iterator pos, ele);//迭代器指向位置pos 插入元素ele
    list.insert(const_iterator pos, int count, elem);//迭代器指向位置pos 插入count个元素elem
    list.insert(pos, beg, end);//在pos位置插入[beg, end]区间数据
    list.erase(const_iterator pos);//删除迭代器指向元素 返回下一个数据位置
    list.erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素 返回下一个数据位置
    list.clear();//删除容器中所有元素
    list.remove(elem);//删除容器中所有与elem值匹配的元素
10. 数据存取
    list.front();//返回第一个元素
    list.back();//返回最后一个元素
11. 反转和排序
    list.reverse();//反转链表
    list.sort();//链表排序