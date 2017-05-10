#include <iostream>
#include <string>

/*sring (2)*/

using namespace std;

int main()
{
    string str("Hello World!");
    cout << "The size of str: " << str.size() << endl;

    //字符串大小类型，>=0
    string::size_type num = str.size();
    cout << "size : " << num << endl;

    //字符串大小比较,中文：拼音；英文：ASCII
    //string str1("big");
    //string str2("small");
    string str1("逗比比");
    string str2("傻蛋");
    if (str1 > str2){
        cout << str1 << " > " << str2 << endl;
    }else if (str1 < str2){
        cout << str2 << " > " << str1 << endl;
    }else{
        cout << str1 << " == "<< str2 << endl;
    }

    //字符串相加
    cout << "str1 + str2: " << str1+str2 << endl;
    string str3 = str1 +"dandan"+"dandan"+"dandan" +str2;
    //错误：string str3 = str2 +"doufw" +"fwef";
    //错误：string str3 = "dou" + "bi"; 至少一个字符串变量
    cout << "add : " << str3 << endl;


    return 0;
}
