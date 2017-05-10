#include <iostream>
#include <algorithm>
#include <list>
#include <set>
#include <iterator>
using namespace std;

/* ɾ�����㷨-- remove_copy(b1,e1,b2,num)
                remove_copy_if(b1,e1,b2,ν��)
 *
 */

int main()
{
    list<int> lst;
    for (int i = 1; i < 7; ++i)
        lst.push_back(i);
    for (int i = 1; i <10; ++i)
        lst.push_back(i);
    cout << "list: ";
    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));

    //remove_copy_if()

    multiset<int> iset;
    cout << "\niset: ";
    remove_copy_if(lst.begin(),lst.end(), inserter(iset, iset.end()),bind2nd(less<int>(),4));
    copy(iset.begin(),iset.end(), ostream_iterator<int>(cout, " "));

    //remove_copy()
    cout << "\nremove_copy()���������";
    remove_copy(lst.begin(),lst.end(),ostream_iterator<int>(cout, " "), 3);
    cout << endl;

    //remove_copy_if()�������,����4�Ķ�remove
    remove_copy_if(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "), bind2nd(greater<int>(),4));

    return 0;
}
