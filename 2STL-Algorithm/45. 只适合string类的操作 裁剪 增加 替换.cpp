#include <iostream>
#include <string>

using namespace std;

/*只适合string类的操作
 *
 */

int main()
{
    //substr()

    string str("hello world");

    string str2 = str.substr(6, 30); //从第6个开始剪50个，不够则有多少给多少
    cout << str2 << endl;

    str2 = str.substr(2);  //从第2个开始，有几个剪几个
    cout << str2 << endl;

    str2 = str.substr();  //全部,str2 = str
    cout << str2 << endl;

    //append()

    str = "hello c++";
    str.append(" My God"); //等价于 str.insert(str.size(), " My God");
    cout << str << endl;

    //replace()

    str.insert(str.size(), " one day");
    cout << str << endl;

    str.replace(17,3,"Four");  //把17位开始的3位替换成“Four”
    cout << str << endl;

    str.replace(17,4,"Two");
    cout << str << endl;



    return 0;
}
