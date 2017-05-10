#include <iostream>
#include <string>
using namespace std;

/*
 * 重载: 输入输出操作符
 *       >>  <<
 */

class SalesItem
{
    public :
        //重载操作符
        friend ostream& operator<<(ostream& out, const SalesItem& s);
        friend istream& operator>>(istream& in, SalesItem& s);

    public :
        //构造函数
        SalesItem(const string &book, unsigned c, double r)
            :isbn(book), num(c), revenue(c*r) { }
        SalesItem():isbn("NULL"), num(0), revenue(0.0){}

    private:
        string isbn;
        unsigned num;
        double revenue;

};

//友元: 重载输出操作符
ostream& operator<<(ostream& out, const SalesItem& s)
{
    out << s.isbn << "\t" << s.num << "\t" << s.revenue;
    return out;
}

//友元: 重载输入操作符
istream& operator>>(istream& in, SalesItem& s)
{
    double price;
    in >> s.isbn >> s.num >> price;

    if (in)
        s.revenue = price * s.num;
    else
        s = SalesItem();  //输入错误,默认构造函数

    return in;
}


int main()
{
    SalesItem sitem(string("88-888-432"), 2, 25.00);
    cout << sitem << endl;

    SalesItem sitem2;
    cin >> sitem2;
    cout << sitem2 << endl;

    return 0;
}
