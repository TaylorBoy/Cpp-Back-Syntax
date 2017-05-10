#include <iostream>
#include <cstring>  //string.h

using namespace std;
/*
 *  重载赋值操作符
 *
    * 赋值操作必须返回对*this的引用
 */

class String
{
public :
    String(char const *chars = "");

    //常用重载
    String& operator=(String const &str);
    String& operator=(char const *);
    String& operator=(char);

    void print(void);

private:
    char *ptrChars;
};

///////////////
// 构造函数
String::String(char const *chars)
{
    chars = chars ? chars : "";  //若chars为null, 置为空
    ptrChars = new char[ strlen(chars) + 1];
    strcpy(ptrChars, chars);
}

///////////////
// 重载赋值操作符
String& String::operator=(String const &str)
{
    if (strlen(ptrChars) != strlen(str.ptrChars))
    {
        //长度不相等, 重新
        char *ptrHold = new char[strlen(str.ptrChars) + 1];
        delete[] ptrChars;
        ptrChars = ptrHold;
    }

    //长度相等, 直接赋值
    std::strcpy(ptrChars, str.ptrChars);
    return *this;
}

////////////////
// 方法
void String::print(void)
{
    cout << ptrChars << endl;
}

/////////////////////////////////////////////

int main()
{
    String s1("Hello");
    String s2("Cpp");

    s1.print();
    s2.print();

    s1 = s2;
    s1.print();
    s2.print();

    return 0;
}


