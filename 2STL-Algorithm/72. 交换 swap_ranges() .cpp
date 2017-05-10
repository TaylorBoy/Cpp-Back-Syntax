#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
using namespace std;

/*
 * 算法交换--swap_ranges()
 */

int main()
{
    vector<int> vec;
    deque<int>  deq;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);
    for (int i = 11; i < 23; ++i)
        deq.push_back(i);

    cout << "vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\ndeq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /// swap_ranges()
    deque<int>::iterator pos; //没有交换的

    pos = swap_ranges(vec.begin(),vec.end(),deq.begin());
    cout << "swap for vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\nswap for deq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    if (deq.end() != pos){
        cout << "第一个没有交换的数：" << *pos << endl;
    }

    //首尾交换
    swap_ranges(deq.begin(),deq.begin()+3, deq.rbegin()); //交换三个
    cout << "sRwap for deq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));

    /// 算法内swap()，速度快
    vector<int> vec_tmp;

    for (int i = 2; i < 8; ++i)
        vec_tmp.push_back(i);

    vec.swap(vec_tmp);  //交换内部指针，速度快
    //vec = vec_tmp;    //通过复制：速度慢

    cout << "\n\nswap for vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\nswap for tmp: ";
    copy(vec_tmp.begin(),vec_tmp.end(), ostream_iterator<int>(cout, " "));

    return 0;
}
