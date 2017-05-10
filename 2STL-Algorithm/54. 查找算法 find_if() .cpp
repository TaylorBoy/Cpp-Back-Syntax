#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>

using namespace std;

/*     �����㷨--find_if()[��find�������Բ��ң��ٶ���]
 *
 * 1.��Ϊ�������䣬��ʹ��������������㷨
 * 2.����ʽ������ʹ�ó�Ա����find()
     map��set��multimap��multiset
 * 3.string�е�Ч�ĳ�Ա����find()
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
    cout << "��3������ǣ�" << *pos << endl;

    pos = find_if(vec.begin(),vec.end(), not1(bind2nd(modulus<int>(), 3)));
    cout << "��һ���ܱ�3����������" << *pos << endl;

    cout << string::npos << endl;

    return 0;
}
