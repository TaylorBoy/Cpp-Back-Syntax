#include <iostream>
#include <string>
/*ָ��*/

using namespace std;

int main()
{
    string s("Hello World!");

    string *sp = &s;

    cout << "s: " << s << endl;
    cout << "*sp: " << *sp << endl;
    cout << "sp: " << sp << endl;

    int ival = 0;
    int *pi = 0;  //ָ��Ϊ0����ʾ��ָ���κζ���
    int *pi2;     //û�г�ʼ��

    int *pi3 = &ival;
    //����int *pi3 = ival;

    //����ָ��
    double val = 3.14;
    int val2 = 52;
    void *p = 0;
    p = &val;
    cout << "double: " << p << endl;
    p = &val2;
    cout << "int: " << p << endl;


    //����
    int test1 = 1024, test2 = 2048;
    int *p1 = &test1, *p2 = &test2;
    int &ri = test1, &ri2 = test2; //���ò����ٸı�

    cout << "test1: " << test1 << "," << *p1 << "," << ri << endl;
    cout << "test2: " << test2 << "," << *p2 << "," << ri2 << endl;

    //ָ��ָ���ָ��
    int **pp = &p1;
    cout << "**pp: " << **pp << endl;

    const size_t arr_size = 5;
    int arr[arr_size] = {1,2,3,4,5};
    int *ap  = arr;
    int *ap2 = ap + arr_size;  //����ĩ�˵�ָ��

    cout << endl << "����ĩ�˵�ָ�룺";
    for (int *aptr = ap; aptr != ap2; ++aptr){
        cout << *aptr << ",";
    }



    return 0;
}
