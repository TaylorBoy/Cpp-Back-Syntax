#include <iostream>
#include <string>
using namespace std;

/*
    派生类的构造函数和析构函数

    构造函数:
    * 执行基类的构造函数
    * 执行成员对象的构造函数
    * 执行派生类的构造函数

    析构函数:
    * 对派生类新增普通成员进行清理
    * 调用成员对象析构函数
    * 调用基类析构函数
 */

enum TypeCat {ONE, TWO, THREE, FOUR };

class TestClass
{
public :
    TestClass(){
        cout << "构造函数: TestClass!" << endl;
    }
    ~TestClass(){
        cout << "析构函数: TestClass!" << endl;
    }
};

///////////////////////////////////////////////
// 父类
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

// 构造
Animal::Animal(int a, const string &n)
{
    cout << "构造函数: Father!" << endl;
    age = a;
    name = n;
}

// 析构
Animal::~Animal()
{
    cout << "析构函数: Father!" << endl;
}

///////////////////////////////////////////////
// 子类
class Cat : public Animal
{
public :
    Cat(TypeCat t, int a, const string &n);
    ~Cat();

private:
    TypeCat cat_no;
    TestClass t_class;
};

// 构造
Cat::Cat(TypeCat t, int a, const string &n): Animal(a, n)
{
    cout << "构造函数: Sun !" << endl;
    cat_no = t;
}

// 析构
Cat::~Cat()
{
    cout << "析构函数: Sun" << endl;
}


/*---------------------------------------------*/

int main()
{
    Cat c(TWO, 4, "Angel Cat");
    cout << "\n定义以后: " << c.GetName() << " is " << c.GetAge() << " years old!\n" << endl;

    return 0;
}











