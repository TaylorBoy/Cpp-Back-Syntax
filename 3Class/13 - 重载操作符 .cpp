#include <iostream>
#include <windows.h>
using namespace std;

/*
 * ���ز�����: 42��
 *     �������صĲ������� :: �� .* �� . �� ?:
 */

class Person
{
    //��������: ��������>, ��ô����< <= >=�ȶ��������
    //���ر��붨��Ϊ��Ա����: ��ֵ= �±�[] ��������() ��Ա����->
    //���ز�����: �ӷ�
public :
    void operator+ (const Person &p)
    {
        cout << "** ����: �ӷ������� **" << endl;
    }

};



int main()
{
    Person p1, p2;
    p1 + p2;


    //system("pause");
    return 0;
}
