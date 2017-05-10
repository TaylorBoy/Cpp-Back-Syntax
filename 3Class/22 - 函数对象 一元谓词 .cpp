#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * ��������: һԪ

   * ν��: ����bool��
     һԪν��: һԪ��������ķ���ֵ����Ϊbool
 */

template<typename numberType>
struct IsMultiple
{
    numberType m_Divisor;

    IsMultiple(const numberType &divisor)
    {
        m_Divisor = divisor;
    }

    // ���غ������ò�����
    bool operator()(const numberType &element) const
    {
        return ((element % m_Divisor) == 0);
    }
};

int main()
{
    vector<int> vecIntegers;
    for (int i = 21; i < 100; ++i)
        vecIntegers.push_back(i);

    IsMultiple<int> a(4);

    vector<int>::iterator iElement;
    iElement = find_if(vecIntegers.begin(), vecIntegers.end(), a);
    // ��������: find_if(vecIntegers.begin(), vecIntegers.end(), IsMultiple<int>(4));

    if (iElement != vecIntegers.end());
    {
        cout << "��һ��4������������: " << *iElement << endl;
    }

    return 0;
}









