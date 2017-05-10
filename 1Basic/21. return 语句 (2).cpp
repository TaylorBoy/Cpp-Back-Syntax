#include <iostream>
using namespace std;

/*return_语句*/

/// 不改变a的值
int add_1(int x)
{
    ++x;
    return x;  //把x复制一份，返回
}

/// 改变a的值, 返回也是引用
int& add_2(int &x)
{
    ++x;
    return x;  //返回的就是x自身
}

int main()
{
    int a =0, b = 0;
    a = 100;

    b = add_1(a);
    cout << "add_1: "
         << "a = " << a << ", "
         << "b = " << b << endl << endl;

    int &c = add_2(a);
    ++c;  //返回的是引用，c和a是一样的，改变c即改变了a
    cout << "add_2: "
         << "a = " << a << ", "
         << "c = " << c << endl << endl;

    /// 引用类型的返回值是一个左值，可以被修改
    add_2(a) = 88;
    cout << "引用类型的返回值是一个左值: " << a << endl;

    return 0;
}
