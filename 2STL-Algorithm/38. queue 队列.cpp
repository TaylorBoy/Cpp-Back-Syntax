#include <iostream>
#include <list>
#include <deque>
#include <queue>

using namespace std;

/* STL queue队列
 * FIFO，先进先出
 * 可以用list和deque做queue。不能用vector。
 */

int main()
{
    //queue是一个容器适配器，默认使用deque
    queue<int, queue<int> > a;
    queue<int> q;
    //queue<double, queue<double> > a; 只能是int型数据
    queue<int, list<int> >  b;

    q.push(23);
    q.push(34);
    q.push(6);
    q.push(-2);


    cout << "查看队首元素：" << q.front() << endl;  //查看，不删除
    cout << "查看队尾元素：" << q.back()  << endl;
    cout << "总共包含元素个数：" << q.size() << endl;
    q.pop();
    cout << "Pop后新队首的元素："<< q.front() << endl;

    cout << "q队列元素：";
    int x = 0;
    while (q.size() != 0){
        cout << "删除：" << q.front() << " "; //不允许在中间操作数据，所以没有迭代器
        q.pop();
    }

    return 0;
}
