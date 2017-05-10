#include <iostream>
#include <string>
using namespace std;

/*
 * thisָ��:
        * ���� *this
        * ��const��Ա��������*this
        * ����const����:���const����*this��Ҫ�޸�
 *
        * �ɱ����ݳ�Ա: mutable,������const
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

    Person &SetPerson(const string &name)  //����
    {
        this->name = name;
        return *this;  //���������������,������p.GET().Set()
    }

    //��const��Ա��������this,const��Ҫ����ʱ,����ֵ����ҲҪ��const���ε�
    const Person &GetAge(void) const
    {
        ++age;   //��const��Ҫ�ı�һ������,��Ҫʹ�ÿɱ����ݳ�Աmutable
        PrintAge();
        return *this;
    }

    //����const����
    Person &GetAge(void)
    {
        ++age;  //���ﲻ��Ҫʹ��mutable
        PrintAge();
        return *this;
    }


private:
    string name;
    string address;
    mutable int age;  //�ɱ����ݳ�Ա

    void PrintAge(void) const
    {
        cout << age << " -- ";
    }

} ;


int main()
{
    Person p("DouBi", "Beijing");

    cout << p.GetAddress() << "�Ķ���" << p.GetName() << endl;

    cout << p.SetPerson("Sbi").GetName() << endl;

    cout << "**  this  **" << endl;
    //����this��const����
    cout << p.GetAge().GetAddress() << endl;

    //���Ҫ��this���ص�const��������޸�,��Ҫ����const����
    cout << p.GetAge().SetPerson("Mdzz").GetName() << endl;


    return 0;
}


