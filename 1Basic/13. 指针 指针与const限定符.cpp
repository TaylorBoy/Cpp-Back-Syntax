#include <iostream>
#include <string>

/*ָ�롢const�޶���*/

using namespace std;

int main()
{
    double a = 1.2;
    double *p = &a;

    *p = 2.2;

    const double pi = 3.14; //��double
    const double *cptr;     //ָ�򳣶����ָ��
    cptr = &pi;

    int num = 0;
    int num2 = 9;
    int *const constPtr = &num;
    //Error : constPtr = &num2 //���ܸı�ָ��ָ��


    //const �޶���
    string str("Hello World!");
    const string *cstr1;
    string *const cstr2 = &str;  //��ָ�룬�����ʼ��
    const string *const str2 = &str;


    return 0;
}
