#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/* STL stack
 * LIFO,����ȳ�
 * ����Ӧ������������������*/

int main()
{
    //stack��һ��������������Ĭ��ʹ��deque
    stack<int,deque<int> >  a; //codeblocks����<<Ƕ���м���Ҫ�ӿո� < <
    stack<int,vector<int> > b;
    stack<int,list<int> >   c;
    stack<int>              d; //Ĭ��deque

    d.push(25);
    d.push(38);
    d.push(4);
    d.push(1);

    cout << "dջ�����ݸ�����" << d.size() << endl;
    cout << "dջ��ջ��Ԫ�أ�" << d.top() << endl;

    cout << "dջ��ջ��";
    int x = 0;
    while (0 != d.size()){
        x = d.top();  //ֻ�鿴����ɾ��
        d.pop();      //��ջ��ɾ��
        cout << x << " ";
    }

    cout << "\ndջ�����ݸ�����" << d.size() << endl;
    cout << "dջ�Ƿ�Ϊ�գ�" << d.empty() << endl;




    return 0;
}
