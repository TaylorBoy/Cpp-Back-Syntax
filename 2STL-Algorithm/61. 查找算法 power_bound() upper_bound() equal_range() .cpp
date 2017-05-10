#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

/* �����㷨__�����ڼ���㷨
 * power_bound() upper_bound()
 * equal_range()
   ����ʽ�����е�Ч�ĳ�Ա������Ч�ʸ�
 */

int main()
{
    list<int> lst;

    for (int i = 1; i < 10; ++i )
        lst.insert(lst.end(), i );
    for (int i = 1; i < 10; ++i )
        lst.insert(lst.end(), i );
    lst.sort(); //����

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    /// lower upper

    list<int>::iterator pos1, pos2;

    pos1 = lower_bound(lst.begin(),lst.end(), 5);
    pos2 = upper_bound(lst.begin(),lst.end(), 5);

    cout << "��һ��5��λ�ã�" << distance(lst.begin(),pos1)+1 << endl;
    cout << "��һ������5��λ�ã�" << distance(lst.begin(),pos2)+1 << endl;

    // ʹ�ã��������������
    lst.insert(lower_bound(lst.begin(),lst.end(),5),5); //����ǰ��
    lst.insert(upper_bound(lst.begin(),lst.end(),5),6); //�������

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    /// equal_bound()
    pair<list<int>::iterator, list<int>::iterator> range; //���һ��

    range = equal_range(lst.begin(),lst.end(), 5);

    cout << distance(lst.begin(), range.first)+1 << endl;
    cout << distance(lst.begin(), range.second)+1 <<endl;


    return 0;
}
