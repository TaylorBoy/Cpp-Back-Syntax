#include <iostream>
#include <cstring>

using namespace std;

/*
 * ���������Լ�������: ++ --
 */


class String
{
public :
    String(char const *chars = "");
    String(String const &str);
    ~String();

    void display();

    //����
    String& operator++();  //ǰ++
    String const operator++(int);  //��++

    String& operator--();
    String const operator--(int);

private:
    char *ptrChars;
};

// ���캯�� yu ��������
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

// ����ǰ++
String& String::operator++()
{
    for (std::size_t i = 0; i < std::strlen(ptrChars); ++i)
    {
        ++ptrChars[i];
    }

    return *this;
}

// ���غ�++
String const String::operator++(int)
{
    String str_copy(*this);
    ++(*this);  //����ǰ++
    return str_copy;
}

// ����--
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
