#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iterator>
using namespace std;

/* 填充新值
 * 重新填充：fill()
 * 全新填充：fill_n()
 * 重新填充：generate();
 * 全新填充：generate_n(); 需要使用插入迭代器
 */

int main()
{
    list<string>  str_list;

    str_list.push_back("hello");
    str_list.push_back("hello");
    str_list.push_back("hello");

    //重新填充(全部)
    fill(str_list.begin(),str_list.end(), "Good morning!");

    copy(str_list.begin(),str_list.end(), ostream_iterator<string>(cout, " "));

    list<string> str_list_2;

    //全新填充，需要使用插入迭代器
    fill_n(back_inserter(str_list_2), 9, "Hello");
    cout << endl;
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));

    //填充到输出流
    cout << endl << "填充到输出流：";
    fill_n(ostream_iterator<float>(cout, " "), 10, 77.77);

    //重新填充2
    fill(str_list_2.begin(),str_list_2.end(), "Again");
    cout << "\n\n重新填充str2：";
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));

    //填充部分
    list<string>::iterator pos1,pos2;
    pos1 = str_list_2.begin();
    pos2 = str_list_2.end();

    fill(++pos1, --pos2, "XXXXX");
    cout << "\n\n重新填充str2：";
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));


    /// generate_n()

    list<int> lst;

    generate_n(back_inserter(lst), 5, rand);  //rand 随机数
    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));


    return 0;
}
