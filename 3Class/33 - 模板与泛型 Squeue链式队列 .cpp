#include <iostream>
#include "squeue.h"
using namespace std;

/*
    * 链式队列
*/

int main()
{
    cout << "============= 链式队列 ============= " << endl;

    Squeue<int> iQ;
    iQ.enqueue(10);
    iQ.enqueue(20);
    iQ.enqueue(30);
    iQ.enqueue(40);

    cout << "Front: " << iQ.getFront() << endl;
    cout << "Dequeue: " << iQ.dequeue() << endl;
    cout << "Front: " << iQ.getFront() << endl;

    cout << endl;
    for (int i = 0; i < 8; ++i)
    {
        iQ.enqueue(i);
    }

    while (!iQ.isEmpty())
    {
        cout << iQ.dequeue() << " ";
    }

    return 0;
}

/*------------ squeue.h --------------*/

#ifndef SQUEUE_H
#define SQUEUE_H

template<class Object>
class Squeue
{
public :
    Squeue();
    ~Squeue();

    bool isEmpty() const;
    const Object& getFront() const;
    void enqueue(const Object &x); // in
    Object dequeue();  // out
    void makeEmpty();  // clear all

private:
    struct ListNode{
    // 默认public
        Object element;
        ListNode *next;

        ListNode(const Object &theElement, ListNode *n=0)
            : element(theElement), next(n) {}
    };

    ListNode *front;
    ListNode *back;
};


template<class Object>
Squeue<Object>::Squeue()
{
    front = back = 0;
}

template<class Object>
Squeue<Object>::~Squeue()
{
    makeEmpty();
}

template<class Object>
void Squeue<Object>::makeEmpty()
{
    while (!isEmpty())
        dequeue();
}

template<class Object>
bool Squeue<Object>::isEmpty() const
{
    return front == 0;
}

template<class Object>
const Object& Squeue<Object>::getFront() const
{
    if (isEmpty())
        throw "Queue is empty !";
    return front->element;
}

template<class Object>
void Squeue<Object>::enqueue(const Object &x)
{
    if (isEmpty())
        back = front = new ListNode(x);
    else
        back = back->next = new ListNode(x);
}

template<class Object>
Object Squeue<Object>::dequeue()
{
    Object frontItem = getFront();

    ListNode *old = front;
    front = front->next;
    delete old;

    return frontItem;
}

#endif // SQUEUE_H

/*------------ squeue.h --------------*/
