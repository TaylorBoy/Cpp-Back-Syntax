#include <iostream>
#include <string>
using namespace std;

/*
 * ���������
 *
 */

//ȫ��������
int age;

class Person
{
public :
    typedef string::size_type index;

    Person(string nm, int a):name(nm),age(a),cursor(0)
        {}

    const string &GetName(void) const;

    //����������
    int GetAge(int age)
    {
        cout << "��Ա����: " << age << endl;  //SetAge()��age
        cout << "��Ա����: " << this->age << endl;  //Person��
        cout << "ȫ�ֱ���: " << ::age << endl; // ȫ�ֱ���
    }

    //������, �������ڲ�����
    const index &GetCursor(void ) const;

private:
    string name;
    index cursor;
    int age;  //���Ա
};

const string &Person::GetName(void) const
{
    return name;
}

//������, ǰ����Ҫ������Person
const Person::index &Person::GetCursor(void) const
{
    return cursor;
}

int main()
{
    //���ж����������Ҫ�����������Person::,����ֱ����
    Person::index i = 10;
    cout << "Person::index i = " << i << endl;

    Person p("Doubi", 88);
    string name = p.GetName();
    cout << name << endl;
    name = "Shab";
    cout << name << endl;
    cout << "p.name: " << p.GetName() << endl;

    p.GetAge(888);

    return 0;
}
