#include <iostream>

/*bitset�ķ���*/
#include <bitset>

using namespace std;

int main()
{
    bitset<32> bit(888);
    cout << "bit888: " << bit << endl;

    bool is_set = bit.any(); //������һ��1
    if (is_set){
        cout << "bit��������һ��1��\n";
    }

    bool no_set = bit.none(); //һ��1��û��
    if (!no_set){
        cout << "bit�к���1\n";
    }

    cout << "bit�Ĵ�С��" << bit.size() << endl;
    cout << "bit���� " << bit.count() << " ��1��\n";

    return 0;
}
