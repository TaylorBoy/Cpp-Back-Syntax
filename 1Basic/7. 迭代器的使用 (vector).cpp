#include <iostream>

/*
 * 迭代器
 **/
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10,8);

    vector<int>::iterator it = v.begin();
    // begin()操作返回一个迭代器
    // 指向第一个数据元素

    //迭代器实际上是一个指针
    *it = 9;
    it++;
    *it = 10;

    for (vector<int>::size_type i = 0; i != v.size(); ++i){
        cout << v[i] << endl;
    }

    //迭代器修改数据
    vector<int>::iterator end = v.end();
    while (it != end){
        ++it;
        *it = 77;
    }

    //迭代器读取数据
    // end()返回迭代器，返回最后一个的下一个
    for (vector<int>::iterator i = v.begin(); i != v.end(); ++i){
        cout << "迭代器" << *i << endl;
    }

    //常迭代器，只能用于读取，不能修改
    for (vector<int>::const_iterator i = v.begin(); i != end; ++i){
        cout << *i << " ";
    }



    return 0;
}
