#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/* �����㷨
 * binary_search() Ҫ������
 * includes���� Ԫ�ز���Ҫ������
 */

int main()
{
    list<int> list_int;
    vector<int> vec_int;

    for (int i = 1; i < 10; ++i)
        list_int.insert(list_int.end(), i);
    vec_int.push_back(3);
    vec_int.push_back(6);
    vec_int.push_back(7);

    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it)
        cout << *it << ' ';
    cout << endl;

    //binary_search()ֻ�ܷ��� �ҵ���δ�ҵ�
    if (binary_search(list_int.begin(),list_int.end(), 6)){
        cout << "Fount !" << endl;
    }else{
        cout << "Not Found !" << endl;
    }

    //includes() �Ұ���������Ԫ��
    if (includes(list_int.begin(),list_int.end(), vec_int.begin(),vec_int.end()))
        cout << "Fount !" << endl;
    else
        cout << "Not Found !" << endl;


    return 0;
}
