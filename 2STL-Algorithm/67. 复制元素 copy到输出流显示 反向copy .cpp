#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator> //ostream_iterator

using namespace std;

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);

    copy(vec.begin(),vec.end(), back_inserter(lst)); //lst没有初始化，为空，必须初始化或者插入迭代器
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';   cout << endl;

    //copy到输出流显示
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //反向copy
    copy(vec.rbegin(),vec.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
