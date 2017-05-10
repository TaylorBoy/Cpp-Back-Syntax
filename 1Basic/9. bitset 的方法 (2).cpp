#include <iostream>

/*bitset����*/
#include <bitset>

using namespace std;

int main()
{
    bitset<32> bit;
    cout << "bit32: " << bit << endl;

    bit.set(5); //��5λ��Ϊ1
    cout << "set: " << bit << endl;

    bit.set(); //ȫ��Ϊ1
    cout << "set: " << bit << endl;

    bit.reset(); //���ã��ɴ�������ĳλ
    cout << "reset: " << bit << endl;

    //����ֻ����������set()
    for (int index = 0; index != 32; index += 2){
        //bit[index] = 1;
        bit.set(index);
    }
    cout << bit << endl;

    bit.flip(5);  //��ת
    cout << "flip: " << bit << endl;


    bit.flip();  //��ת
    cout << "flip: " << bit << endl;

    //ת��Ϊʮ����
    unsigned long b = bit.to_ulong();
    cout << "to_ulong: " << b << endl;



    return 0;
}
