#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
/*
 * 函数对象
    * 一般使用struct
 */

//class basInt
//{
//public :
//    int operator()(int val){
//    }
//};


// 函数对象
struct absInt{
    // 重载操作符: 函数调用操作符
    int operator()(int val){
        return (val < 0) ? -val : val;
    }
};

// 普通模板函数
template<typename elementType>
void FuncDisplayElement(const elementType &element)
{
    cout << element << " ";
}

// 模板: 函数对象
template<typename elementType>
struct DisplayElement
{
    // 与普通函数模板的区别:
    // 这里可以储存状态等, 更强大
    unsigned int count;

    DisplayElement()
    {
        count = 0;  // 初始化
    }

    void operator() (const elementType & element)
    {
        ++count;  // 计数
        cout << element << " ";
    }
};


int main()
{
    int b1 = -88;
    absInt absObj;
    int a1 = absObj(b1);

    cout << a1 << endl;

    vector<int> a;
    for (int n = 0; n < 10; ++n)
        a.push_back(n);
    list<char> b;
    for (char c = 'a'; c < 'k'; ++c)
        b.push_back(c);

    // STL算法
    for_each(a.begin(), a.end(), DisplayElement<int>()); //
    cout << endl;

    // 获取使用次数
    DisplayElement<char> mResult; // 匿名对象
    mResult = for_each(b.begin(), b.end(), mResult);
    cout << endl;

    cout << "DisplayElement<char> 使用次数: " << mResult.count << endl;


    return 0;
}








