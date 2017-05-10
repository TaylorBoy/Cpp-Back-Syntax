#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

/* 复制元素
 *
 */

int main()
{
    list<int> lst;
    for (int i = 0; i < 10; ++i)
        lst.push_back(i);
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';  cout << endl;

    vector<int> vec(2*lst.size());
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';  cout << endl;

    //copy()
    copy(lst.begin(),lst.end(), vec.begin());
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';  cout << endl;

    //copy_backward()
    copy_backward(lst.begin(),lst.end(), vec.end());
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';  cout << endl;


    return 0;
}
