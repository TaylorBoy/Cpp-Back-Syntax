#include <iostream>
#include <string>
using namespace std;

/*return返回应用*/

// 使用了const修饰，作为常引用，不改变原来的变量，又不会浪费内存
const string& shorter(const string &str1, const string &str2)
{
    return str1.size() < str2.size() ? str1 : str2;
}

/// 注意：不要返回局部对象（也不要返回局部的指针）
/// 编译可以通过，运行时会出错
const string& return_err(void)
{
    string ret = "Hello";
    return ret;  //返回ret，但它是局部对象，函数结束后，ret就不存在了，直接报错
}

int main()
{
    const string ret = shorter("Ni hao", "Hello");
    cout << "shorter is : " << ret << endl;

    return 0;
}
