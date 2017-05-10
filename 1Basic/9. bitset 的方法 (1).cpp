#include <iostream>

/*bitset的方法*/
#include <bitset>

using namespace std;

int main()
{
    bitset<32> bit(888);
    cout << "bit888: " << bit << endl;

    bool is_set = bit.any(); //至少有一个1
    if (is_set){
        cout << "bit中至少有一个1！\n";
    }

    bool no_set = bit.none(); //一个1都没有
    if (!no_set){
        cout << "bit中含有1\n";
    }

    cout << "bit的大小：" << bit.size() << endl;
    cout << "bit共有 " << bit.count() << " 个1！\n";

    return 0;
}
