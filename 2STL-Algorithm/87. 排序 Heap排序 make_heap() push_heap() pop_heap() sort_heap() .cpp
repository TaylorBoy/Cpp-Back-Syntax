#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

/* heap �㷨--���������
 *
 */

int main()
{
    vector<int> vec;

    for (int i = 3; i < 8; ++i)
        vec.push_back(i);
    for (int i = 5; i < 10; ++i)
        vec.push_back(i);
    for (int i = 1; i < 5; ++i)
        vec.push_back(i);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //make_heap() ��ɶ�
    make_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //pop_heap(),δɾ��
    pop_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //��Ա������ɾ�� ��ջ
    vec.pop_back();
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //��Ա��������ջ
    vec.push_back(12);
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //push_heap(),��12����ѣ�����µĶ�
    push_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //sort_heap()����heap�����ͨ����
    sort_heap(vec.begin(),vec.end());
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
