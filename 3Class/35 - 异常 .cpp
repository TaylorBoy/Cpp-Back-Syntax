#include <iostream>

using namespace std;

/*
    异常:
        try catch throw

    异常类型:
        * 数字
        * 字符串
        * 对象
*/

// 传统方式
double div(double n1, double n2)
{
    if (0 == n2)
    {
        return 1;
    }
    return n1 / n2;
}

// 异常: 数字
double div2(double n1, double n2)
{
    if (0 == n2)
    {
        // return 1;
        throw 1;
    }
    return n1 / n2;
}

// 类
class ErrorType{};
void test(int *t)
{
    if (NULL == t)
        throw ErrorType(); // 抛出类异常
    else
        cout << "Nothding was done!" << endl;
}

int main()
{
    // 传统处理
    cout << "Classic: " << div(56, 8) << endl;
    cout << "Classic: " << div(56, 0) << endl;

    try
    {
        // 有可能出现异常的代码
        cout << "Exception: " << div2(8, 3) << endl;
        cout << "Exception: " << div2(8, 5) << endl;
        // 不同的异常类型需要多个catch
        test(NULL);
    }
    catch (int error) // int: 异常类型
    {
        // 处理异常
        cout << "异常代码: " << error << endl;
    }
    catch (ErrorType e)
    {
        // catch是有序的, 遇到异常执行catch之后就结束了,不会继续执行
        cout << "2nd Catch !" << endl;
    }
    catch (...)
    {
        // 任意, 太多个异常了
        // 尽量把重要的异常放前面单独catch
        cout << "这里抓的是漏网之鱼!" << endl;
    }

    return 0;
}








