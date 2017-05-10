#include <iostream>
#include <algorithm>
#include <iterator>  //ostream_iterator
#include <vector>
#include <list>

using namespace std;

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";  cout << endl;

    //transform(b1, e1, b2, op)                 negate取反
    transform(vec.begin(),vec.end(),vec.begin(),negate<int>()); //目标与源相同==for_each()

    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " ")); //复制到输出流

    transform(vec.begin(),vec.end(),back_inserter(lst),bind2nd(multiplies<int>(),10));

    cout << endl;  //transform 显示
    transform(lst.begin(),lst.end(), ostream_iterator<int>(cout," "), negate<int>());

    return 0;
}
