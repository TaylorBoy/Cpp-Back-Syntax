#include <iostream>
#include <algorithm>
#include <deque>
#include <iterator>
#include <functional>  //greater
using namespace std;

/* �����㷨
 * sort()��������list����
 */

int main()
{
    deque<int> deq;
    for (int i = 1; i < 10; ++i)
        deq.push_back(i);
    for (int i = 1; i < 10; ++i)
        deq.push_back(i);
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //sort(),Ĭ�ϴ�С����
    sort(deq.begin(),deq.end());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //ν��
    sort(deq.begin(),deq.end(), greater<int>());
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;



    return 0;
}
