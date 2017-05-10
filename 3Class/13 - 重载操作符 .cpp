#include <iostream>
#include <windows.h>
using namespace std;

/*
 * 重载操作符: 42个
 *     不能重载的操作符有 :: 和 .* 和 . 和 ?:
 */

class Person
{
    //整体重载: 若重载了>, 那么其他< <= >=等都最好重载
    //重载必须定义为成员函数: 赋值= 下标[] 函数调用() 成员访问->
    //重载操作符: 加法
public :
    void operator+ (const Person &p)
    {
        cout << "** 重载: 加法操作符 **" << endl;
    }

};



int main()
{
    Person p1, p2;
    p1 + p2;


    //system("pause");
    return 0;
}
