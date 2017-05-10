#include <iostream>
#include <string>
/*
 * bitset��������
 **/
#include <bitset>

using namespace std;

int main()
{
    bitset<32> a; //a�Ĵ�С��32λ�����ƣ���Ϊ0
    cout << "a32: " << a << endl;

    bitset<16> b(0xfeee); //1111 1110 1110 1110
    cout << "b16: " << b << endl;

    bitset<15> c(077);
    cout << "c15: " << c << endl;

    bitset<10> d(256);
    cout << "d10: " << d << endl;

    string str("1111111111010000110101");
    bitset<32> e(str);      //ȫ��
    bitset<16> f(str,2,8);  //��ȡ
    bitset<16> h(str,str.size()-8); //���nλ
    cout << "e32: " << e << endl;
    cout << "f16: " << f << endl;
    cout << "h16: " << h << endl;

    return 0;
}
