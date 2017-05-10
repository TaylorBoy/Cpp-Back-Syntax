#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<char> source(10, '.');
    for (int c = 'a'; c <= 'f'; ++c)
        source.push_back(c);
    source.insert(source.end(),10,'.');

    for (vector<char>::iterator it = source.begin(); it != source.end(); ++it)
        cout << *it << ' ';  cout << endl;

    //copy在同一个容器内部执行，内容覆盖
    vector<char> c1(source.begin(), source.end());

    copy(c1.begin()+10, c1.begin()+16, c1.begin()+7);
    copy(c1.begin(),c1.end(), ostream_iterator<char>(cout, " "));
    cout << endl;

    //cout_backward()
    vector<char> c2(source.begin(), source.end());

    copy_backward(c2.begin()+10,c2.begin()+16, c2.begin()+19);
    copy(c2.begin(),c2.end(), ostream_iterator<char>(cout," "));
    cout << endl;

    return 0;
}
