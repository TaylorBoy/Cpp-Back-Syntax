#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/* 区间比较
 * equal() 判断两个区间是否相等
 */

//谓词            第一个区间  第二个区间
bool bothEvenOrOdd(int elem1, int elem2)
{
    //奇数与偶数是否对应
    return elem1%2 == elem2%2;
}

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 8; ++i)
        vec.push_back(i);
    for (int i = 3; i < 10; ++i)
        lst.push_back(i);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it )
        cout << *it << " ";
    cout << endl;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << " ";
    cout << endl;

    //equal
    if (equal(vec.begin(),vec.end(), lst.begin()))
        cout << "Equal !" << endl;
    else
        cout << "Not Equal !" << endl;

    //equal 谓词
    if (equal(vec.begin(),vec.end(), lst.begin(), bothEvenOrOdd))
        cout << "奇偶对应!" << endl;
    else
        cout << "奇偶不对应!" << endl;



    return 0;
}
