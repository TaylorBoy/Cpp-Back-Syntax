#include <iostream>
#include "Queue.h"
using namespace std;

/*
    *  模板和泛型编程

    1. 两种模板: 类模板 / 函数模板
    2. 泛型编程: 主要用于 容器 / 迭代器 / 算法 (STL标准模板库)
*/

/*
    * 顺序队列: 数组
    * 链式队列: 链表
*/

int main()
{
    cout << "Test: " << endl;

    Queue<char> q(6);
    q.Push('A');
    q.Push('B');
    q.Push('A');
    q.Push('B');
    cout << "size: " <<  q.GetSize() << "  Capacity: " << q.GetQueueSize() << endl;
    cout << "Front: " << q.Front() << "  Rear: " << q.Rear() << endl;
    q.Push('C');
    q.Push('D');
    cout << "size: " <<  q.GetSize() << "  Capacity: " << q.GetQueueSize() << endl;
    q.Pop();  // 先进先出
    cout << "size: " <<  q.GetSize() << "  Capacity: " << q.GetQueueSize() << endl;    cout << "Front: " << q.Front() << "  Rear: " << q.Rear() << endl;

    return 0;
}

/*------------- Queue.h ---------------*/

#ifndef QUEUE_H
#define QUEUE_H

template<class T>
class Queue
{
public :
    Queue(int queueCapacity = 10);
    bool isEmpty(void) const;
    T& Front(void) const;
    T& Rear(void) const;
    void Push(const T& item);
    void Pop(void);
    int GetSize(void) const;
    int GetQueueSize(void) const;

private:
    T *queue;
    int front;
    int rear;
    int capacity;

};

template<class T>
Queue<T>::Queue(int queueCapacity) : capacity(queueCapacity), front(0),rear(0)
{
    if (capacity < 1)
        throw "Queue capacity must be > 0 !";
    queue = new T[capacity];
}

template<class T>
inline
bool Queue<T>::isEmpty(void) const
{
    return rear == front;
}

template<class T>
void Queue<T>::Push(const T &item)
{

    // 队列满, 需增加
    if (((rear+1) % capacity) == front)
    {
        std::cout << std::endl << "Add .." << std::endl;

        // 加倍
        T *newQueue = new T[2 * capacity];

        int start = (front + 1) % capacity;
        if (start < 2) // 没有回绕
            std::copy(queue+start, queue+start+capacity-1, newQueue);  // [f00000r]
        else
        {
            std::copy(queue+start, queue+capacity, newQueue); // [000rf00]
            std::copy(queue, queue+rear+1, newQueue+capacity-start);
        }
        front = 2*capacity-1; // [000000r----f]
        rear = capacity - 2;
        capacity *= 2;
        delete[] queue;
        queue = newQueue;
    }

    rear = (rear+1) % capacity;
    queue[rear] = item;
}

template<class T>
inline T& Queue<T>::Front(void) const
{
    if (isEmpty())
        throw "Queue is empty !" ;
    return queue[front+1];  // 队首为空
}

template<class T>
inline T& Queue<T>::Rear(void) const
{
    if (isEmpty())
        throw "Queue is empty !";
    return queue[rear];
}

template<class T>
void Queue<T>::Pop(void)
{
    if (isEmpty())
        throw "Queue Is empty, Cannot delete !";
    front = (front + 1) % capacity;  // 判断是否回绕
    queue[front].~T();  // 有可能为对象, 调用它的模板类析构
}

template<class T>
int Queue<T>::GetSize(void) const
{
    if (front < rear)
        return rear - front;
    else
        return (capacity - (front - rear ));

}

template<class T>
int Queue<T>::GetQueueSize(void) const
{
    return capacity;
}


#endif // QUEUE_H

/*------------- Queue.h ---------------*/



