#include <iostream>
using namespace std;

/*return���*/

/// 1.����ֵ
int add(int a, int b)
{
    return a+b;
}

/// 2.��������
void swap(int &a, int &b)
{
    cout << "\n\n��ֵ������\n";

    if (a == b){
        cout << "��������ֵ���.\n";
        return;     //��ǰ��������ʡʱ��
    }
    int temp = a;
    a = b;
    b = temp;
    return;         //����ʡ��
}


int main()
{
    int num1 = 77, num2 = 22;

    //����ֵ
    cout << "����ֵ��" << add(num1, num2) << endl;

    //��ͬ��������
    swap(num1, num2);
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    //ͬһ����������
    swap(num1, num1);

    return 0;
}
