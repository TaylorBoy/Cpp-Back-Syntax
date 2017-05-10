#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
using namespace std;

int main()
{
    set<int>  iset;
    for (int i = 1; i < 10; ++i)
        iset.insert(i);
    copy(iset.begin(),iset.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    set<int>::iterator pos = iset.begin();
    advance(pos,1);  //前进一步，一般迭代器(随机迭代器pos+=1)
    rotate_copy(iset.begin(),pos,iset.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    pos = iset.end();
    advance(pos,-3);
    rotate_copy(iset.begin(),pos,iset.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    //内置find（）
    rotate_copy(iset.begin(),iset.find(6),iset.end(),ostream_iterator<int>(cout, " "));
    cout << endl;


    return 0;
}
