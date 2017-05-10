#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/* 排序算法
 * partial_sort_copy()
 */

int main()
{
    deque<int> deq;
    vector<int> vec6(6);
    vector<int> vec30(30);

    for (int i = 3; i < 8; ++i)
        deq.push_back(i);
    for (int i = 2; i < 7; ++i)
        deq.push_back(i);
    for (int i = 1; i < 6; ++i)
        deq.push_back(i);
    copy(deq.begin(),deq.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    //partial_sort_copy()
    partial_sort_copy(deq.begin(),deq.end(), vec6.begin(),vec6.end());
    copy(vec6.begin(),vec6.end(),ostream_iterator<int>(cout, " ")); //空间限制
    cout << endl;

    //容量冗余
    vector<int>::iterator pos; //逻辑终点

    pos = partial_sort_copy(deq.begin(),deq.end(), vec30.begin(),vec30.end(), greater<int>());

    copy(vec30.begin(), vec30.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
    copy(vec30.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;



    return 0;
}
