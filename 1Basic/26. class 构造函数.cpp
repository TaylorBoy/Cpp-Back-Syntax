#include <iostream>

using namespace std;

/*类的构造函数*/

class Person{

public:
    /// 构造函数：共有，与类同名，没有返回值
    Person(int money){
        age = 0;
        this->money = money;
        tall = 170;
    }

    /// 更好的写法：构造函数的初始化列表(初始化对象少的时候)
//    Person(): age(0),money(0),tall(170){
//        //可以空着
//    }

//private:
    int age;  //使用默认的构造函数(无参构造函数),初始化随机；若为全局变量则初始化为0或者NULL
    int money;
    int tall;

};

int main()
{
    Person p(999);
    cout << "age: " << p.age << endl;
    cout << "money: " << p.money << endl;
    cout << "tall: " << p.tall << endl;

    return 0;
}
