#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>

using namespace std;

/*     查找算法--find_if()[和find都是线性查找，速度慢]
 *
 * 1.若为已序区间，可使用已序区间查找算法
 * 2.关联式容器：使用成员函数find()
     map、set，multimap、multiset
 * 3.string有等效的成员函数find()
 */

int main()
{
    vector<int> vec;
    vector<int>::iterator pos;

    for (int i = 1; i <= 9; ++i){
        vec.push_back(i);
    }

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it ){
        cout << *it << ' ';
    }cout << endl;

    //
    pos = find_if(vec.begin(),vec.end(), bind2nd(greater<int>(),3));
    cout << "比3大的数是：" << *pos << endl;

    pos = find_if(vec.begin(),vec.end(), not1(bind2nd(modulus<int>(), 3)));
    cout << "第一个能被3整除的数：" << *pos << endl;

    cout << string::npos << endl;

    return 0;
}
