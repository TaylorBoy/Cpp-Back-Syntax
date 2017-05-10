#include <iostream>
#include <memory>  // 智能指针, 只是基本的
using namespace std;

/*
    智能指针
    1. 常规指针: 容易产生内存泄漏(没有delete, 占用内存)
                 即使new和delete配对了, 但过程中可能出现异常没有机会delete
    2. 智能指针:
       * 自定义: 深度复制 / 写时复制 / 引用计数 / 引用链接 / 破坏性复制
       * 使用std::auto_ptr智能指针 (破坏性复制, 用于基本指针)
       * 使用Boost智能指针
       * 使用ATL框架中(msvc++)的智能指针: CComPtr, CComQIPtr等.
*/

class Test
{
    public :
        void print()
        {
            cout << "auto_ptr: class" << endl;
        }
};

int main()
{
    std::auto_ptr<int> pd(new int);
    *pd = 999;

    std::cout << *pd << endl;

    std::auto_ptr<Test> pt(new Test());
    pt->print();

    return 0;
}
