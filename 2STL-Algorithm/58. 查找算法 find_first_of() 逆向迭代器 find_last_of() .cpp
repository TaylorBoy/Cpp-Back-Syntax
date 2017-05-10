#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

/* 查找算法
 *
 * find_first_of()
 *
 */

int main()
{
    vector<int> vec;
    list<int> lst;  //需要查找数据

    for (int i = 1; i < 12; ++i)
        vec.push_back(i);

    lst.push_back(3);
    lst.push_back(6);
    lst.push_back(9);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';

    vector<int>::iterator pos;

    pos = find_first_of(vec.begin(),vec.end(), lst.begin(),lst.end());

    do{
        if (vec.end() != pos)
            cout << "\nFount at: " << distance(vec.begin(), pos)+1;

        ++pos;
        pos = find_first_of(pos,vec.end(), lst.begin(),lst.end());

    }while (vec.end() != pos);

    /// 逆向迭代器
    vector<int>::reverse_iterator rpos;
    rpos = find_first_of(vec.rbegin(),vec.rend(), lst.begin(),lst.end());
    cout << "\n\nFound at: " << distance(vec.begin(), rpos.base()) << endl; //base转为正向迭代器

    /// 找任意一个
    string numerics("0123456789");
    string name("vH6K5H");

    //前面，find_first_of()
    string::size_type p = name.find_first_of(numerics);
    if (string::npos != p)
        cout << "\n\n前面：Found at: " << p << endl;
    else
        cout << "\n\nNot Found!";
    //后面，find_last_of()
    p = name.find_last_of(numerics);
    if (string::npos != p)
        cout << "\n\n后面：Found at: " << p << endl;
    else
        cout << "\n\nNot Found!";

    return 0;
}
