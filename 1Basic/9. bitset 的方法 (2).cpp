#include <iostream>

/*bitset方法*/
#include <bitset>

using namespace std;

int main()
{
    bitset<32> bit;
    cout << "bit32: " << bit << endl;

    bit.set(5); //第5位置为1
    cout << "set: " << bit << endl;

    bit.set(); //全置为1
    cout << "set: " << bit << endl;

    bit.reset(); //重置，可带参重置某位
    cout << "reset: " << bit << endl;

    //可以只用索引或者set()
    for (int index = 0; index != 32; index += 2){
        //bit[index] = 1;
        bit.set(index);
    }
    cout << bit << endl;

    bit.flip(5);  //反转
    cout << "flip: " << bit << endl;


    bit.flip();  //反转
    cout << "flip: " << bit << endl;

    //转换为十进制
    unsigned long b = bit.to_ulong();
    cout << "to_ulong: " << b << endl;



    return 0;
}
