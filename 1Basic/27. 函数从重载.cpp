#include <iostream>

using namespace std;

/*函数的重载*/
//1. 函数名和返回值类型相同
//2. 参数类型或个数不同

void show(int x)
{
    cout << x << endl;
}

void show(double x)
{
    cout << x << endl;
}



int main()
{
    show(88);
    show(99.13114);

    return 0;
}
