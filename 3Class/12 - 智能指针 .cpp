#include <iostream>
#include <string>
using namespace std;

//浅复制
#include "value_ptr.h"
//深复制
#include "deep_ptr.h"
//智能指针
#include "smart_ptr.h"

/*
 * 管理指针成员
    1. 智能指针(一个常用类): 最大的优点, 避免野指针
       [Google建议:尽量避免使用,使用时尽量局部化]
       [Google特有风情:如果确实需要使用智能指针的话, scoped_ptr完全可以胜任。在非常特殊的情况下，例如对STL容器中对象，
        你应该只使用std::tr1::shared_ptr，任何情况下都不要使用auto_ptr]
    2. 值型类(深复制): 多个复制, 占用内存
    3. 常规指针(浅复制)
 *
 */


//////////////////////////////////////////////////
//浅复制
void TestValuePtr(void)
{
    int i = 77;

    ValuePtr vp1(&i, 8);
    ValuePtr vp2 = vp1;
    cout << "vp1: " << vp1.GetPtrVal() << " vp2: "
         << vp2.GetPtrVal() << endl;

    cout << "修改vp1之后: " << endl;
    vp1.SetPtrVal(777);
    cout << "vp1: " << vp1.GetPtrVal() << " vp2: "
         << vp2.GetPtrVal() << endl;

    //野指针
    cout << "野指针: " << endl;

    int *ip = new int(99);
    ValuePtr ptr(ip, 199);
    cout << ptr.GetPtrVal() << endl;
    delete ip;
    cout << ptr.GetPtrVal() << endl;


}

//////////////////////////////////////////////////
//深复制
void TestDeepPtr(void)
{
    int p = 666;
    DeepPtr dp1(p, 555);
    DeepPtr dp2(dp1);

    cout << "dp1: " << dp1.GetPtrVal() << " dp2: "
         << dp2.GetPtrVal() << endl;

    cout << "修改dp2之后: " << endl;
    dp2.SetPtrVal(7878);
    cout << "dp1: " << dp1.GetPtrVal() << " dp2: "
         << dp2.GetPtrVal() << endl;

}

//////////////////////////////////////////////////
//智能指针
void TestSmartPtr(void)
{
    int p = 123;

    SmartPtr ptr1(&p, 4);
    SmartPtr ptr2(ptr1);

    cout << "ptr1: " << ptr1.GetPtrVal() << ", " << ptr1.GetInt() << endl;
    cout << "ptr2: " << ptr2.GetPtrVal() << ", " << ptr2.GetInt() << endl;

    cout << "修改ptr2的int和ptr: " << endl;

    ptr2.SetPtrVal(465);
    ptr2.SetInt(99999);
    cout << "ptr1: " << ptr1.GetPtrVal() << ", " << ptr1.GetInt() << endl;
    cout << "ptr2: " << ptr2.GetPtrVal() << ", " << ptr2.GetInt() << endl;



}

//////////////////////////////////////////////////


int main()
{
    cout << "值型类, 浅复制: " << endl;
    TestValuePtr();

    cout << endl;

    cout << "值型类, 深复制: " << endl;
    TestDeepPtr();

    cout << endl;

    cout << "智能指针: " << endl;
    TestSmartPtr();


    return 0;
}



/*------------------------------------------------*/

//浅复制
#include "value_ptr.h"


//常规指针类, 浅复制
class ValuePtr
{
   public :
       ValuePtr(int *p, int i):ptr(p), val(i){}

       int *GetPtr(void) const { return ptr; }
       int GetInt(void) const { return val; }

       void SetPtr(int *p) { ptr = p; }
       void SetInt(int i ) { val = i; }

       int GetPtrVal(void) const { return *ptr; }
       void SetPtrVal(int v) { *ptr = v; }

   private:
       int *ptr;
       int val;

};


//深复制
#include "deep_ptr.h"


//值型类, 深复制
class DeepPtr
{
   public :
       DeepPtr(const int &p, int i):ptr(new int(p)), val(i){}

       DeepPtr(const DeepPtr &d) :ptr(new int(*d.ptr)), val(d.val) {}

       DeepPtr& operator = (DeepPtr &d);

       ~DeepPtr() { delete ptr; }  //对应构造函数的new

       int *GetPtr(void) const { return ptr; }
       int GetInt(void) const { return val; }

       void SetPtr(int *p) { ptr = p; }
       void SetInt(int i ) { val = i; }

       int GetPtrVal(void) const { return *ptr; }
       void SetPtrVal(int v) { *ptr = v; }

   private:
       int *ptr;
       int val;

};

DeepPtr& DeepPtr::operator = (DeepPtr &d)
{
    *ptr = *d.ptr;
    val = d.val;
    return *this;
}


//智能指针
#include "smart_ptr.h"


//class SmartPtr;

//智能指针类
class Smart
{
    //其他类需要使用到smart, friend
    friend class SmartPtr;

private:
    int *ip;
    size_t use;  //使用的对象个数

    Smart(int *p) :ip(p), use(1) {}
    ~Smart() { delete ip; }
};

class SmartPtr
{
   public :
       //new一个smart指针
       SmartPtr(int *p, int i) :ptr(new Smart(p)), val(i){}

       //复制构造函数
       SmartPtr(const SmartPtr &s): ptr(s.ptr), val(s.val)
       {
           ++(ptr->use);  //计数+1
       }

       //析构
       ~SmartPtr()
       {
           if ( 0 == (--ptr->use) )
           {
               delete ptr;  //只有没被使用的时候,才释放
           }
       }

       //赋值操作符
       SmartPtr& operator = (const SmartPtr &s);

       //ptr指向smart, smart的ip指向p对象
       int *GetPtr(void) const { return ptr->ip; }
       int GetInt(void) const { return val; }

       void SetPtr(int *p) { ptr->ip = p; }
       void SetInt(int i ) { val = i; }

       int GetPtrVal(void) const { return *ptr->ip; }
       void SetPtrVal(int v) { *ptr->ip = v; }

   private:
       //int *ptr;
       int val;
       //智能指针
       Smart *ptr;

};

//赋值操作符
SmartPtr& SmartPtr::operator = (const SmartPtr &s)
{
    //允许自己复制自己, 但use不增
    ++s.ptr->use;
    if ( 0 == (--ptr->use) )
        delete ptr;

    ptr = s.ptr;  //浅复制, 避免野指针
    val = s.val;

    return *this;
}


