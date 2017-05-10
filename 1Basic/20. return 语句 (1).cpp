#include <iostream>
using namespace std;

/*return语句*/

/// 1.返回值
int add(int a, int b)
{
    return a+b;
}

/// 2.结束程序
void swap(int &a, int &b)
{
    cout << "\n\n两值交换：\n";

    if (a == b){
        cout << "两个变量值相等.\n";
        return;     //提前结束，节省时间
    }
    int temp = a;
    a = b;
    b = temp;
    return;         //可以省略
}


int main()
{
    int num1 = 77, num2 = 22;

    //返回值
    cout << "返回值：" << add(num1, num2) << endl;

    //不同变量交换
    swap(num1, num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //同一个变量交换
    swap(num1, num1);

    return 0;
}
