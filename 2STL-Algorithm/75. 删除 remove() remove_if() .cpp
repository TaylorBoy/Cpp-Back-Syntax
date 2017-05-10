#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>
using namespace std;

/* 删除--remove() remove_if()
 *
 * 注意：
    1. 并不是真正删除，而是把后面的元素向前移动，覆盖被删除元素
    2. 返回新的逻辑终点。（实际容器内的元素个数不变）
 */

int main()
{
    list<int> int_list;

    for (int i = 1; i < 7; ++i)
    {
        int_list.push_front(i);
        int_list.push_back(i);
    }
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /////////////////////////////////////////////////////////////////////////

    //remove()
    list<int>::iterator end;
    end = remove(int_list.begin(),int_list.end(), 4);  //返回后面没有被覆盖的第一个元素


    cout << "删除后，后面元素向前移动：" << endl;
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //使用逻辑终点 end
    for (list<int>::iterator it = int_list.begin(); it != end; ++it)
        cout << *it << ' ';

    //共删除的元素个数
    cout << "    删除个数：" << distance(end, int_list.end()) << endl;

    //真正删除
    int_list.erase(end, int_list.end());
    cout << "\n真正删除：\n";
    copy(int_list.begin(),int_list.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /////////////////////////////////////////////////////////////////////////

    vector<int> vec;
    for (int i = 2; i < 7; ++i)
        vec.push_back(i);
    for (int i = 4; i < 9; ++i)
        vec.push_back(i);
    for (int i = 1; i < 7; ++i)
        vec.push_back(i);

    cout << endl << "vec: " << endl;
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "真正删除：" << endl; ;

    //真正的删除，利用新的逻辑终点
    vec.erase(remove(vec.begin(),vec.end(), 6), vec.end());  //删除6
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "remove_if():" << endl;

    //真正删除，remove_if()
    vec.erase(remove_if(vec.begin(),vec.end(), bind2nd(less<int>(), 4)), vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    return 0;
}
