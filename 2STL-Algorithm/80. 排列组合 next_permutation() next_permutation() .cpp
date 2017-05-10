#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

/* �������
   * ���������� *
 * next_permutation() ��������
 * prev_permutation() ��������
 */

int main()
{
    vector<int> vec;
    for (int i = 1; i < 4; ++i)
        vec.push_back(i);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl << endl;

    //��������
    //��ϣ�next_permutation()
    while (next_permutation(vec.begin(),vec.end()))
    {
        copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    cout << endl << endl;

    //��������
    //��һ��������ϣ�prev_permutation()
    vector<int> vec2;
    for (int i = 3; i > 0; --i)
        vec2.push_back(i);
    copy(vec2.begin(),vec2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    while (prev_permutation(vec2.begin(),vec2.end()))
    {
        copy(vec2.begin(),vec2.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }


    return 0;
}
