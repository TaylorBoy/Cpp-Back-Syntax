#include <iostream>
#include <string>

using namespace std;

/*string类型的查找
 *
 */

int main()
{
    /*正向查找*/

    //查找字符串：find 所有的

    string name("AnanaBabava");
    string::size_type pst = name.find("Baba");

    if (string::npos == pst)
        cout << "Not Find!\n";
    else
        cout << "In Here: " << pst << endl;

    //查找字符：find_first_of 含有的某个

    name = "a2v3b5";
    string str_num("0123456789");  //查找str_num含有的数

    string::size_type pst2 = name.find_first_of(str_num);

    if (string::npos == pst2)
        cout << "Not Find!\n";
    else
        cout << "In Here: " << pst2 << endl;

    //查找不匹配的字符：find_first_not_of
    string::size_type i = 0;
    while ( (i = name.find_first_not_of(str_num, i)) != string::npos ){
        cout << "- " << name[i] << endl;
        ++i;
    }


    /*反向查找：(下标正向)
     * rfind
     * find_last_of
     * find_last_not_of
     */

    return 0;
}
