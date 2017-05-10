#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
using namespace std;

/* �ֲ�����
 * partial_sort()
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

    //��ǰ��5��
    partial_sort(deq.begin(),deq.begin()+5, deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //ν��
    partial_sort(deq.begin(),deq.begin()+5,deq.end(), greater<int>());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;




    return 0;
}
