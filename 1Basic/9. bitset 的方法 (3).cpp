#include <iostream>

/*bitset方法*/
#include <bitset>

using namespace std;

int main()
{
    bitset<8> bit;
    cout << "Please Input 8 num: ";
    cin >> bit;
    cout << "bit: " << bit << endl;

    cout << "1的个数：" << bit.count() << endl;
    cout << "0的个数：" << bit.size()-bit.count() << endl;

    bitset<8> flipBit(bit);
    flipBit.flip();
    cout << "bit's flip(): " << flipBit << endl;


    return 0;
}
