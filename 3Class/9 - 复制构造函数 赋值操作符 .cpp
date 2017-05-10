#include <iostream>
#include <string>
using namespace std;

/*
 * ���ƹ��캯���͸�ֵ������: ���ǲ���,C++���Զ�����
        * ��ָ���ʱ,C++û����������,�����Ҫ�Լ���д
        * һ������һ��д��д
 *
 */

class TestClass
{
public :
    //���ƹ��캯��
    TestClass(const TestClass &t)
        :pString(new string( *(t.pstring)) )
    {}

    //C++�Զ�����������, ֻ����ָ��, û�и���ָ��ָ��Ķ���
    //TestClass(const TestClass &t)
    //    :pString( t.pString )
    //{}

    //��ֵ������
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

    //��ͨ���캯��
    SalesItem() :units_sold(0),revenue(0) {};
    SalesItem(const string &book):isbn(book),units_sold(0),revenue(0){};

    //���ƹ��캯��
    SalesItem(const SalesItem &orig)
        :isbn(orig.isbn),units_sold(orig.units_sold),revenue(orig.revenue)
    {
        cout << "**1 ���ƹ��캯����������! **" << endl;
    }


    //��ֵ������
    SalesItem& operator = (const SalesItem &rhs)
    {
        isbn = rhs.isbn;
        units_sold = rhs.units_sold;
        revenue = rhs.revenue;

        cout << "**2 ��ֵ��������������! **" << endl;
        return *this;
    }

private:
    string isbn;
    unsigned units_sold;
    double revenue;
};

/////////////////////


///////////////////////////////////////
//              ������
///////////////////////////////////////
int main()
{
    SalesItem s;
    SalesItem s2("7887-889-98");

    SalesItem s3(s);

    s2 = s3;


    return 0;
}
