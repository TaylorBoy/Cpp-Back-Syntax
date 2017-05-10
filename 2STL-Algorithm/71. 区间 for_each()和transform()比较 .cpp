#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

/*
 * for_each()   �ٶȿ�  �����
 * transform()  �ٶ���  �ǳ����
 */

//ƽ��, for_each():����
void square(int & elem)
{
    elem *= elem;
}

//transform()������ֵ
int square2(int elem)
{
    return elem * elem;
}

int main()
{
    vector<int> a;
    vector<int> b;

    for (int i = 1; i < 10; ++i){
        a.push_back(i);
        b.push_back(i);
    }

    cout << "a: ";
    copy(a.begin(),a.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "b: ";
    copy(b.begin(),b.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "for_each to a: ";

    //for_each�������޸�
    for_each(a.begin(),a.end(),square);
    copy(a.begin(),a.end(), ostream_iterator<int>(cout, " "));
    cout << endl << "transform ot b: ";

    //transform��ÿ�ζ��ǿ���
    transform(b.begin(),b.end(),b.begin(), square2);
    copy(b.begin(),b.end(), ostream_iterator<int>(cout, " "));



    return 0;
}
