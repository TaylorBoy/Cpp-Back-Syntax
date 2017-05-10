#include <iostream>
#include <queue>  //�������ȼ�����
#include <deque>
#include <vector>

using namespace std;

/* ���ȼ����� priority queue
 * ����ʹ��list����Ҫ�������
 * ���ֵ����Сֵ���ȼ�����
 */

int main()
{
    //Ĭ��ʹ��vector
    priority_queue<int, vector<int>, greater<int> > pq;  //greater��Сֵ���ȶ���
    priority_queue<int> p_q; //Ĭ�����ֵ����

    pq.push(45);
    pq.push(-4);
    pq.push(34);
    pq.push(6);

    cout << "���ȼ�������һ����: " << pq.size() << endl;

    cout << "Top: " << pq.top() << endl;

    while (!pq.empty()){
        cout << "��Ҫɾ����" << pq.top() << endl;
        pq.pop();
    }




    return 0;
}
