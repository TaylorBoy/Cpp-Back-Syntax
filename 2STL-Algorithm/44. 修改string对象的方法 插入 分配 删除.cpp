#include <iostream>
#include <string>

using namespace std;

/*�޸�string����ķ���
 *
 * ʹ�õ�����������������ͨ��
 */
int main()
{
    //����

    string str("hello");
    string str2("ABC");

    str.insert(0,3,'K'); //��0λ�ò���3��K
    cout << "����3��K��" << str << endl;

    str.insert(2,str2);  //�ڵ�2��λ�ò���str2
    cout << "����str2�� " << str << endl;

    str.insert(0,str2,0,2);  //��0����str2(��0��ʼѡ��2λ)
    cout << "���벿��str2��" << str << endl;

    //����

    char *cp = "Start eating Now"; //c���Է��Ҳ��

    str.assign(cp,5); //��һ������
    cout << str << endl;

    str.assign(cp);   //ȫ��
    cout << str << endl;

    str.assign(cp,2,5);
    cout << str << endl;

    //ɾ��

    str.erase(1,2);  //��1��ʼɾ������
    cout << str << endl;

    //�ַ������±�
    str = "ccccccccc";

    str[0] = 'A';
    cout << str << endl;

    //�ȼ���
    str.erase(0,1).insert(1,"A");
    cout << str << endl;


    return 0;
}
