#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

/** �㷨
 ** ����ͷ�ļ���
 ** <algorithm>  �㷨
 ** <numeric>    ��ֵ
 ** <functional> ����������������
 */

//��������
class PrintInt{

public :
    void operator() (int elem) const  { //��Ա����
        cout << elem << " ";
    }

};

//����
void print(int elem){
    cout << elem << endl;
}

int main()
{
    //set �Զ�����Ķ�����
    //set<int> a;                   //ʡ�Զ���, Ĭ�ϴ�С����set<int, less<int> > a
    set<int, greater<int> > a;      //��������, greater�Ӵ�С
                                    //greater��Ԥ����ĺ�������

    a.insert(13);
    a.insert(21);
    a.insert(13);
    a.insert(1);
    a.insert(18);
    a.insert(81);

    for (set<int>::const_iterator it = a.begin(); it != a.end(); ++it){
        cout << *it << " " ;
    }cout << endl;

    /// �㷨

    vector<int> vec;
    for (int i = 1; i < 9; ++i){
        vec.push_back(i*i);
    }

    //�㷨
    for_each(vec.begin(), vec.end(), print);    //����

    for_each(vec.begin(), vec.end(), PrintInt() );  //class, ����operator����


    return 0;
}
