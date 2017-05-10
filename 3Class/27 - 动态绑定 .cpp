#include <iostream>

using namespace std;

/*
    动态绑定(多态)
    * 从派生类到基类的转换
    * 引用或指针既可以指向基类对象, 也可以指向派生类对象
    * 只有通过引用或指针调用虚函数才会发生动态绑定
 */

class Father
{
public :
    void func_1(){
        cout << "Father: func_1" << endl;
    }

    virtual void Func_2(){
        cout << "Father: func_2" << endl;
    }
};

class Sun : public Father
{
public :
    void func_1(){
        cout << "Sun: func_1" << endl;
    }

    virtual void Func_2(){
        cout << "Sun: func_2" << endl;
    }

};



int main()
{
    Father *f = new Father;
    Father *s = new Sun;

    // 普通函数, 导致名称遮掩
    f->func_1();
    s->func_1();
    cout << endl;

    // 虚函数才使用的是动态绑定，其他的全部是静态绑定。
    f->Func_2();
    s->Func_2();

    return 0;
}










