#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
#include <functional>  //greater
using namespace std;

/* 排序算法
 * sort()不适用于list容器
 */

int main()
{
    deque<int> deq;
    for (int i = 1; i < 10; ++i)
        deq.push_back(i);
    for (int i = 1; i < 10; ++i)
        deq.push_back(i);
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //sort(),默认从小到大
    sort(deq.begin(),deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //谓词
    sort(deq.begin(),deq.end(), greater<int>());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;



    return 0;
}
