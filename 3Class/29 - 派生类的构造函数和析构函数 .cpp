#include <iostream>
#include <string>
using namespace std;

/*
    ������Ĺ��캯������������

    ���캯��:
    * ִ�л���Ĺ��캯��
    * ִ�г�Ա����Ĺ��캯��
    * ִ��������Ĺ��캯��

    ��������:
    * ��������������ͨ��Ա��������
    * ���ó�Ա������������
    * ���û�����������
 */

enum TypeCat {ONE, TWO, THREE, FOUR };

class TestClass
{
public :
    TestClass(){
        cout << "���캯��: TestClass!" << endl;
    }
    ~TestClass(){
        cout << "��������: TestClass!" << endl;
    }
};

///////////////////////////////////////////////
// ����
class Animal
{
public :

    Animal(int a, const string &n);
    ~Animal();

    int GetAge(void) {return age;}
    string& GetName(void){return name;}

private:
    int age;
    string name;
};

// ����
Animal::Animal(int a, const string &n)
{
    cout << "���캯��: Father!" << endl;
    age = a;
    name = n;
}

// ����
Animal::~Animal()
{
    cout << "��������: Father!" << endl;
}

///////////////////////////////////////////////
// ����
class Cat : public Animal
{
public :
    Cat(TypeCat t, int a, const string &n);
    ~Cat();

private:
    TypeCat cat_no;
    TestClass t_class;
};

// ����
Cat::Cat(TypeCat t, int a, const string &n): Animal(a, n)
{
    cout << "���캯��: Sun !" << endl;
    cat_no = t;
}

// ����
Cat::~Cat()
{
    cout << "��������: Sun" << endl;
}


/*---------------------------------------------*/

int main()
{
    Cat c(TWO, 4, "Angel Cat");
    cout << "\n�����Ժ�: " << c.GetName() << " is " << c.GetAge() << " years old!\n" << endl;

    return 0;
}











