#include <iostream>
#include <string>

/*指针、const限定符*/

using namespace std;

int main()
{
    double a = 1.2;
    double *p = &a;

    *p = 2.2;

    const double pi = 3.14; //常double
    const double *cptr;     //指向常对象的指针
    cptr = &pi;

    int num = 0;
    int num2 = 9;
    int *const constPtr = &num;
    //Error : constPtr = &num2 //不能改变指针指向


    //const 限定符
    string str("Hello World!");
    const string *cstr1;
    string *const cstr2 = &str;  //常指针，必须初始化
    const string *const str2 = &str;


    return 0;
}
