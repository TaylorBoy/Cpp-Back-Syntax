#include <iostream>
#include <string>
using namespace std;

/*
 * 类的作用域
 *
 */

//全局作用域
int age;

class Person
{
public :
    typedef string::size_type index;

    Person(string nm, int a):name(nm),age(a),cursor(0)
        {}

    const string &GetName(void) const;

    //变量作用域
    int GetAge(int age)
    {
        cout << "成员函数: " << age << endl;  //SetAge()的age
        cout << "成员变量: " << this->age << endl;  //Person的
        cout << "全局变量: " << ::age << endl; // 全局变量
    }

    //作用域, 返回类内部类型
    const index &GetCursor(void ) const;

private:
    string name;
    index cursor;
    int age;  //类成员
};

const string &Person::GetName(void) const
{
    return name;
}

//作用域, 前面需要作用域Person
const Person::index &Person::GetCursor(void) const
{
    return cursor;
}

int main()
{
    //类中定义的类型需要作用域操作符Person::,不能直接用
    Person::index i = 10;
    cout << "Person::index i = " << i << endl;

    Person p("Doubi", 88);
    string name = p.GetName();
    cout << name << endl;
    name = "Shab";
    cout << name << endl;
    cout << "p.name: " << p.GetName() << endl;

    p.GetAge(888);

    return 0;
}
