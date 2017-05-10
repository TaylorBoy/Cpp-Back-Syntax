#include <iostream>

/*
 * ������
 **/
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10,8);

    vector<int>::iterator it = v.begin();
    // begin()��������һ��������
    // ָ���һ������Ԫ��

    //������ʵ������һ��ָ��
    *it = 9;
    it++;
    *it = 10;

    for (vector<int>::size_type i = 0; i != v.size(); ++i){
        cout << v[i] << endl;
    }

    //�������޸�����
    vector<int>::iterator end = v.end();
    while (it != end){
        ++it;
        *it = 77;
    }

    //��������ȡ����
    // end()���ص��������������һ������һ��
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i){
        cout << "������" << *i << endl;
    }

    //����������ֻ�����ڶ�ȡ�������޸�
    for (vector<int>::const_iterator i = v.begin(); i != end; ++i){
        cout << *i << " ";
    }



    return 0;
}
