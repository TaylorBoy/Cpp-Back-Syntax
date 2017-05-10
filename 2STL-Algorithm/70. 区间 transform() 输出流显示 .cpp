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

    //transform(b1, e1, b2, op)                 negateȡ��
    transform(vec.begin(),vec.end(),vec.begin(),negate<int>()); //Ŀ����Դ��ͬ==for_each()

    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " ")); //���Ƶ������

    transform(vec.begin(),vec.end(),back_inserter(lst),bind2nd(multiplies<int>(),10));

    cout << endl;  //transform ��ʾ
    transform(lst.begin(),lst.end(), ostream_iterator<int>(cout," "), negate<int>());

    return 0;
}
