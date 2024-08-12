# vector 
1.  功能
    vector数据结构 和 数组 非常相似 称为 单端数组
2.  vector与普通数组区别
    数组 静态空间
    vector 动态扩展
3.  动态扩展
    找更大的内存空间 将原数据拷贝到新空间 释放原空间
    vector 容器的迭代器是支持随机访问的迭代器
4.  构造函数
    vector<T>v;//采用模板实现类
    vector(v.begin(),v.end());//将v[begin(), v.end()]区间中的元素拷贝给本身
    vector(n, elem);//构造函数将n个elem拷贝给本身
    vector(const vector &vec);//拷贝构造函数
5.  赋值操作
    vector& operator=(const vector &vec);//重载等号操作符
    vector.assign(v.begin(),v.end());//将v[begin(), v.end()]区间中的数据拷贝赋值给本身
    vector.assign(n, elem);//将n个elem拷贝赋值给本身
6.  容器和大小
    vector.empty();//判断容器是否为 空
    vector.capacity();//容器的 容量
    vector.size();//返回容器中元素的 个数
    vector.resize(int num);//重新指定容器的长度为num  若容器变长 以默认值填充新位置  若容器变短 末尾超出容器长度被删除
    vector.resize(int num, elem);//重新指定容器的长度为num 若容器变长 以elem值填充新位置 若容器变短 末尾超出容器长度删除
7.  插入和删除
    vector.push_back(elem);//尾部插入元素elem
    vector.pop_back();//删除最后一个元素
    vector.insert(const_iterator pos, ele);//迭代器指向位置pos 插入元素ele
    vector.insert(const_iterator pos, int count, ele);//迭代器指向位置pos 插入count个元素ele
    vector.erase(const_iterator pos);//删除迭代器指向元素
    vector.erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
    vector.clear();//删除容器中所有元素
8.  数据存取
    vector.at(int idx);//返回索引idx所指的数据
    operator[];//返回索引idx所指的数据
    vector.front();//返回容器中第一个数据元素
    vector.back();//返回容器中最后一个数据元素
9.  互换容器和排序    实现两个容器内元素进行互换
    vector.swap(vec);//将vec 与 本身 的元素互换
    sort(v.begin(), v.end());//默认升序
10. 预留空间    减少vector在动态扩展容量时的扩展次数
    vector.reserve(int len);//容器预留len个元素长度 预留位置不初始化 元素不可访问
    