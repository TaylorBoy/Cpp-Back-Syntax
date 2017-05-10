#include <iostream>
#include <string>

using namespace std;

/*修改string对象的方法
 *
 * 使用迭代器，对其他容器通用
 */

int main()
{
    string s("Hello");
    string s2("C++");

    string::iterator it = s.begin();
    ++it;

    //插入一个字符
    s.insert(it,'A');
    cout << "插入一个字符: " << s << endl;

    it = s.begin();
    ++it;

    //插入n个字符
    s.insert(it,3,'B');
    cout << "插入n个字符 : " << s << endl;

    //插入string
    string::iterator bgn = s2.begin();
    string::iterator stp = s2.end();

    s.insert(it,bgn,stp);
    cout << "插入string  : " << s << endl;

    //分配assign
    cout << "分配assign: " << endl;

    s = "char";
    cout << "原字符串："  << s << endl;

    s.assign(8,'K');
    cout << s << endl;

    s.assign(bgn,stp);
    cout << s << endl;

    //删除

    s = "Aabcd";
    it = s.begin();
    s.erase(it);
    cout << "删除之后：" << s << endl;

    s = "ABCDEFGH";
    it = s.begin();
    ++it;
    ++it;
    string::iterator it2 = s.end();
    --it2;
    s.erase(it, it2);  //从it到it2,包头不包尾
    cout << s << endl;




    return 0;
}
