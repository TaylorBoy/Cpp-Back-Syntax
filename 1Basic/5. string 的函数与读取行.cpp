#include <iostream>

/*字符串string （3）*/
#include <string>

using namespace std;

int main()
{
    //string 类型不是C语言中的字符数组，但
    string str("Hello!");

    cout << str[1] << endl;
    cout << str[4] << endl;

    //索引值size_type替代int
    for (string::size_type i = 0; i < str.size(); ++i){
        cout << str[i] << " ";
    }

    //函数
    //isalnum(c) 字母或数字
    //isdigit(c) 数字
    //isalpha(c) 字母
    //ispunct(c) 标点
    //iscntrl(c) 控制字符
    //islower(c)
    //isupper(c)
    //isspace(c)
    //isxdigit(c) 16进制
    //tolower(c)
    //toupper(c)

    //去标点
    cout << "\nPlease Input Something: " << endl;
    getline(cin, str);
    string str2;
    for (string::size_type i = 0; i < str.size(); ++i){
        if ( !ispunct(str[i]) ){
            str2 += str[i];
        }
    }
    cout << str2 << endl;

    return 0;
}
