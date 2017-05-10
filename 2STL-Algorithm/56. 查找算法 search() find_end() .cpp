#include <iostream>
#include <algorithm>
#include <deque>
#include <list>

using namespace std;

/*
 * 查找算法--
   search() 从前面
   find_end() 从后面
 */

int main()
{
    deque<int> deq;
    list<int>  lst;

    //deque
    for (int i = 1; i < 8; ++i)
        deq.insert(deq.end(), i);
    for (int i = 1; i < 8; ++i)
        deq.insert(deq.end(), i);
    for (int i = 1; i < 8; ++i)
        deq.insert(deq.end(), i);

    //list
    for (int i = 3; i < 6; ++i)
        lst.insert(lst.end(), i);

    //display()
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        cout << *it << ' ';  cout << endl;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ',';  cout << endl;

    /// search(): 从头开始找3,4,5
    cout << "\n使用search()查找：" << endl;
    deque<int>::iterator pos;

    pos = search(deq.begin(),deq.end(), lst.begin(),lst.end());

    do{
        if (pos != deq.end())
            cout << "Found at: " << distance(deq.begin(),pos)+1 << endl;

        ++pos;
        pos = search(pos,deq.end(), lst.begin(),lst.end());

    }while (deq.end() != pos);

    /// find_end(): 从尾部开始找3,4,5
    cout << "\n使用find_end()查找：" << endl;

    pos = find_end(deq.begin(),deq.end(), lst.begin(),lst.end());

    do{
        if (deq.begin() != pos)
            cout << "Found at: " << distance(deq.begin(), pos)+ 1 << endl;

        --pos;
        pos = find_end(deq.begin(),pos, lst.begin(),lst.end());

    }while (deq.begin() != pos);


    return 0;
}
