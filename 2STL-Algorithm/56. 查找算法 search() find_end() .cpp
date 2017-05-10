#include <iostream>
#include <algorithm>
#include <deque>
#include <list>

using namespace std;

/*
 * �����㷨--
   search() ��ǰ��
   find_end() �Ӻ���
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

    /// search(): ��ͷ��ʼ��3,4,5
    cout << "\nʹ��search()���ң�" << endl;
    deque<int>::iterator pos;

    pos = search(deq.begin(),deq.end(), lst.begin(),lst.end());

    do{
        if (pos != deq.end())
            cout << "Found at: " << distance(deq.begin(),pos)+1 << endl;

        ++pos;
        pos = search(pos,deq.end(), lst.begin(),lst.end());

    }while (deq.end() != pos);

    /// find_end(): ��β����ʼ��3,4,5
    cout << "\nʹ��find_end()���ң�" << endl;

    pos = find_end(deq.begin(),deq.end(), lst.begin(),lst.end());

    do{
        if (deq.begin() != pos)
            cout << "Found at: " << distance(deq.begin(), pos)+ 1 << endl;

        --pos;
        pos = find_end(deq.begin(),pos, lst.begin(),lst.end());

    }while (deq.begin() != pos);


    return 0;
}
