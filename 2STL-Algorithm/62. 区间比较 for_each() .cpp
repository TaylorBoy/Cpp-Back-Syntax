#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
 * 算法 for_each()
 */

void print(int elem)
{
    cout << elem << ' ';
}

template<class T>
class AddValue
{
private:
    T the_value;

public:
    AddValue(const T& v):the_value(v){} //初始化the_value

    void operator() (T& elem) const
    {
        elem += the_value;
    }
};

int main()
{
    vector<int> vec;
    for (int i = 1; i < 10; ++i)
        vec.push_back(i);
    for_each(vec.begin(),vec.end(), print);
    cout << endl;

    //加10
    for_each(vec.begin(),vec.end(), AddValue<int>(10));

    for_each(vec.begin(),vec.end(), print);
    cout << endl;


    return 0;
}
