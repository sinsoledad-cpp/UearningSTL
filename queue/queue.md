# queue
1.  功能
    queue是一种先进先出的数据结构 有两个出口
2.  特点
    允许从一段新增元素 另一端移除元素
    只有队头 队尾才可以被外界使用 不允许有遍历行为
    进数据 入队 出数据 出队
3.  构造函数
    queue<T>que;//queue采用模板类实现
    queue(const queue &que);//拷贝构造函数
4.  赋值操作
    queue& operator=(const queue &que);//重载等号操作符
5.  数据存取
    queue.push(elem);//向队尾添加元素
    queue.pop();//从队头移除第一个元素
    queue.back();//返回最后一个元素
    queue.front();//返回第一个元素
6.  大小操作
    queue.empty();//判断堆栈是否为空
    queue.size();//返回栈大小