#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

/* ����Ƚ�
 * equal() �ж����������Ƿ����
 */

//ν��            ��һ������  �ڶ�������
bool bothEvenOrOdd(int elem1, int elem2)
{
    //������ż���Ƿ��Ӧ
    return elem1%2 == elem2%2;
}

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 8; ++i)
        vec.push_back(i);
    for (int i = 3; i < 10; ++i)
        lst.push_back(i);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it )
        cout << *it << " ";
    cout << endl;
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << " ";
    cout << endl;

    //equal
    if (equal(vec.begin(),vec.end(), lst.begin()))
        cout << "Equal !" << endl;
    else
        cout << "Not Equal !" << endl;

    //equal ν��
    if (equal(vec.begin(),vec.end(), lst.begin(), bothEvenOrOdd))
        cout << "��ż��Ӧ!" << endl;
    else
        cout << "��ż����Ӧ!" << endl;



    return 0;
}
