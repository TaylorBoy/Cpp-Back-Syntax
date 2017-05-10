#include <iostream>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

/* ɾ���㷨--
    unique(b,e)
    unique(b,e,p)
    unique_copy(b1,e1,b2)
    unique_copy(b1,e1,b2,p)
 *
 */

//���������������1��ɾ����һ��
bool difference_one(int elem1, int elem2)
{
    return elem1 + 1 == elem2 || elem1 - 1 == elem2;
}

int main()
{
    int source[] = {1,1,5,5,2,3,5,6,7,7,7,8,2,5,1,4,4,2,5,4,5,4,3,2,1,1};

    int sourceNum = sizeof(source) / sizeof(source[0]);

    list<int> lst;
    copy(source,source+sourceNum,back_inserter(lst));

    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    lst.sort();  //��Ҫ����->Ԫ��Ҫ����һ��

    //unique(b,e)
    list<int>::iterator pos;
    pos = unique(lst.begin(),lst.end());

    for (list<int>::iterator it = lst.begin(); it != pos; ++it)
        cout << *it << " ";
    cout << endl;

    //unique(b,e,p)��uniqueʹ��ν��
    copy(source,source+sourceNum,lst.begin());
    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    pos = unique(lst.begin(),lst.end(), greater<int>()); //����ǰһ���Ⱥ�һ����ɾ����һ��
    for (list<int>::iterator it = lst.begin(); it != pos; ++it)
        cout << *it << " ";
    cout << endl;

    //////////////////////////////////////////////////////////////////////////////

    copy(source,source+sourceNum,lst.begin());
    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //unique_copy(b1,e1,b2)
    unique_copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //unique_copy(b1,e1,b2,p)
    unique_copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "), difference_one);
    cout << endl;

    return 0;
}
