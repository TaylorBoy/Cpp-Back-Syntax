#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    ��������: ��Ԫ
    ��Ԫν��: ��Ԫ��������ķ���ֵΪbool
*/

template<typename elementType>
class CMultiply  // �˷�
{
public :
    // ����
    elementType operator()(const elementType &elem1, const elementType &elem2)
    {
        return elem1 * elem2;
    }
};

int main()
{
    cout << "��Ԫ��������: " << endl;

    vector<int> a, b;

    for (int i = 0; i < 10; ++i)
        a.push_back(i);
    for (int i = 100; i < 110; ++i)
        b.push_back(i);

    vector<int> vecResult;
    vecResult.resize(10);  // ������С

    transform(a.begin(), a.end(), b.begin(), vecResult.begin(), CMultiply<int>());

    for (size_t index = 0; index < vecResult.size(); ++index)
        cout << vecResult[index] << " ";
    cout << endl;

    return 0;
}







