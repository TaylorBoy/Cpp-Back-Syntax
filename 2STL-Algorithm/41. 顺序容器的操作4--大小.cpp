#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/*˳�������Ĳ���4*/

int main()
{
    list<int> list_int;
    list_int.push_back(10);
    list_int.push_back(20);
    list_int.push_back(30);

    cout << "���������ݸ�����" << list_int.size() << endl;

    cout << "������max size��" << list_int.max_size() << endl;

    //ע�⣺resize()����ʹ������ʧЧ(���ӻ��߼���ʱ��������ָ���λ�ÿ���ʧЧ)

    //������С,������10,Ĭ�����0
    list_int.resize(10);

    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it ){
        cout << *it << " ";
    }

    //������С��ʹ�ù̶�ֵ����
    list_int.resize(20, 6);
    cout << endl;
    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it ){
        cout << *it << " ";
    }

    //���
    list_int.resize(0);

    if (list_int.empty()){
        cout << "\n�����ǿյģ�" << endl;
    }



    return 0;
}
