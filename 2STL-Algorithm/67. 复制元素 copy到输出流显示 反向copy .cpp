#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator> //ostream_iterator

using namespace std;

int main()
{
    vector<int> vec;
    list<int>   lst;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);

    copy(vec.begin(),vec.end(), back_inserter(lst)); //lstû�г�ʼ����Ϊ�գ������ʼ�����߲��������
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
        cout << *it << ' ';   cout << endl;

    //copy���������ʾ
    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    //����copy
    copy(vec.rbegin(),vec.rend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
