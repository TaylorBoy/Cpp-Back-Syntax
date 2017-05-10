#include <iostream>
#include <string>
/*指针*/

using namespace std;

int main()
{
    string s("Hello World!");

    string *sp = &s;

    cout << "s: " << s << endl;
    cout << "*sp: " << *sp << endl;
    cout << "sp: " << sp << endl;

    int ival = 0;
    int *pi = 0;  //指针为0，表示不指向任何对象
    int *pi2;     //没有初始化

    int *pi3 = &ival;
    //错误：int *pi3 = ival;

    //万能指针
    double val = 3.14;
    int val2 = 52;
    void *p = 0;
    p = &val;
    cout << "double: " << p << endl;
    p = &val2;
    cout << "int: " << p << endl;


    //引用
    int test1 = 1024, test2 = 2048;
    int *p1 = &test1, *p2 = &test2;
    int &ri = test1, &ri2 = test2; //引用不能再改变

    cout << "test1: " << test1 << "," << *p1 << "," << ri << endl;
    cout << "test2: " << test2 << "," << *p2 << "," << ri2 << endl;

    //指向指针的指针
    int **pp = &p1;
    cout << "**pp: " << **pp << endl;

    const size_t arr_size = 5;
    int arr[arr_size] = {1,2,3,4,5};
    int *ap  = arr;
    int *ap2 = ap + arr_size;  //超出末端的指针

    cout << endl << "超出末端的指针：";
    for (int *aptr = ap; aptr != ap2; ++aptr){
        cout << *aptr << ",";
    }



    return 0;
}
