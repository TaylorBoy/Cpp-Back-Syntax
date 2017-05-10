#include <iostream>
#include <string>
#include <cstring>
using namespace std;

/*
 * ��ƺ�ǳ����
 *
 */

class CppDemo
{
public :
    CppDemo(int pa, char *cpp_str)
    {
        this->a = pa;
        this->str = new char[1024];
        strcpy(this->str, cpp_str);
    }

    //C++Ĭ��дһ�����ƹ��캯��
    // ���: ָ�븴��, ָ����ָ��Ķ���Ҳ����
    // ǳ����: ָ�븴��, ָ����ָ��Ķ���û����, ָ����ͬһ����

    // ���:
    CppDemo(CppDemo &c)
    {
        this->a = c.a;
        this->str = new char[1024];
        if (this->str)
        {
            strcpy(this->str, c.str);
        }
    }

    // ǳ����:
/*    CppDemo(CppDemo &c)
    {
        this->a = c.a;
        this->str = c.str;
    }
*/
    ~CppDemo()
    {
        delete str;
    }

public :
    int a ;
    char *str;

};


int main()
{
    CppDemo c(10, "World");
    CppDemo c1 = c;

    cout << c.a << ", " << c.str << endl;

    //����a��ͬ, strָ����ͬһ����.
    c.a = 7;
    strcpy(c.str, "Hello");
    cout << c.a << ", " << c.str << endl;
    cout << c1.a << ", " << c1.str << endl;


    return 0;
}
