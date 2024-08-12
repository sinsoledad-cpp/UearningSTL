# stack
1.  功能
    stack是一种先进后出的数据结构 只有一个出口
2.  特点
    只有顶端元素可以被外界使用 不允许有遍历行为
3.  构造函数
     stack<T>stk;//stack采用模板类实现
     stack(const stack &stk);//拷贝构造函数
4.  赋值操作
    stack& operator=(const stack &stk);//重载等号操作符
5.  数据存取
    stack.push(elem);//向栈顶添加元素
    stack.pop();//从栈顶移除第一个元素
    stack.top();//返回栈顶元素
6.  大小操作
    stack.empty();//判断堆栈是否为空
    stack.size();//返回栈大小
    