# list  ����
1.  ����
    �����ݽ�����ʽ�洢
2.  �ص�
    ��һ������洢��Ԫ�Ϸ������Ĵ洢�ṹ
    ����Ԫ�ص��߼�˳����ͨ�������е�ָ������ʵ�ֵ�
    ��һϵ�н����� ���:һ���Ǵ洢����Ԫ�ص�������һ���ǽ���ַ��ָ����
    ��һ��˫��ѭ������
    ��������Ĵ洢��ʽ�������������ڴ�ռ� ���list�ĵ�����ֻ֧��ǰ�ƺͺ��� ����˫�������
    ���������ɾ���������������ԭ��list������ʧЧ (vector������)
3.  �ŵ�
    ���ö�̬�洢���� ��������ڴ��˷Ѻ����
    ִ�в����ɾ���������� �޸�ָ�뼴�� ����Ҫ�ƶ�����Ԫ��
4.  ȱ��
    �ռ�(ָ����)��ʱ��(����)����ķѽϴ�
5.  ���캯��
    list<T>lst;//����ģ��ʵ����
    list(beg, end);//��[beg, end]�����е�Ԫ�ؿ���������
    list(n, elem);//���캯����n��elem����������
    list(const list &lst);//�������캯��
6.  ��ֵ����
    list& operator=(const list &lst);//���صȺŲ�����
    list.assign(v.begin(),v.end());//��v[begin(), v.end()]�����е����ݿ�����ֵ������
    list.assign(n, elem);//��n��elem������ֵ������
7.  ����
    list.swap(lst);//��lst�뱾���Ԫ�ػ���
8.  �����ʹ�С
    list.empty();//�ж������Ƿ�Ϊ ��
    list.size();//����������Ԫ�ص� ����
    list.resize(int num);//����ָ�������ĳ���Ϊnum  �������䳤 ��Ĭ��ֵ�����λ��  ��������� ĩβ�����������ȱ�ɾ��
    list.resize(int num, elem);//����ָ�������ĳ���Ϊnum �������䳤 ��elemֵ�����λ�� ��������� ĩβ������������ɾ��
9.  �����ɾ��
    list.push_back(elem);//β�����Ԫ��elem
    list.push_front(elem);//ͷ����������elem
    list.pop_back();//ɾ�����һ��Ԫ��
    list.pop_front();//ɾ����һ��Ԫ��
    list.insert(const_iterator pos, ele);//������ָ��λ��pos ����Ԫ��ele
    list.insert(const_iterator pos, int count, elem);//������ָ��λ��pos ����count��Ԫ��elem
    list.insert(pos, beg, end);//��posλ�ò���[beg, end]��������
    list.erase(const_iterator pos);//ɾ��������ָ��Ԫ�� ������һ������λ��
    list.erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ�� ������һ������λ��
    list.clear();//ɾ������������Ԫ��
    list.remove(elem);//ɾ��������������elemֵƥ���Ԫ��
10. ���ݴ�ȡ
    list.front();//���ص�һ��Ԫ��
    list.back();//�������һ��Ԫ��
11. ��ת������
    list.reverse();//��ת����
    list.sort();//��������