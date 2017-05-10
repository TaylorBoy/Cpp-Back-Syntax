#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/* heap 算法--特殊二叉树
 *
 */

int main()
{
    vector<int> vec;

    for (int i = 3; i < 8; ++i)
        vec.push_back(i);
    for (int i = 5; i < 10; ++i)
        vec.push_back(i);
    for (int i = 1; i < 5; ++i)
        vec.push_back(i);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //make_heap() 变成堆
    make_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //pop_heap(),未删除
    pop_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //成员函数，删除 出栈
    vec.pop_back();
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //成员函数，入栈
    vec.push_back(12);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //push_heap(),把12加入堆，变成新的堆
    push_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //sort_heap()，把heap变成普通排序
    sort_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
