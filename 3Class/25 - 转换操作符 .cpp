#include <iostream>
#include <string>
using namespace std;

/*
 *  转换操作符
        operator int() const;

    注意:
        1. 必须是成员函数
        2. 不能指定返回类型
        3. 形参列表必须为空
        4. 必须显式的返回一个指定类型的值
        5. 不应该该表被转换对象, 通常定义为const

 *
 */

class Dog
{
public :
    Dog(string n, int a, double w) : name(n), age(a), weight(w) {}

    operator int() const
    {
        return age;
    }

    operator double() const
    {
        return weight;
    }

private:
    int age;
    double weight;
    string name;
};


int main()
{
    int a, b;

    a = 10;
    b = a;

    Dog d("DogBill", 88, 50.5);
    b = d;
    double c = d;

    cout << "b: " << b << "  c = " << c << endl;

    return 0;
}
