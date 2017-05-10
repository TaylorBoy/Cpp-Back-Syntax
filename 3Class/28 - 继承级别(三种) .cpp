#include <iostream>

using namespace std;

/*
    1. 三种继承 (缺省 private)
       * 公有  : class B : public    A
       * 私有  : class B : private   A
       * 受保护: class B : protected A

    2. 接口继承和实现继承
    3. 修改继承访问(去除个别成员)
    4. 默认继承访问级别: private (struct默认public)

*/

///////////////////////////////////////////////
// 父类
class A
{
public :
    int a;
protected:
    int b;
private:
    int c;
};

///////////////////////////////////////////////
// 子类1
class B1 : public A
{
public :
    void test(){
        cout << a << endl; //a: public
        cout << b << endl; //b: protected, 继承权限不升
        // c为private不能访问
        //cout << c << endl; // 不能使用using A::c来提升private的访问权限
    }
};

// 子类2
class B2 : protected A
{
public :
    void test(){
        cout << a << endl; //a: protected
        cout << b << endl; //b: protected
        // c受保护
    }

    // 3. 修改继承访问(去除个别成员)
    using A::a; // 使protected到public以至于在main中能访问
};

// 子类3
class B3 : private A
{
public :
    void test(){
        cout << a << endl; //a: private
        cout << b << endl; //b: private
        // c受保护
        cout << c << endl;
    }

private :
    int a;
    int b;
    int c;
};

////////////////////////////////////////////////
// 孙类
class C : public B1
{
public :
    void test(){
        cout << a << endl;
        cout << b << endl;
        // c受保护
    }
};


int main()
{
    B2 b2;

    // 使用using A::a 转为public
    cout << b2.a << endl;

    return 0;
}











