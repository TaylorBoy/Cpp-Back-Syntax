#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
using namespace std;

/* �㷨--���ݵ�n��Ԫ������
 * nth_element() �����Ԫ��С��Ԫ�ض��������Ԫ��֮ǰ�������
       Ԫ�ش��Ԫ�ض��������Ԫ��֮�󣬵����ܱ�֤�����������
 */

int main()
{
    deque<int> deq;
    for (int i = 3; i < 8; ++i)
        deq.push_back(i);
    for (int i = 2; i < 7; ++i)
        deq.push_back(i);
    for (int i = 1; i < 6; ++i)
        deq.push_back(i);

    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //nth_element()
    nth_element(deq.begin(),deq.begin()+3,deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    nth_element(deq.begin(),deq.end()-4, deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //partition()
    deque<int>::iterator pos;

    pos = partition(deq.begin(), deq.end(), bind2nd(less<int>(), 4));;
    //����С��4�ģ����3��������
    copy(deq.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
