#include <iostream>

using namespace std;

/*
    静态成员与继承
    # 基类中的static成员, 在整个继承层次中只有一个实例
    # 在派生类中访问static成员的方法:
      1. 基类名::成员名
      2. 子类名::成员名
      3. 对象.成员名
      4. 指针->成员名
      5. 成员名

*/

class Base{

public :
    static int f_count(void){
        return 100;
    }

protected:
    static const int f_num = 88;
};

class Derived : public Base{

public :
    void func(const Derived &d, Derived *dp){

        cout << Base::f_num << endl;
        cout << Derived::f_num << endl;
        cout << d.f_num << endl;
        cout << dp->f_num << endl;
        cout << f_num << endl;

        cout << endl;

        cout << Base::f_count() << endl;
        cout << Derived::f_count() << endl;
        cout << d.f_count() << endl;
        cout << dp->f_count() << endl;
        cout << f_count() << endl;
    }
};

int main()
{
    cout << "Base func: " << Base::f_count() << endl;

    Derived d;
    d.func(d, &d);


    return 0;
}




