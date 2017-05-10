#include <iostream>
#include <string>

using namespace std;

/*string���͵Ĳ���
 *
 */

int main()
{
    /*�������*/

    //�����ַ�����find ���е�

    string name("AnanaBabava");
    string::size_type pst = name.find("Baba");

    if (string::npos == pst)
        cout << "Not Find!\n";
    else
        cout << "In Here: " << pst << endl;

    //�����ַ���find_first_of ���е�ĳ��

    name = "a2v3b5";
    string str_num("0123456789");  //����str_num���е���

    string::size_type pst2 = name.find_first_of(str_num);

    if (string::npos == pst2)
        cout << "Not Find!\n";
    else
        cout << "In Here: " << pst2 << endl;

    //���Ҳ�ƥ����ַ���find_first_not_of
    string::size_type i = 0;
    while ( (i = name.find_first_not_of(str_num, i)) != string::npos ){
        cout << "- " << name[i] << endl;
        ++i;
    }


    /*������ң�(�±�����)
     * rfind
     * find_last_of
     * find_last_not_of
     */

    return 0;
}
