#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iterator>
using namespace std;

/* �����ֵ
 * ������䣺fill()
 * ȫ����䣺fill_n()
 * ������䣺generate();
 * ȫ����䣺generate_n(); ��Ҫʹ�ò��������
 */

int main()
{
    list<string>  str_list;

    str_list.push_back("hello");
    str_list.push_back("hello");
    str_list.push_back("hello");

    //�������(ȫ��)
    fill(str_list.begin(),str_list.end(), "Good morning!");

    copy(str_list.begin(),str_list.end(), ostream_iterator<string>(cout, " "));

    list<string> str_list_2;

    //ȫ����䣬��Ҫʹ�ò��������
    fill_n(back_inserter(str_list_2), 9, "Hello");
    cout << endl;
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));

    //��䵽�����
    cout << endl << "��䵽�������";
    fill_n(ostream_iterator<float>(cout, " "), 10, 77.77);

    //�������2
    fill(str_list_2.begin(),str_list_2.end(), "Again");
    cout << "\n\n�������str2��";
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));

    //��䲿��
    list<string>::iterator pos1,pos2;
    pos1 = str_list_2.begin();
    pos2 = str_list_2.end();

    fill(++pos1, --pos2, "XXXXX");
    cout << "\n\n�������str2��";
    copy(str_list_2.begin(),str_list_2.end(), ostream_iterator<string>(cout, " "));


    /// generate_n()

    list<int> lst;

    generate_n(back_inserter(lst), 5, rand);  //rand �����
    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));


    return 0;
}
