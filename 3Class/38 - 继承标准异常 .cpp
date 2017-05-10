#include <iostream>
#include "Stack.h"
using namespace std;

/*
    �̳б�׼�쳣
*/

int main()
{
    Stack<int> st;

    try{
        st.push(1);
        st.push(2);
        st.push(3);
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
    }
    catch (const exception &e)
    {
        // cerr �������
        cerr << "Error: " << e.what() << endl;
    }


    cout << "OK !" << endl;
    return 0;
}

/*------------- stack.h ---------------*/

#ifndef STACK_H
#define STACK_H

#include <deque>
#include <exception>

template <class T>
class Stack
{
protected:
    std::deque<T> c;

public :

    // �̳б�׼�쳣
    class ReadEmptyStack : public std::exception
    {
    public :
        virtual const char * what() const throw()
        {
            return "Taylor: Read Empty Stack !";
        }
    };

    void push(const T& elem)
    {
        c.push_back(elem);
    }

    T pop()
    {
        if (c.empty())
        {
            // �׳��쳣
            throw ReadEmptyStack();
        }
        T elem(c.back()); // ȡ������
        c.pop_back();     // ɾ������
        return elem;      // ��������
    }

    T& top()
    {
        if (c.empty())
        {
            throw ReadEmptyStack();
        }
        return c.back();
    }
};


#endif // STACK_H

/*------------- stack.h ---------------*/

