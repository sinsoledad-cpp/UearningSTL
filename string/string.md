# string C++�����ַ���
1.  ���ʣ�
    һ����
2.  string �� char* ����
    1.  string ��һ���࣬�ڲ���װ�� char*
    2.  char* ��һ��ָ��
3.  �ص�
    1.  �ڲ���װ����
    2.  string����char*�����ڴ棬���õ��ĸ���Խ���ȡֵԽ�磬�����ڲ�����
4.  ���캯��
    string();//����һ�����ַ���
    string(const char* s);//���ַ���c��ʼ��
    string(const string& str);//��string��ʼ��
    string(int n, char c);//��n�� �ַ�c ��ʼ��
5.  ��ֵ����    ��string�ַ�����ֵ
    string& operator=(const char* s);//char* �����ַ���
    string& operator=(const string &s);//�ַ���s
    string& operator=(char c);//�ַ�
    string& assign(const char *s);//�ַ���s
    string& assign(const char *s, int n);//�ַ���s ǰn���ַ�
    string& assign(const string &s);//�ַ���s
    string& assign(int n, char c);//n�� �ַ�c
6.  �ַ���ƴ��  ���ַ���ĩβƴ���ַ���  
    string& operator+=(const char* str);//����+=������
    string& operator+=(const char c);//����+=������
    string& operator+=(const string& str);//����+=������
    string& append(const char *s);//�ַ���s ���ӵ���ǰ�ַ�����β
    string& append(const char *s, int n);//�ַ���s ǰn���ַ� ���ӵ���ǰ�ַ�����β
    string& append(const string &s);//ͬoperator+=(const string& str)
    string& append(const string &s, int pos, int n)//�ַ���s ��pos��ʼ��n���ַ� ���ӵ��ַ�����β
7.  ���Һ��滻  ����ָ���ַ����Ƿ����  ��ָ��λ���滻�ַ��� ��λ��Ϊ0
    int find(const string& str, int pos = 0)const;//����str��һ�γ���λ�� ��pos��ʼ����
    int find(const char* s, int pos = 0)const;//����s��һ�γ���λ�� ��pos��ʼ����
    int find(const char* s, int pos�� int n)const;//��pos��ʼ ����sǰn���ַ���һ��λ�� 
    int find(const char c, int pos = 0)const;//�����ַ�c��һ�γ���λ��
    int rfind(const string& str, int pos = npos)const;//����str���һ�γ���λ�� ��pos��ʼ����
    int rfind(const char* s, int pos = npos)const;//����s���һ�γ���λ�� ��pos��ʼ����
    int rfind(const char* s, int pos, int n)const;//����sǰn���ַ����һ�γ���λ�� ��pos��ʼ����
    int rfind(const char c, int pos = 0)const;//�����ַ�c ���һ�γ���λ��
    string& replace(int pos, int n,const string& str);//�滻pos��ʼn���ַ�Ϊ�ַ���str
    string& replace(int pos, int n,const char* str);//�滻pos��ʼn���ַ�Ϊ�ַ���s
8.  �ַ����Ƚ� ���ַ�ASCII�Ա� =����0 >����1 <����-1
    int compare(const string &str)const;//���ַ���str�Ƚ�
    int compare(const string &s)const;//���ַ���s�Ƚ�
9.  �ַ���ȡ
    char& operator[](int n);//[]��ʽ��ȡ�ַ�
    char& at(int n);//at������ȡ�ַ�
10. �����ɾ��
    string& insert(int pos, const char* s);//�����ַ���
    string& insert(int pos, const string& str);//�����ַ���
    string& insert(int pos, int n, char c);//��ָ��λ�� ����n���ַ�c
    string& erase(int pos, int n=npos);//ɾ����pos��ʼ��n���ַ�
    