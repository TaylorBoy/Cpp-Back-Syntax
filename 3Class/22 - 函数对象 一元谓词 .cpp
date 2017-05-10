#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * 函数对象: 一元

   * 谓词: 返回bool型
     一元谓词: 一元函数对象的返回值类型为bool
 */

template<typename numberType>
struct IsMultiple
{
    numberType m_Divisor;

    IsMultiple(const numberType &divisor)
    {
        m_Divisor = divisor;
    }

    // 重载函数调用操作符
    bool operator()(const numberType &element) const
    {
        return ((element % m_Divisor) == 0);
    }
};

int main()
{
    vector<int> vecIntegers;
    for (int i = 21; i < 100; ++i)
        vecIntegers.push_back(i);

    IsMultiple<int> a(4);

    vector<int>::iterator iElement;
    iElement = find_if(vecIntegers.begin(), vecIntegers.end(), a);
    // 匿名对象: find_if(vecIntegers.begin(), vecIntegers.end(), IsMultiple<int>(4));

    if (iElement != vecIntegers.end());
    {
        cout << "第一个4的整数倍数是: " << *iElement << endl;
    }

    return 0;
}









