#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

/* ɾ��--remove() remove_if()
 *
 * ע�⣺
    1. ����������ɾ�������ǰѺ����Ԫ����ǰ�ƶ������Ǳ�ɾ��Ԫ��
    2. �����µ��߼��յ㡣��ʵ�������ڵ�Ԫ�ظ������䣩
 */

int main()
{
    list<int> int_list;

    for (int i = 1; i < 7; ++i)
    {
        int_list.push_front(i);
        int_list.push_back(i);
    }
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /////////////////////////////////////////////////////////////////////////

    //remove()
    list<int>::iterator end;
    end = remove(int_list.begin(),int_list.end(), 4);  //���غ���û�б����ǵĵ�һ��Ԫ��


    cout << "ɾ���󣬺���Ԫ����ǰ�ƶ���" << endl;
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //ʹ���߼��յ� end
    for (list<int>::iterator it = int_list.begin(); it != end; ++it)
        cout << *it << ' ';

    //��ɾ����Ԫ�ظ���
    cout << "    ɾ��������" << distance(end, int_list.end()) << endl;

    //����ɾ��
    int_list.erase(end, int_list.end());
    cout << "\n����ɾ����\n";
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /////////////////////////////////////////////////////////////////////////

    vector<int> vec;
    for (int i = 2; i < 7; ++i)
        vec.push_back(i);
    for (int i = 4; i < 9; ++i)
        vec.push_back(i);
    for (int i = 1; i < 7; ++i)
        vec.push_back(i);

    cout << endl << "vec: " << endl;
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "����ɾ����" << endl; ;

    //������ɾ���������µ��߼��յ�
    vec.erase(remove(vec.begin(),vec.end(), 6), vec.end());  //ɾ��6
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "remove_if():" << endl;

    //����ɾ����remove_if()
    vec.erase(remove_if(vec.begin(),vec.end(), bind2nd(less<int>(), 4)), vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    return 0;
}
