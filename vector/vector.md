# vector 
1.  ����
    vector���ݽṹ �� ���� �ǳ����� ��Ϊ ��������
2.  vector����ͨ��������
    ���� ��̬�ռ�
    vector ��̬��չ
3.  ��̬��չ
    �Ҹ�����ڴ�ռ� ��ԭ���ݿ������¿ռ� �ͷ�ԭ�ռ�
    vector �����ĵ�������֧��������ʵĵ�����
4.  ���캯��
    vector<T>v;//����ģ��ʵ����
    vector(v.begin(),v.end());//��v[begin(), v.end()]�����е�Ԫ�ؿ���������
    vector(n, elem);//���캯����n��elem����������
    vector(const vector &vec);//�������캯��
5.  ��ֵ����
    vector& operator=(const vector &vec);//���صȺŲ�����
    vector.assign(v.begin(),v.end());//��v[begin(), v.end()]�����е����ݿ�����ֵ������
    vector.assign(n, elem);//��n��elem������ֵ������
6.  �����ʹ�С
    vector.empty();//�ж������Ƿ�Ϊ ��
    vector.capacity();//������ ����
    vector.size();//����������Ԫ�ص� ����
    vector.resize(int num);//����ָ�������ĳ���Ϊnum  �������䳤 ��Ĭ��ֵ�����λ��  ��������� ĩβ�����������ȱ�ɾ��
    vector.resize(int num, elem);//����ָ�������ĳ���Ϊnum �������䳤 ��elemֵ�����λ�� ��������� ĩβ������������ɾ��
7.  �����ɾ��
    vector.push_back(elem);//β������Ԫ��elem
    vector.pop_back();//ɾ�����һ��Ԫ��
    vector.insert(const_iterator pos, ele);//������ָ��λ��pos ����Ԫ��ele
    vector.insert(const_iterator pos, int count, ele);//������ָ��λ��pos ����count��Ԫ��ele
    vector.erase(const_iterator pos);//ɾ��������ָ��Ԫ��
    vector.erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ��
    vector.clear();//ɾ������������Ԫ��
8.  ���ݴ�ȡ
    vector.at(int idx);//��������idx��ָ������
    operator[];//��������idx��ָ������
    vector.front();//���������е�һ������Ԫ��
    vector.back();//�������������һ������Ԫ��
9.  ��������������    ʵ������������Ԫ�ؽ��л���
    vector.swap(vec);//��vec �� ���� ��Ԫ�ػ���
    sort(v.begin(), v.end());//Ĭ������
10. Ԥ���ռ�    ����vector�ڶ�̬��չ����ʱ����չ����
    vector.reserve(int len);//����Ԥ��len��Ԫ�س��� Ԥ��λ�ò���ʼ�� Ԫ�ز��ɷ���
    