# deque ˫������
1.  ����
    ˫������ ���Զ�ͷ�˽��в���ɾ������
2.  deque��vector����
    vector��ͷ���Ĳ���ɾ��Ч�ʵ� ������Խ�� Ч��Խ��
    deque��Զ��� ��ͷ���Ĳ���ɾ���ٶȱ�vector��
    vector����Ԫ��ʱ���ٶȱ�deque��
3.  �ڲ�����ԭ��
    deque�ڲ��и��п��� ά��ÿ�λ������е����� �������д����ʵ����
    �п���ά������ÿ���������ĵ�ַ ʹ��ʹ��dequeʱ��һƬ�������ڴ�ռ�
4.  �ص�
    deque�����ĵ�����**֧���������**
5.  ���캯��
    deque<T>d;//����ģ��ʵ����
    deque(d.begin(),d.end());//��d[d.begin(), d.end()]�����е�Ԫ�ؿ���������
    deque(n, elem);//���캯����n��elem����������
    deque(const deque &vec);//�������캯��
6.  ��ֵ����
    deque& operator=(const vector &vec);//���صȺŲ�����
    deque.assign(d.begin(),d.end());//��v[begin(), v.end()]�����е����ݿ�����ֵ������
    deque.assign(n, elem);//��n��elem������ֵ������
7.  ��С����
    deque.empty();//�ж������Ƿ�Ϊ ��
    deque.size();//����������Ԫ�ص� ����
    deque.resize(int num);//����ָ�������ĳ���Ϊnum  �������䳤 ��Ĭ��ֵ�����λ��  ��������� ĩβ�����������ȱ�ɾ��
    deque.resize(int num, elem);//����ָ�������ĳ���Ϊnum �������䳤 ��elemֵ�����λ�� ��������� ĩβ������������ɾ��
8.  �����ɾ��
    deque.push_back(elem);//β�����Ԫ��elem
    deque.push_front(elem);//ͷ����������elem
    deque.pop_back();//ɾ�����һ��Ԫ��
    deque.pop_front();//ɾ����һ��Ԫ��
    deque.insert(const_iterator pos, ele);//������ָ��λ��pos ����Ԫ��ele
    deque.insert(const_iterator pos, int count, elem);//������ָ��λ��pos ����count��Ԫ��elem
    deque.insert(pos, beg, end);//��posλ�ò���[beg, end]��������
    deque.erase(const_iterator pos);//ɾ��������ָ��Ԫ�� ������һ������λ��
    deque.erase(const_iterator start, const_iterator end);//ɾ����������start��end֮���Ԫ�� ������һ������λ��
    deque.clear();//ɾ������������Ԫ��
9.  ���ݴ�ȡ
    deque.at(int idx);//��������idx��ָ������
    operator[];//��������idx��ָ������
    deque.front();//���������е�һ������Ԫ��
    deque.back();//�������������һ������Ԫ��
10. ����
    sort(iterator beg, iterator end)//��beg��end������Ԫ�ؽ�������