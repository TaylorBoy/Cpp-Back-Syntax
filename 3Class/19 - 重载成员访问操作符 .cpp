
/*------------------ string.h -------------------*/
#ifndef STRING_H
#define STRING_H

class String
{
public :
    String(char const *chars = "");
    String(String const &str);
    ~String();

    void display(void) const;

private:
    char *ptrChars;
};

#endif // STRING_H
/*------------------ string.h -------------------*/

/*------------------ pointer.h -------------------*/

#ifndef POINTER_H
#define POINTER_H
// 智能指针

class String;

// 智能指针: 对指针使用计数!!

class Pointer
{
public :
    Pointer();
    Pointer(String const &n);
    ~Pointer();

    //重载 * ->
    String& operator*();
    String* operator->() const;

private:
    String *ptr;
    static String errorMessage;
};

#endif // POINTER_H
/*---------------- pointer.h ---------------------*/


#include <iostream>
#include <cstdlib>  //pause
#include "string.h"
#include "pointer.h"
using namespace std;

/*
 * 成员访问操作符:
    1) 解引用: *
    2) 箭头  : ->
 *
    用于: 智能指针
 */

int main()
{
    String s1("String: Hei man!");
    s1.display();

    //普通指针: 容易产生野指针
    //String *ps2 = &s1;
    //ps2->display();

    //智能指针, 可能发生异常
    try{
        Pointer p1("CPP");
        p1->display();

        //->测试异常
        Pointer p2;  //未初始化
        p2->display();

        //*解引用
        String s2 = *p1;
        s2.display();

    }catch(String const &error)
    {
        error.display();
    }


    //system("pause");
    return 0;
}


#ifndef POINTER_H
#define POINTER_H
// 智能指针

class String;

// 智能指针: 对指针使用计数!!

class Pointer
{
public :
    Pointer();
    Pointer(String const &n);
    ~Pointer();

    //重载 * ->
    String& operator*();
    String* operator->() const;

private:
    String *ptr;
    static String errorMessage;
};

#endif // POINTER_H


#ifndef POINTER_H
#define POINTER_H
// 智能指针

class String;

// 智能指针: 对指针使用计数!!

class Pointer
{
public :
    Pointer();
    Pointer(String const &n);
    ~Pointer();

    //重载 * ->
    String& operator*();
    String* operator->() const;

private:
    String *ptr;
    static String errorMessage;
};

#endif // POINTER_H


/*--------------- printer.cpp -----------------*/

#include "pointer.h"
#include "string.h"

Pointer::Pointer() :ptr(0) {}

Pointer::Pointer(String const &n)
{
    ptr = new String(n);
}

Pointer::~Pointer()
{
    delete ptr;  //注意: 数组要delete[]
}

String Pointer::errorMessage("Uninitialization pointer");

// 重载
String& Pointer::operator*()
{
    if (!ptr)
        throw errorMessage;
    return *ptr; //解引用,得到对象
}

String* Pointer::operator->() const
{
    if (!ptr)
        throw errorMessage;
    return ptr;
}
/*--------------- printer.cpp -----------------*/




/*-------------- string.cpp ------------------*/
#include <iostream>
#include <cstring>
#include "string.h"

String::String(char const *chars)
{
    chars = chars ? chars : "";
    ptrChars = new char[strlen(chars) + 1];
    strcpy(ptrChars, chars);
}

String::String(String const &str)
{
    ptrChars = new char[strlen(str.ptrChars) + 1];
    strcpy(ptrChars, str.ptrChars);
}

String::~String()
{
    std::cout << "String: ~String() " << std::endl;
    delete[] ptrChars;
}

void String::display(void) const
{
    std::cout << ptrChars << std::endl;
}

/*-------------- string.cpp ------------------*/
