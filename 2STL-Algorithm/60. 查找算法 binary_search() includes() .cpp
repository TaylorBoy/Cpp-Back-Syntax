#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/* 查找算法
 * binary_search() 要求排序
 * includes（） 元素不需要连续的
 */

int main()
{
    list<int> list_int;
    vector<int> vec_int;

    for (int i = 1; i < 10; ++i)
        list_int.insert(list_int.end(), i);
    vec_int.push_back(3);
    vec_int.push_back(6);
    vec_int.push_back(7);

    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    //binary_search()只能返回 找到、未找到
    if (binary_search(list_int.begin(),list_int.end(), 6)){
        cout << "Fount !" << endl;
    }else{
        cout << "Not Found !" << endl;
    }

    //includes() 找包含的所有元素
    if (includes(list_int.begin(),list_int.end(), vec_int.begin(),vec_int.end()))
        cout << "Fount !" << endl;
    else
        cout << "Not Found !" << endl;


    return 0;
}
