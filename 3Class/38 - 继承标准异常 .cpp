#include <iostream>
#include "Stack.h"
using namespace std;

/*
    继承标准异常
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
        // cerr 错误输出
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

    // 继承标准异常
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
            // 抛出异常
            throw ReadEmptyStack();
        }
        T elem(c.back()); // 取出数据
        c.pop_back();     // 删除数据
        return elem;      // 返回数据
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

