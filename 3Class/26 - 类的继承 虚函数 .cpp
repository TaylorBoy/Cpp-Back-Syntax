#include <iostream>
#include <string>

using namespace std;

/*
 *  ��ļ̳� yu �麯��(virtual)

    ���м̳�: class ���� : public ����
    �麯��: ����д�ļ̳к���
 */

class Item_base
{
public :
    int x;
    Item_base(const std::string &book="",
          double sales_price=0.0) :x(100000), isbn(book), price(sales_price) {}

    //(protectedֻ���ڸ����ڲ�ʹ��, ��̳�)
    virtual double get_prot(void)
    {
        cout << "Father get_prot" << endl;
        return price ;
    }

    // �麯��, �̳к�������¶���
    virtual double get_price(size_t n) const
    {
        return n * price;
    }


//private:
    string isbn;

protected:
    double price;  //�ܱ����Ŀ��Լ̳�, �����಻��ֱ�ӷ���
};


///////////////////////////////////////////////////////////
/*-------------------- �̳�Item_base --------------------*/
///////////////////////////////////////////////////////////

class Bulk_item : public Item_base
{
public :
    // ��ʼ������ͼ̳еĸ���
    Bulk_item(const std::string &book="",
        double sales_price = 0.0,
        size_t qty=0,
        double disc_rate = 0.0) :
            Item_base(book, sales_price),min_qty(qty),discount(disc_rate)
        {
        }

    // ����1
    void print(void)
    {
        cout << "x = " << x << endl;
        cout << "price = " << price << endl;
        //isbnΪ˽�е�, ����ֱ�ӷ���;
    }

    // ����2
    void print2(const Bulk_item &d, const Item_base &i)
    {
        cout << d.x << endl;
        cout << d.price << endl;
        cout << i.x << endl;
        //cout << i.price << endl; //price�ܱ������ܷ���
    }

    // ���¶���: ���Ǹ����
    double get_prot(void)
    {
        cout << "Sun: get_prot" << endl;
        return 3 * price ;
    }

    // �麯��: ��д(��Ҫ���麯��)
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
    // ����
    cout << item.isbn << ": " << item.get_price(10) << endl;
    // �̳�
    cout << item2.isbn << ": " << item2.get_price(10) << endl;
    // �ۿۼ�
    cout << item2.isbn << ": " << item2.get_price(16) << endl;

    return 0;
}








