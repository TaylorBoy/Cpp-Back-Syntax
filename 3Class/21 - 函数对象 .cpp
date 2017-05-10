#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
/*
 * ��������
    * һ��ʹ��struct
 */

//class basInt
//{
//public :
//    int operator()(int val){
//    }
//};


// ��������
struct absInt{
    // ���ز�����: �������ò�����
    int operator()(int val){
        return (val < 0) ? -val : val;
    }
};

// ��ͨģ�庯��
template<typename elementType>
void FuncDisplayElement(const elementType &element)
{
    cout << element << " ";
}

// ģ��: ��������
template<typename elementType>
struct DisplayElement
{
    // ����ͨ����ģ�������:
    // ������Դ���״̬��, ��ǿ��
    unsigned int count;

    DisplayElement()
    {
        count = 0;  // ��ʼ��
    }

    void operator() (const elementType & element)
    {
        ++count;  // ����
        cout << element << " ";
    }
};


int main()
{
    int b1 = -88;
    absInt absObj;
    int a1 = absObj(b1);

    cout << a1 << endl;

    vector<int> a;
    for (int n = 0; n < 10; ++n)
        a.push_back(n);
    list<char> b;
    for (char c = 'a'; c < 'k'; ++c)
        b.push_back(c);

    // STL�㷨
    for_each(a.begin(), a.end(), DisplayElement<int>()); //
    cout << endl;

    // ��ȡʹ�ô���
    DisplayElement<char> mResult; // ��������
    mResult = for_each(b.begin(), b.end(), mResult);
    cout << endl;

    cout << "DisplayElement<char> ʹ�ô���: " << mResult.count << endl;


    return 0;
}








