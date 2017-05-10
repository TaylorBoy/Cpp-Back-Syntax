#include <iostream>
#include <string>
using namespace std;

/*
 * 重载:算术操作符
        + - * / += -= *= /=
 *      : 要么都重载, 要么都不重载.
        : 最好把操作符联系起来: 若==为友元,操作私有成员, 则!=不需要为友元,借助==就行
 */

class SaledItem
{
    public :
        friend ostream& operator<<(ostream& out, const SaledItem &s);
        friend istream& operator>>(istream& in, SaledItem &s);

    public :
        SaledItem() :isbn("NULL"),num(0),revenue(0.0) {}
        SaledItem(const string &book, unsigned c, double price)
            :isbn(book),num(c),revenue(c*price)
        {}

        //重载+=
        SaledItem& operator+=(const SaledItem &s);

    private:
        string isbn;
        unsigned num;
        double revenue;
};

/////////////////////////////////////////////////////////////////
//重载+=, 成员函数
SaledItem& SaledItem::operator+=(const SaledItem &s)
{
    //修改了当前对象
    this->num += s.num;
    this->revenue += s.revenue;

    return *this;
}

/////////////////////////////////////////////////////////////////
//重载+, 非成员函数
SaledItem operator+(const SaledItem &ls, const SaledItem &rs)
{
    //这会返回一个新的对象, 不能返回引用
    SaledItem ret(ls);
    ret += rs;

    return ret;
}

/////////////////////////////////////////////////////////////////
//重载输出操作符
ostream& operator<<(ostream& out, const SaledItem &s)
{
    out << s.isbn << "\t" << s.num << "\t" << s.revenue;
    return out;
}

/////////////////////////////////////////////////////////////////
//重载输入操作符
istream& operator>>(istream& in, SaledItem &s)
{
    double price;

    in >> s.isbn >> s.num >> price;

    if (in)
        s.revenue = s.num * price;
    else
        s = SaledItem();

    return in;
}



/////////////////////////////////////////////////////////////////


int main()
{
    SaledItem item1(string("98-98089-888"), 8, 10.00);
    SaledItem item2(string("9-9889-88845"), 7, 20.00);

    cout << "item1: " << item1 << endl;
    cout << "item2: " << item2 << endl;

    item1 += item2;
    cout << "item1: " << item1 << endl;

    SaledItem item3(string("5785-8898-44"), 5, 12.00);
    cout << "item3: " << item3 << endl;
    item3  = item2 + item1;
    cout << "item3: " << item3 << endl;



    return 0;
}
