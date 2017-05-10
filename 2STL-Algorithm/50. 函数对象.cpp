#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

/** 算法
 ** 三个头文件：
 ** <algorithm>  算法
 ** <numeric>    数值
 ** <functional> 函数适配器，，，
 */

//函数对象
class PrintInt{

public :
    void operator() (int elem) const  { //成员函数
        cout << elem << " ";
    }

};

//函数
void print(int elem){
    cout << elem << endl;
}

int main()
{
    //set 自动排序的二叉树
    //set<int> a;                   //省略定义, 默认从小到大：set<int, less<int> > a
    set<int, greater<int> > a;      //完整定义, greater从大到小
                                    //greater：预定义的函数对象

    a.insert(13);
    a.insert(21);
    a.insert(13);
    a.insert(1);
    a.insert(18);
    a.insert(81);

    for (set<int>::const_iterator it = a.begin(); it != a.end(); ++it){
        cout << *it << " " ;
    }cout << endl;

    /// 算法

    vector<int> vec;
    for (int i = 1; i < 9; ++i){
        vec.push_back(i*i);
    }

    //算法
    for_each(vec.begin(), vec.end(), print);    //函数

    for_each(vec.begin(), vec.end(), PrintInt() );  //class, 调用operator方法


    return 0;
}
