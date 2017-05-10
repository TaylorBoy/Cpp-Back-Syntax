#include <iostream>
#include <cstring>  //string.h

using namespace std;
/*
 *  ���ظ�ֵ������
 *
    * ��ֵ�������뷵�ض�*this������
 */

class String
{
public :
    String(char const *chars = "");

    //��������
    String& operator=(String const &str);
    String& operator=(char const *);
    String& operator=(char);

    void print(void);

private:
    char *ptrChars;
};

///////////////
// ���캯��
String::String(char const *chars)
{
    chars = chars ? chars : "";  //��charsΪnull, ��Ϊ��
    ptrChars = new char[ strlen(chars) + 1];
    strcpy(ptrChars, chars);
}

///////////////
// ���ظ�ֵ������
String& String::operator=(String const &str)
{
    if (strlen(ptrChars) != strlen(str.ptrChars))
    {
        //���Ȳ����, ����
        char *ptrHold = new char[strlen(str.ptrChars) + 1];
        delete[] ptrChars;
        ptrChars = ptrHold;
    }

    //�������, ֱ�Ӹ�ֵ
    std::strcpy(ptrChars, str.ptrChars);
    return *this;
}

////////////////
// ����
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


