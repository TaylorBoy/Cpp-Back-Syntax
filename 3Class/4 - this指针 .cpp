#include <iostream>
#include <string>
using namespace std;

/*
 * this指针:
        * 返回 *this
        * 从const成员函数返回*this
        * 基于const重载:如果const返回*this需要修改
 *
        * 可变数据成员: mutable,屏蔽了const
 *
 */

class Person
{
public :
    Person(const string &name, const string &address)
    {
        this->name = name;
        this->address = address;
        this->age = 0;
    }

    string GetName() const {  return this->name; }

    string GetAddress() const  { return this->address; }

    Person &SetPerson(const string &name)  //引用
    {
        this->name = name;
        return *this;  //返回类的引用类型,可以有p.GET().Set()
    }

    //从const成员函数返回this,const需要返回时,返回值类型也要是const修饰的
    const Person &GetAge(void) const
    {
        ++age;   //在const中要改变一个变量,需要使用可变数据成员mutable
        PrintAge();
        return *this;
    }

    //基于const重载
    Person &GetAge(void)
    {
        ++age;  //这里不需要使用mutable
        PrintAge();
        return *this;
    }


private:
    string name;
    string address;
    mutable int age;  //可变数据成员

    void PrintAge(void) const
    {
        cout << age << " -- ";
    }

} ;


int main()
{
    Person p("DouBi", "Beijing");

    cout << p.GetAddress() << "的逗比" << p.GetName() << endl;

    cout << p.SetPerson("Sbi").GetName() << endl;

    cout << "**  this  **" << endl;
    //返回this的const对象
    cout << p.GetAge().GetAddress() << endl;

    //如果要对this返回的const对象进行修改,就要重载const函数
    cout << p.GetAge().SetPerson("Mdzz").GetName() << endl;


    return 0;
}


