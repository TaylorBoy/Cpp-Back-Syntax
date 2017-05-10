#include <iostream>
#include <algorithm>
#include <deque>
#include <functional>

using namespace std;

/*
 * 查找算法--search_n()
 */

int main()
{
    deque<int> deq;

    for (int i = 0; i < 10; ++i ){
        if (5 == i){
            deq.push_back(i);
            deq.push_back(i);
            deq.push_back(i);
        }
        deq.push_back(i);
    }

    //打印
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it){
        cout << *it << ' ';
    }cout << endl;

    /// 查找

    // search_n(b, e, n, m)
    deque<int>::iterator pos;

    //查找连续的4个5
    pos = search_n(deq.begin(), deq.end(), 4, 5);

    if (pos != deq.end()){
        cout << "连续的4个5位置：" << distance(deq.begin(), pos) << endl;
    }else{
        cout << "Not Found !\n";
    }

    // search_n(b, e, n, m, e)

    //查找连续4个大于5的数
    pos = search_n(deq.begin(), deq.end(), 4, 5, greater<int>());
    //规范(不可用)：pos = search_n_if(deq.begin(),deq.end(),3,bind2nd(greater<int>(), 6));

    if (pos != deq.end()){
        cout << "4个连续大于5的数的位置：" << distance(deq.begin(), pos) << endl;
    }else{
        cout << "Not Found!\n";
    }

    return 0;
}
