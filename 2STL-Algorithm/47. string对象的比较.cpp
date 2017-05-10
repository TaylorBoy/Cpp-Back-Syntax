#include <iostream>
#include <string>

using namespace std;

/*
 * string对象的比较
 */

int main()
{
    string str1("aVcd");
    string str2("avcd");

    if (str1 != str2) cout << "!=" << endl;
    if (str1 == str2) cout << "==" << endl;
    if (str1 > str2)  cout << "> " << endl;
    if (str1 < str2)  cout << "< " << endl;

    if (str1.compare(str2) > 0) cout << "str1大" << endl;
    if (str1.compare(str2) < 0) cout << "str2da" << endl;
    if (str1.compare(str2) == 0) cout << "相等"  << endl;

    cout << endl << endl;

    if (str1.compare(2,2,str2) > 0) cout << "str1的后两个 > str2" << endl;
    if (str1.compare(2,2,str2,2,2) == 0) cout << "str1 == str2 2" << endl;

    cout << endl << endl;

    char *str = "Hello";

    if (str1.compare(2,2,str,2,2) < 0) cout << "str1的后两个 < str的后两个" << endl;





    return 0;
}
