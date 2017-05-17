#include <iostream>
#include <cstring>

using namespace std;

/*
 * 重载自增自减操作符: ++ --
 */


class String
{
public :
    String(char const *chars = "");
    String(String const &str);
    ~String();

    void display();

    //重载
    String& operator++();  //前++
    String const operator++(int);  //后++

    String& operator--();
    String const operator--(int);

private:
    char *ptrChars;
};

// 构造函数 yu 析构函数
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
    delete[] ptrChars;
}

// display
void String::display()
{
    cout << ptrChars << endl;
}

//////////////////////////////////////////////

// 重载前++
String& String::operator++()
{
    for (std::size_t i = 0; i < std::strlen(ptrChars); ++i)
    {
        ++ptrChars[i];
    }

    return *this;
}

// 重载后++
String const String::operator++(int)
{
    String str_copy(*this);
    ++(*this);  //借用前++, 所以 后++ 使用的时间比较长
    return str_copy;
}

// 重载--
String& String::operator--()
{
    for (std::size_t i = 0; i < std::strlen(ptrChars); ++i)
    {
        --ptrChars[i];
    }

    return *this;
}

String const String::operator--(int)
{
    String str_copy(*this);
    --(*this);
    return str_copy;
}

/*-----------------------------------------*/

int main()
{
    String s1("Taylor");
    s1.display();

    s1++;
    s1.display();

    s1--;
    s1.display();



    return 0;
}
