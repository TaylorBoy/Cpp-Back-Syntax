#include <iostream>
#include <cstring>

using namespace std;

/*
 * 重载下标操作符 []: 主要用于数组
 *
    * 可变成员函数
    * 常量成员函数
 */

class Str
{
public :
    Str(char const *chars = "");

    //下标操作符重载

    // 可变
    char& operator[](size_t index) throw(Str);
    //常量
    char operator[](size_t index) const throw(Str);

    void print(void);

private:
    char *ptrCh;

    static Str errorMessage;
};

Str Str::errorMessage("Subscript out of range!");

//////////////////////
// 构造函数
Str::Str(char const *chars)
{
    chars = chars ? chars : "";
    ptrCh = new char[strlen(chars) + 1];
    strcpy(ptrCh, chars);
}

//////////////////////
// 重载下标: 可变
char& Str::operator[](size_t index) throw(Str)
{
    cout << "\n====== none const ======\n";
    if (index >= strlen(ptrCh))
        throw errorMessage;  //抛出异常
    return ptrCh[index];
}

//常量
char Str::operator[](size_t index) const throw(Str)
{
    cout << "\n====== const ======\n";
    if (index >= strlen(ptrCh))
        throw errorMessage;  //抛出异常
    return ptrCh[index];
}

///////////////////////
// print
void Str::print(void)
{
    cout << ptrCh << endl; //ptrCh -> %s, *ptrCh指向首地址
}

/*--------------------------------------------*/

int main()
{
    Str s("My god !");

    cout << s[5] << endl;
    s[5] = 'X';  //可变成员函数, 可修改
    s.print();

    Str const s2("How are you?");
    cout << s2[2] << endl;
    //s2.print();

    return 0;
}
