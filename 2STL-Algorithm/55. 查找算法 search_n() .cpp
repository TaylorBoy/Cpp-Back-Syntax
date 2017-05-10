#include <iostream>
#include <algorithm>
#include <deque>
#include <functional>

using namespace std;

/*
 * �����㷨--search_n()
 */

int main()
{
    deque<int> deq;

    for (int i = 0; i < 10; ++i ){
        if (5 == i){
            deq.push_back(i);
            deq.push_back(i);
            deq.push_back(i);
        }
        deq.push_back(i);
    }

    //��ӡ
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it){
        cout << *it << ' ';
    }cout << endl;

    /// ����

    // search_n(b, e, n, m)
    deque<int>::iterator pos;

    //����������4��5
    pos = search_n(deq.begin(), deq.end(), 4, 5);

    if (pos != deq.end()){
        cout << "������4��5λ�ã�" << distance(deq.begin(), pos) << endl;
    }else{
        cout << "Not Found !\n";
    }

    // search_n(b, e, n, m, e)

    //��������4������5����
    pos = search_n(deq.begin(), deq.end(), 4, 5, greater<int>());
    //�淶(������)��pos = search_n_if(deq.begin(),deq.end(),3,bind2nd(greater<int>(), 6));

    if (pos != deq.end()){
        cout << "4����������5������λ�ã�" << distance(deq.begin(), pos) << endl;
    }else{
        cout << "Not Found!\n";
    }

    return 0;
}
