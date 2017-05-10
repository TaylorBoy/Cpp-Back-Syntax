#include <iostream>
#include <string>
using namespace std;

/*
 * ���캯��
 *
 * c�ṹĬ��public, c++Ĭ��private
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
    // C++Ĭ��һ��ִ�г�ʼ��,����д����ʼ���б�
    // ����ŵ���ʼ���б���г�ʼ��:
        //1. const���ͳ�Ա
        //2. �������ͳ�Ա
        //3. û��Ĭ�Ϲ��캯���������͵ĳ�Ա

    ///2
    // SalesItem() :isbn(3, 'K'),sold_num(0),toal_money(0)  //����string�ڲ��Ĺ��캯��
    // { }

    ///3: Ĭ�ϵĿ����滻2,�в����ǿ����滻1
    explicit SalesItem(const string &book="KKK")
        :isbn(book),sold_num(0),toal_money(0)
    {  }

    public: const string &GetISBN(void) const {return this->isbn;}

    ///4: ����ʹ���Լ�ʱ,��Ĭ�ϴ���һ������,
    ///   ��Ҫ�ùؼ���explicit��ȷ���캯�������Զ���������
    const bool is_same_item(const SalesItem &sitem)const
    {
        return isbn == sitem.isbn;
        //sitemĬ�ϴ�������: s.is_same_item("66-9985-89")
        //���ǹ��캯���ĸ�����,
        //������Ӧ�ñ���, ��������ڹ��캯��ǰ������explicit
        /**  ����û�ҵ�����,��ʱ����,�������� **/
    }


private:
    //��ʼ���б��˳���ǳ�ʼ��˳��,�������������˳��
    string isbn;
    unsigned int sold_num;
    double toal_money;
};

//////////////////////////////////////////
//              ������
//////////////////////////////////////////
int main()
{
    SalesItem p("Mdzz", 88);
    SalesItem p2;  //��������: SalesItem p2();
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
        cout << "����Ὣ�ַ�������һ������,Ȼ����бȽ�" << endl;
    }
*/

    return 0;
}
