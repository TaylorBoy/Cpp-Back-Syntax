#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);

    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //transform(b1, e1, b2, b3, op)
    transform(vec.begin(),vec.end(),vec.begin(),vec.begin(),multiplies<int>()); //�Լ����

    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    transform(vec.begin(),vec.end(),vec.rbegin(),back_inserter(lst), plus<int>()); //ͷ��β���

    copy(lst.begin(),lst.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //vec - lst
    transform(vec.begin(),vec.end(), lst.begin(), ostream_iterator<int>(cout, " "), minus<int>());


    return 0;
}
