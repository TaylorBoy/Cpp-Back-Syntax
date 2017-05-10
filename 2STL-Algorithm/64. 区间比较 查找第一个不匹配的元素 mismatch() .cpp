#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

/* 区间比较
 * mismatch() 查找第一个不匹配的元素
   【eg.若第二区间较长，无法比较】
 */

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 7; ++i)
        vec.push_back(i);
    for (int i = 1; i <17; i*=2)
        lst.push_back(i);
    lst.push_back(3);

    //显示
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';  cout << endl;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';  cout << endl;

    //mismatch() 找不相等的元素，返回一对迭代器
    pair<vector<int>::iterator, list<int>::iterator> values;

    values = mismatch(vec.begin(),vec.end(), lst.begin());
    if (vec.end() == values.first)
        cout << "Can‘t not find unequaly numbers!" << endl;
    else
        cout << "First mismatch: " << *values.first << " Second mismatch: " << *values.second << endl;

    return 0;
}
