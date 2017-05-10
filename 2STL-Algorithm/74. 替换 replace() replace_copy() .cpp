#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iterator>
using namespace std;

/* 替换算法
 * replace(b,e,ov,nv): old -> new
 * replace_if(b,e,p,v): 符合规则的 -> new
 * replace_copy(b1,e1,b2,ov,nv)
 * replace_copy_if(b1,e1,b2,p,v)
 */

int main()
{
    list<int> int_lst;

    for (int i = 2; i < 8; ++i)
        int_lst.push_back(i);
    for (int i = 4; i < 10;++i)
        int_lst.push_back(i);

    copy(int_lst.begin(),int_lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "\n所有的6换成99：";

    //relpace()
    replace(int_lst.begin(),int_lst.end(),6,99);  //所有的6换成99
    copy(int_lst.begin(),int_lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "\n比5小的都替换成0：" ;

    //replace_if()
    replace_if(int_lst.begin(),int_lst.end(), bind2nd(less<int>(),5), 0);
    copy(int_lst.begin(),int_lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "\nlst2: ";

    //////////////////////////////////////////////////////////////////////

    list<int> lst2;
    for (int i = 2; i < 7; ++i)
        lst2.push_back(i);
    for (int i = 4; i <10; ++i)
        lst2.push_back(i);
    copy(lst2.begin(),lst2.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "\ncopy到输出流：";

    //replace_copy() 复制到输出流（边替换边复制）
    replace_copy(lst2.begin(),lst2.end(), ostream_iterator<int>(cout, " "), 5, 555);
    cout << endl << "\n把小于6的换成666：";

    //replce_copy_if()
    replace_copy_if(lst2.begin(),lst2.end(), ostream_iterator<int>(cout, " "),
        bind2nd(less<int>(),6), 666);
    cout << endl;


    return 0;
}
