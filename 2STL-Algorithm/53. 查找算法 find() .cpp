#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

/*
 * �����㷨--find()
 */

int main()
{
    list<int> iList;

    for (int i = 1; i <= 9; ++i){
        iList.insert(iList.end(), i);
    }
    for (int i = 1; i <= 9; ++i){
        iList.insert(iList.end(), i);
    }

    for (list<int>::const_iterator it = iList.begin(); it != iList.end(); ++it){
        cout << *it << " ";
    }cout << endl;

    list<int>::iterator pos1 = find(iList.begin(), iList.end(), 6); //���ҵ�һ��6
    list<int>::iterator pos2 = find(++pos1, iList.end(), 6); //������һ��6

    //�ҳ�����6֮���Ԫ��
    if (pos1 != pos2){
        --pos1;
        ++pos2;
        for ( ; pos1 != pos2; ++pos1){
            cout << *pos1 << "-";
        }
    }


    return 0;
}
