#include <iostream>
#include <string>
using namespace std;

/*
 * ��ϵ������:  >  <
               >=  <=
               ==  !=
 *
 */

class People
{
    public :
        friend bool operator==(const People &p1, const People &p2);
        friend int  operator> (const People &p1, const People &p2);


    public :
        People(const string &d, const string &n, int a)
            :id(d), name(n), age(a)
        {  }

    private:
        string id;
        string name;
        unsigned age;
};

////////////////////////////////////////////////////
// ==
bool operator==(const People &p1, const People &p2)
{
    return p1.id == p2.id;
}

// !=
bool operator!=(const People &p1, const People &p2)
{
    return !(p1 == p2);  //���������ص�==
}

// >
int  operator>(const People &p1, const People &p2)
{
    return p1.age - p2.age;
}

// <
int  operator<(const People &p1, const People &p2)
{
    return -(p1 > p2);
}

////////////////////////////////////////////////////

int main()
{
    People p1(string("350583199"), string("Taylor"), 22);
    People p2(string("350583199"), string("Double"), 55);
    People p3(string("555fe8f88"), string("Double"), 52);

    if (p1 == p2)  cout << "p1��p2��ͬһ����" << endl;

    if (p2 != p3)  cout << "p2��p3����ͬһ����" << endl;

    cout << (p1 > p2) << endl;
    cout << (p1 < p2) << endl;

    cout << (p2 > p3) << endl;
    cout << (p2 < p3) << endl;


    return 0;
}
