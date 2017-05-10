#include <iostream>
#include <queue>  //包含优先级队列
#include <deque>
#include <vector>

using namespace std;

/* 优先级队列 priority queue
 * 不能使用list，需要随机操作
 * 最大值、最小值优先级队列
 */

int main()
{
    //默认使用vector
    priority_queue<int, vector<int>, greater<int> > pq;  //greater最小值优先队列
    priority_queue<int> p_q; //默认最大值优先

    pq.push(45);
    pq.push(-4);
    pq.push(34);
    pq.push(6);

    cout << "优先级队列里一共有: " << pq.size() << endl;

    cout << "Top: " << pq.top() << endl;

    while (!pq.empty()){
        cout << "将要删除：" << pq.top() << endl;
        pq.pop();
    }




    return 0;
}
