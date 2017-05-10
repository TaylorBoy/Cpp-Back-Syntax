#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
using namespace std;

/*
 * �㷨����--swap_ranges()
 */

int main()
{
    vector<int> vec;
    deque<int>  deq;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);
    for (int i = 11; i < 23; ++i)
        deq.push_back(i);

    cout << "vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\ndeq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    /// swap_ranges()
    deque<int>::iterator pos; //û�н�����

    pos = swap_ranges(vec.begin(),vec.end(),deq.begin());
    cout << "swap for vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\nswap for deq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    if (deq.end() != pos){
        cout << "��һ��û�н���������" << *pos << endl;
    }

    //��β����
    swap_ranges(deq.begin(),deq.begin()+3, deq.rbegin()); //��������
    cout << "sRwap for deq: ";
    copy(deq.begin(),deq.end(), ostream_iterator<int>(cout, " "));

    /// �㷨��swap()���ٶȿ�
    vector<int> vec_tmp;

    for (int i = 2; i < 8; ++i)
        vec_tmp.push_back(i);

    vec.swap(vec_tmp);  //�����ڲ�ָ�룬�ٶȿ�
    //vec = vec_tmp;    //ͨ�����ƣ��ٶ���

    cout << "\n\nswap for vec: ";
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << "\nswap for tmp: ";
    copy(vec_tmp.begin(),vec_tmp.end(), ostream_iterator<int>(cout, " "));

    return 0;
}
