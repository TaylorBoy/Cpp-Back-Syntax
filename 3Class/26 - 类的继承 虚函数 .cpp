#include <iostream>
#include <string>

using namespace std;

/*
 *  类的继承 yu 虚函数(virtual)

    公有继承: class 子类 : public 父类
    虚函数: 可重写的继承函数
 */

class Item_base
{
public :
    int x;
    Item_base(const std::string &book="",
          double sales_price=0.0) :x(100000), isbn(book), price(sales_price) {}

    //(protected只能在父类内部使用, 或继承)
    virtual double get_prot(void)
    {
        cout << "Father get_prot" << endl;
        return price ;
    }

    // 虚函数, 继承后可以重新定义
    virtual double get_price(size_t n) const
    {
        return n * price;
    }


//private:
    string isbn;

protected:
    double price;  //受保护的可以继承, 但父类不能直接访问
};


///////////////////////////////////////////////////////////
/*-------------------- 继承Item_base --------------------*/
///////////////////////////////////////////////////////////

class Bulk_item : public Item_base
{
public :
    // 初始化子类和继承的父类
    Bulk_item(const std::string &book="",
        double sales_price = 0.0,
        size_t qty=0,
        double disc_rate = 0.0) :
            Item_base(book, sales_price),min_qty(qty),discount(disc_rate)
        {
        }

    // 测试1
    void print(void)
    {
        cout << "x = " << x << endl;
        cout << "price = " << price << endl;
        //isbn为私有的, 不能直接访问;
    }

    // 测试2
    void print2(const Bulk_item &d, const Item_base &i)
    {
        cout << d.x << endl;
        cout << d.price << endl;
        cout << i.x << endl;
        //cout << i.price << endl; //price受保护不能访问
    }

    // 重新定义: 覆盖父类的
    double get_prot(void)
    {
        cout << "Sun: get_prot" << endl;
        return 3 * price ;
    }

    // 虚函数: 重写(需要是虚函数)
    double get_price(size_t n) const
    {
        if (n > min_qty)
            return n *(1-discount) * price;
        else
            return n * price;
    }


private:
    size_t min_qty;
    double discount;
};

/*--------------------------------------------*/

int main()
{
    Item_base item( "9999-9999-9", 9.9);
    cout << item.x << endl;

    Bulk_item item2("88-9695-885", 9.9, 10, 0.12);
    cout << item2.x << endl;
    item2.print();

    cout << endl << "get_prot: " << endl;
    item.get_prot();
    item2.get_prot();

    cout << endl;
    // 父类
    cout << item.isbn << ": " << item.get_price(10) << endl;
    // 继承
    cout << item2.isbn << ": " << item2.get_price(10) << endl;
    // 折扣价
    cout << item2.isbn << ": " << item2.get_price(16) << endl;

    return 0;
}








