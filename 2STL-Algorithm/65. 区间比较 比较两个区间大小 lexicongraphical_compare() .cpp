#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

/* 区间比较
 * lexicongraphical_compare() 检查第一个区间 是否< 第二个区间
 */

//打印
void printCollection(const list<int>& lst)
{
    //const只能赋值给const迭代器
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' '; cout << endl;
}

//lexicongraphical_compare()
void print_compare(const list<int>& lst1, const list<int>& lst2)
{
    if (lexicographical_compare(lst1.begin(),lst1.end(), lst2.begin(),lst2.end()))
        cout << "lst zuo < lst you" << endl;
    else
        cout << "lst zuo >= lst you"<< endl;
}

//for_each()排序
bool lessForCollection(const list<int>& lst1, const list<int> lst2)
{
    return lexicographical_compare(lst1.begin(),lst1.end(), lst2.begin(),lst2.end());
}

int main()
{
    list<int> lst1,lst2,lst3,lst4;

    for (int i = 1; i < 6; ++i)
        lst1.push_back(i);
    lst4 = lst3 = lst2 = lst1;

    lst1.push_back(7);
    lst3.push_back(2);
    lst3.push_back(0);
    lst4.push_back(2);
    printCollection(lst1);
    printCollection(lst2);
    printCollection(lst3);
    printCollection(lst4);

    //lexicographical_compare()
    print_compare(lst4, lst4);
    print_compare(lst4, lst1);
    print_compare(lst1, lst3); //首比元素，次比长度


    //for_each()
    vector<list<int> > vec;
    vec.push_back(lst1);
    vec.push_back(lst2);
    vec.push_back(lst3);
    vec.push_back(lst4);
    vec.push_back(lst3);
    vec.push_back(lst1);
    vec.push_back(lst4);
    vec.push_back(lst2);

    cout << "\n未排序：" << endl;
    for_each(vec.begin(),vec.end(), printCollection);

    //使用lexicographical_compare()排序
    sort(vec.begin(),vec.end(), lessForCollection);

    cout << "排序：" << endl;
    for_each(vec.begin(),vec.end(), printCollection);


    return 0;
}
