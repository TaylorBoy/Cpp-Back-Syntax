#include <iostream>
using namespace std;

/*return_���*/

/// ���ı�a��ֵ
int add_1(int x)
{
    ++x;
    return x;  //��x����һ�ݣ�����
}

/// �ı�a��ֵ, ����Ҳ������
int& add_2(int &x)
{
    ++x;
    return x;  //���صľ���x����
}

int main()
{
    int a =0, b = 0;
    a = 100;

    b = add_1(a);
    cout << "add_1: "
         << "a = " << a << ", "
         << "b = " << b << endl << endl;

    int &c = add_2(a);
    ++c;  //���ص������ã�c��a��һ���ģ��ı�c���ı���a
    cout << "add_2: "
         << "a = " << a << ", "
         << "c = " << c << endl << endl;

    /// �������͵ķ���ֵ��һ����ֵ�����Ա��޸�
    add_2(a) = 88;
    cout << "�������͵ķ���ֵ��һ����ֵ: " << a << endl;

    return 0;
}
