#include <iostream>
#include <string>

using namespace std;

/*修改string对象的方法
 *
 * 使用迭代器，对其他容器通用
 */
int main()
{
    //插入

    string str("hello");
    string str2("ABC");

    str.insert(0,3,'K'); //在0位置插入3个K
    cout << "插入3个K：" << str << endl;

    str.insert(2,str2);  //在第2个位置插入str2
    cout << "插入str2： " << str << endl;

    str.insert(0,str2,0,2);  //在0插入str2(从0开始选择2位)
    cout << "插入部分str2：" << str << endl;

    //分配

    char *cp = "Start eating Now"; //c语言风格也行

    str.assign(cp,5); //第一个单词
    cout << str << endl;

    str.assign(cp);   //全部
    cout << str << endl;

    str.assign(cp,2,5);
    cout << str << endl;

    //删除

    str.erase(1,2);  //从1开始删除两个
    cout << str << endl;

    //字符串与下标
    str = "ccccccccc";

    str[0] = 'A';
    cout << str << endl;

    //等价于
    str.erase(0,1).insert(1,"A");
    cout << str << endl;


    return 0;
}
