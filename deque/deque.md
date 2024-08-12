# deque 双端数组
1.  功能
    双端数组 可以对头端进行插入删除操作
2.  deque与vector区别
    vector对头部的插入删除效率低 数据量越大 效率越低
    deque相对而言 对头部的插入删除速度比vector快
    vector访问元素时的速度比deque快
3.  内部工作原理
    deque内部有个中控器 维护每段缓冲区中的内容 缓冲区中存放真实数据
    中控器维护的是每个缓冲区的地址 使得使用deque时像一片连续的内存空间
4.  特点
    deque容器的迭代器**支持随机访问**
5.  构造函数
    deque<T>d;//采用模板实现类
    deque(d.begin(),d.end());//将d[d.begin(), d.end()]区间中的元素拷贝给本身
    deque(n, elem);//构造函数将n个elem拷贝给本身
    deque(const deque &vec);//拷贝构造函数
6.  赋值操作
    deque& operator=(const vector &vec);//重载等号操作符
    deque.assign(d.begin(),d.end());//将v[begin(), v.end()]区间中的数据拷贝赋值给本身
    deque.assign(n, elem);//将n个elem拷贝赋值给本身
7.  大小操作
    deque.empty();//判断容器是否为 空
    deque.size();//返回容器中元素的 个数
    deque.resize(int num);//重新指定容器的长度为num  若容器变长 以默认值填充新位置  若容器变短 末尾超出容器长度被删除
    deque.resize(int num, elem);//重新指定容器的长度为num 若容器变长 以elem值填充新位置 若容器变短 末尾超出容器长度删除
8.  插入和删除
    deque.push_back(elem);//尾部添加元素elem
    deque.push_front(elem);//头部插入有序elem
    deque.pop_back();//删除最后一个元素
    deque.pop_front();//删除第一个元素
    deque.insert(const_iterator pos, ele);//迭代器指向位置pos 插入元素ele
    deque.insert(const_iterator pos, int count, elem);//迭代器指向位置pos 插入count个元素elem
    deque.insert(pos, beg, end);//在pos位置插入[beg, end]区间数据
    deque.erase(const_iterator pos);//删除迭代器指向元素 返回下一个数据位置
    deque.erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素 返回下一个数据位置
    deque.clear();//删除容器中所有元素
9.  数据存取
    deque.at(int idx);//返回索引idx所指的数据
    operator[];//返回索引idx所指的数据
    deque.front();//返回容器中第一个数据元素
    deque.back();//返回容器中最后一个数据元素
10. 排序
    sort(iterator beg, iterator end)//对beg和end区间内元素进行排序