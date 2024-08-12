# string C++风格的字符串
1.  本质：
    一个类
2.  string 与 char* 区别
    1.  string 是一个类，内部封装了 char*
    2.  char* 是一个指针
3.  特点
    1.  内部封装函数
    2.  string管理char*分配内存，不用担心复制越界和取值越界，由类内部负责
4.  构造函数
    string();//创建一个空字符串
    string(const char* s);//用字符串c初始化
    string(const string& str);//用string初始化
    string(int n, char c);//用n个 字符c 初始化
5.  赋值操作    给string字符串赋值
    string& operator=(const char* s);//char* 类型字符串
    string& operator=(const string &s);//字符串s
    string& operator=(char c);//字符
    string& assign(const char *s);//字符串s
    string& assign(const char *s, int n);//字符串s 前n个字符
    string& assign(const string &s);//字符串s
    string& assign(int n, char c);//n个 字符c
6.  字符串拼接  在字符串末尾拼接字符串  
    string& operator+=(const char* str);//重载+=操作符
    string& operator+=(const char c);//重载+=操作符
    string& operator+=(const string& str);//重载+=操作符
    string& append(const char *s);//字符串s 连接到当前字符串结尾
    string& append(const char *s, int n);//字符串s 前n个字符 连接到当前字符串结尾
    string& append(const string &s);//同operator+=(const string& str)
    string& append(const string &s, int pos, int n)//字符串s 从pos开始的n个字符 连接到字符串结尾
7.  查找和替换  查找指定字符串是否存在  在指定位置替换字符串 首位置为0
    int find(const string& str, int pos = 0)const;//查找str第一次出现位置 从pos开始查找
    int find(const char* s, int pos = 0)const;//查找s第一次出现位置 从pos开始查找
    int find(const char* s, int pos， int n)const;//从pos开始 查找s前n个字符第一次位置 
    int find(const char c, int pos = 0)const;//查找字符c第一次出现位置
    int rfind(const string& str, int pos = npos)const;//查找str最后一次出现位置 从pos开始查找
    int rfind(const char* s, int pos = npos)const;//查找s最后一次出现位置 从pos开始查找
    int rfind(const char* s, int pos, int n)const;//查找s前n个字符最后一次出现位置 从pos开始查找
    int rfind(const char c, int pos = 0)const;//查找字符c 最后一次出现位置
    string& replace(int pos, int n,const string& str);//替换pos开始n个字符为字符串str
    string& replace(int pos, int n,const char* str);//替换pos开始n个字符为字符串s
8.  字符串比较 按字符ASCII对比 =返回0 >返回1 <返回-1
    int compare(const string &str)const;//与字符串str比较
    int compare(const string &s)const;//与字符串s比较
9.  字符存取
    char& operator[](int n);//[]方式获取字符
    char& at(int n);//at方法获取字符
10. 插入和删除
    string& insert(int pos, const char* s);//插入字符串
    string& insert(int pos, const string& str);//插入字符串
    string& insert(int pos, int n, char c);//在指定位置 插入n个字符c
    string& erase(int pos, int n=npos);//删除从pos开始的n个字符
    