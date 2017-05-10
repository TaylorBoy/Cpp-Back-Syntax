#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

/* 查找算法__已序期间的算法
 * power_bound() upper_bound()
 * equal_range()
   关联式容器有等效的成员函数，效率高
 */

int main()
{
    list<int> lst;

    for (int i = 1; i < 10; ++i )
        lst.insert(lst.end(), i );
    for (int i = 1; i < 10; ++i )
        lst.insert(lst.end(), i );
    lst.sort(); //排序

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    /// lower upper

    list<int>::iterator pos1, pos2;

    pos1 = lower_bound(lst.begin(),lst.end(), 5);
    pos2 = upper_bound(lst.begin(),lst.end(), 5);

    cout << "第一个5的位置：" << distance(lst.begin(),pos1)+1 << endl;
    cout << "第一个大于5的位置：" << distance(lst.begin(),pos2)+1 << endl;

    // 使用：插入避免重排序
    lst.insert(lower_bound(lst.begin(),lst.end(),5),5); //插入前面
    lst.insert(upper_bound(lst.begin(),lst.end(),5),6); //插入后面

    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    /// equal_bound()
    pair<list<int>::iterator, list<int>::iterator> range; //存放一对

    range = equal_range(lst.begin(),lst.end(), 5);

    cout << distance(lst.begin(), range.first)+1 << endl;
    cout << distance(lst.begin(), range.second)+1 <<endl;


    return 0;
}
