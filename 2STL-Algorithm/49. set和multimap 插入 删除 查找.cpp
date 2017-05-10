#include <iostream>
#include <set>

using namespace std;

/* set和multimap
 *
 * set不允许重复
 * multiset允许重复
 *
 * 注意：不能通过find进行修改
 */

int main()
{
    /// set不允许重复

    set<int> s;

    s.insert(22);
    s.insert(44);
    s.insert(33);
    s.insert(22);

    set<int>::const_iterator it;

    for (it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    //查找
    set<int>::iterator find_it = s.find(44);
    if (find_it != s.end()){
        cout << "\nFinded: " << *find_it << endl;
    }else{
        cout << "\nNot Finded!\n";
    }

    /// multiset允许重复

    multiset<int> ms;

    ms.insert(11);
    ms.insert(1111);
    ms.insert(66);
    ms.insert(11);
    ms.insert(22);
    ms.insert(11);

    cout << "\n\n共有：" << ms.count(11) << "个11" << endl;

    //删除
    cout << "Multiset共有：" << ms.size() << endl;
    ms.erase(11);
    cout << "删除11后剩下：" << ms.size() << endl;

    return 0;
}
