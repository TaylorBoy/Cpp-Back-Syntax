#include <iostream>
#include <list>
#include <deque>
#include <queue>

using namespace std;

/* STL queue����
 * FIFO���Ƚ��ȳ�
 * ������list��deque��queue��������vector��
 */

int main()
{
    //queue��һ��������������Ĭ��ʹ��deque
    queue<int, queue<int> > a;
    queue<int> q;
    //queue<double, queue<double> > a; ֻ����int������
    queue<int, list<int> >  b;

    q.push(23);
    q.push(34);
    q.push(6);
    q.push(-2);


    cout << "�鿴����Ԫ�أ�" << q.front() << endl;  //�鿴����ɾ��
    cout << "�鿴��βԪ�أ�" << q.back()  << endl;
    cout << "�ܹ�����Ԫ�ظ�����" << q.size() << endl;
    q.pop();
    cout << "Pop���¶��׵�Ԫ�أ�"<< q.front() << endl;

    cout << "q����Ԫ�أ�";
    int x = 0;
    while (q.size() != 0){
        cout << "ɾ����" << q.front() << " "; //���������м�������ݣ�����û�е�����
        q.pop();
    }

    return 0;
}
