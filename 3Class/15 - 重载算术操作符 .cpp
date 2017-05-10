#include <iostream>
#include <string>
using namespace std;

/*
 * ����:����������
        + - * / += -= *= /=
 *      : Ҫô������, Ҫô��������.
        : ��ðѲ�������ϵ����: ��==Ϊ��Ԫ,����˽�г�Ա, ��!=����ҪΪ��Ԫ,����==����
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

        //����+=
        SaledItem& operator+=(const SaledItem &s);

    private:
        string isbn;
        unsigned num;
        double revenue;
};

/////////////////////////////////////////////////////////////////
//����+=, ��Ա����
SaledItem& SaledItem::operator+=(const SaledItem &s)
{
    //�޸��˵�ǰ����
    this->num += s.num;
    this->revenue += s.revenue;

    return *this;
}

/////////////////////////////////////////////////////////////////
//����+, �ǳ�Ա����
SaledItem operator+(const SaledItem &ls, const SaledItem &rs)
{
    //��᷵��һ���µĶ���, ���ܷ�������
    SaledItem ret(ls);
    ret += rs;

    return ret;
}

/////////////////////////////////////////////////////////////////
//�������������
ostream& operator<<(ostream& out, const SaledItem &s)
{
    out << s.isbn << "\t" << s.num << "\t" << s.revenue;
    return out;
}

/////////////////////////////////////////////////////////////////
//�������������
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
