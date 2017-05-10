#include <iostream>

using namespace std;

/*
    函数模板
    * class 和 类(class)没有关系
    * class 和 typename基本一样

*/

template <typename T>
bool isGreater(T e1, T e2)
{
    if (e1 > e2)
        return true;
    else
        return false;
}

template <typename T1, typename T2>
T1& print(T1 &s, T2 val)
{
    s << val;
    return s;
}

int main()
{
    int a = 88, b = 38;
    cout << boolalpha << a << " > " << b << endl
         << isGreater(a, b) << endl;

    print(cout, -999) << endl;

    return 0;
}
