#include <iostream>
#include <set>

using namespace std;

/* set��multimap
 *
 * set�������ظ�
 * multiset�����ظ�
 *
 * ע�⣺����ͨ��find�����޸�
 */

int main()
{
    /// set�������ظ�

    set<int> s;

    s.insert(22);
    s.insert(44);
    s.insert(33);
    s.insert(22);

    set<int>::const_iterator it;

    for (it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    //����
    set<int>::iterator find_it = s.find(44);
    if (find_it != s.end()){
        cout << "\nFinded: " << *find_it << endl;
    }else{
        cout << "\nNot Finded!\n";
    }

    /// multiset�����ظ�

    multiset<int> ms;

    ms.insert(11);
    ms.insert(1111);
    ms.insert(66);
    ms.insert(11);
    ms.insert(22);
    ms.insert(11);

    cout << "\n\n���У�" << ms.count(11) << "��11" << endl;

    //ɾ��
    cout << "Multiset���У�" << ms.size() << endl;
    ms.erase(11);
    cout << "ɾ��11��ʣ�£�" << ms.size() << endl;

    return 0;
}
