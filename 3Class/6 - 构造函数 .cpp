#include <iostream>
#include <string>
using namespace std;

/*
 * 构造函数
 *
 * c结构默认public, c++默认private
 */


//////////////////////////////////////
class Person
{
public :
    Person(const string &nm, int a):name(nm),age(a)
    {  }
private:
    string name;
    int age;
};

//////////////////////////////////////
class SalesItem
{
public :

    ///1
    explicit SalesItem(const string &book, double m)
        :isbn(book),sold_num(0),toal_money(m)
    {  }
    // C++默认一定执行初始化,尽量写到初始化列表
    // 必须放到初始化列表进行初始化:
        //1. const类型成员
        //2. 引用类型成员
        //3. 没有默认构造函数的类类型的成员

    ///2
    // SalesItem() :isbn(3, 'K'),sold_num(0),toal_money(0)  //这是string内部的构造函数
    // { }

    ///3: 默认的可以替换2,有参数是可以替换1
    explicit SalesItem(const string &book="KKK")
        :isbn(book),sold_num(0),toal_money(0)
    {  }

    public: const string &GetISBN(void) const {return this->isbn;}

    ///4: 当类使用自己时,会默认创建一个对象,
    ///   需要用关键字explicit明确构造函数不能自动创建对象
    const bool is_same_item(const SalesItem &sitem)const
    {
        return isbn == sitem.isbn;
        //sitem默认创建对象: s.is_same_item("66-9985-89")
        //这是构造函数的副作用,
        //在这里应该报错, 所以最好在构造函数前都声明explicit
        /**  这里没找到理由,暂时记着,求大神救我 **/
    }


private:
    //初始化列表的顺序不是初始化顺序,而是下面的声明顺序
    string isbn;
    unsigned int sold_num;
    double toal_money;
};

//////////////////////////////////////////
//              主函数
//////////////////////////////////////////
int main()
{
    SalesItem p("Mdzz", 88);
    SalesItem p2;  //不能这样: SalesItem p2();
    SalesItem p3("dOUBI");

    cout << "p.isbn: " << p.GetISBN() << endl;
    cout << "p2.isbn: " << p2.GetISBN() << endl;
    cout << "p3.isbn: " << p3.GetISBN() << endl;p.is_same_item(p2);

    if ( !p3.is_same_item(p) )
    {
        cout << "My god !" << endl;
    }

/*   if (p3.is_same_item("99-895-598"))
    {
        cout << "这里会将字符串构造一个对象,然后进行比较" << endl;
    }
*/

    return 0;
}
