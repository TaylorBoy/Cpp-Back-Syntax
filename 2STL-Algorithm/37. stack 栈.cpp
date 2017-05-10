#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/* STL stack
 * LIFO,后进先出
 * 自适应容器（容器适配器）*/

int main()
{
    //stack是一个容器适配器，默认使用deque
    stack<int,deque<int> >  a; //codeblocks两个<<嵌套中间需要加空格 < <
    stack<int,vector<int> > b;
    stack<int,list<int> >   c;
    stack<int>              d; //默认deque

    d.push(25);
    d.push(38);
    d.push(4);
    d.push(1);

    cout << "d栈的数据个数：" << d.size() << endl;
    cout << "d栈的栈顶元素：" << d.top() << endl;

    cout << "d栈出栈：";
    int x = 0;
    while (0 != d.size()){
        x = d.top();  //只查看，不删除
        d.pop();      //出栈，删除
        cout << x << " ";
    }

    cout << "\nd栈的数据个数：" << d.size() << endl;
    cout << "d栈是否为空：" << d.empty() << endl;




    return 0;
}
