#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
using namespace std;

/* 算法--根据第n个元素排序
 * nth_element() 比这个元素小的元素都排在这个元素之前，比这个
       元素大的元素都排在这个元素之后，但不能保证他们是有序的
 */

int main()
{
    deque<int> deq;
    for (int i = 3; i < 8; ++i)
        deq.push_back(i);
    for (int i = 2; i < 7; ++i)
        deq.push_back(i);
    for (int i = 1; i < 6; ++i)
        deq.push_back(i);

    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //nth_element()
    nth_element(deq.begin(),deq.begin()+3,deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    nth_element(deq.begin(),deq.end()-4, deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //partition()
    deque<int>::iterator pos;

    pos = partition(deq.begin(), deq.end(), bind2nd(less<int>(), 4));;
    //所有小于4的，多个3照样排序
    copy(deq.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
