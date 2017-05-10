#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/* �����㷨
 * adjacent_find() ����������ͨ��
 */


 //ν��,�ڶ������ǵ�һ����������
 bool double_num(int elem1,int elem2)
 {
     return 2*elem1 == elem2;
 }

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(8);
    vec.push_back(8);
    vec.push_back(0);

    vector<int>::iterator pos;

    //Ĭ�ϣ�����������ȵ�ֵ
    pos = adjacent_find(vec.begin(),vec.end());

    if (vec.end() != pos){
        cout << "Found at: " << distance(vec.begin(), pos)+1 << endl;
    }else{
        cout << "Not Found!\n" ;
    }

    //ν��: �ڶ������ǵ�һ����������
    pos = adjacent_find(vec.begin(),vec.end(), double_num);

    if (vec.end() != pos){
        cout << "Found at: " << distance(vec.begin(), pos)+1 << endl;
    }else{
        cout << "Not Found!\n" ;
    }


    return 0;
}
