#include <iostream>
#include <string>
using namespace std;

/*
 * 复制构造函数和赋值操作符: 我们不做,C++会自动操作
        * 有指针等时,C++没有做得完美,这就需要自己来写
        * 一般两个一起写或不写
 *
 */

class TestClass
{
public :
    //复制构造函数
    TestClass(const TestClass &t)
        :pString(new string( *(t.pstring)) )
    {}

    //C++自动创建的如下, 只复制指针, 没有复制指针指向的对象
    //TestClass(const TestClass &t)
    //    :pString( t.pString )
    //{}

    //赋值操作符
    TestClass& operator = (const TestClass &t)
    {
        pString = new string ;
        *pString = *(t.pString);
        return *this;
    }


private:
    string *pString;
};

class SalesItem
{
public :

    //普通构造函数
    SalesItem() :units_sold(0),revenue(0) {};
    SalesItem(const string &book):isbn(book),units_sold(0),revenue(0){};

    //复制构造函数
    SalesItem(const SalesItem &orig)
        :isbn(orig.isbn),units_sold(orig.units_sold),revenue(orig.revenue)
    {
        cout << "**1 复制构造函数被调用了! **" << endl;
    }


    //赋值操作符
    SalesItem& operator = (const SalesItem &rhs)
    {
        isbn = rhs.isbn;
        units_sold = rhs.units_sold;
        revenue = rhs.revenue;

        cout << "**2 赋值操作符被调用了! **" << endl;
        return *this;
    }

private:
    string isbn;
    unsigned units_sold;
    double revenue;
};

/////////////////////


///////////////////////////////////////
//              主函数
///////////////////////////////////////
int main()
{
    SalesItem s;
    SalesItem s2("7887-889-98");

    SalesItem s3(s);

    s2 = s3;


    return 0;
}
