#include <iostream>
#include <algorithm>  //�����е��������ǿ���ʹ�õ�
#include <vector>
#include <functional> //greater

using namespace std;

/*
 * �㷨��Ԫ�ؼ���
 */

//һԪν��
bool isEven(int elem)
{
    return (elem % 2) == 0;
}

int main()
{
    vector<int> vec;

    for (int i = 0; i < 9; ++i){
        vec.push_back(i*3);
    }
    vec.push_back(12);
    vec.push_back(12);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << " " ;
    }cout << endl;

    //count                                       �̶�����
    cout << "Have " << count(vec.begin(),vec.end(),12) << " \"12\"!\n";

    //count_if                                       һԪν��
    cout << "Have " << count_if(vec.begin(),vec.end(),isEven) << "��ż��!\n";
    //                                               ������         ��ģ
    cout << "Have " << count_if(vec.begin(),vec.end(),not1(bind2nd(modulus<int>(),2))) << "ou����\n";
    //                                                ��������(Ԥ����)
    cout << "have " << count_if(vec.begin(),vec.end(),bind2nd(greater<int>(),11)) << "��>11��\n";

    return 0;
}



