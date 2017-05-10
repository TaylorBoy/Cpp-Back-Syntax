#include <iostream>

/*埃拉托斯特尼——筛法*/
#include <bitset>
#include <cmath>

using namespace std;

int main()
{
    const int max_num(10000);
    const int max_text((int)sqrt((double)max_num));

    bitset<max_num+1> numbers;
    numbers.set();
    //numbers[0] 不要了

    numbers[1] = 0;
    for (int i(1); i != max_num; ++i){
        if (numbers[i]){
            //筛选倍数
            for (int j(i*i); j < max_num+1; j += i){
                numbers[j] = 0;
            }
        }
    }
    cout << "共有：" << numbers.count() << endl;

    for (int i(1); i != max_num+1; ++i){
        if (numbers[i]){
            cout << i << ", ";
        }
    }



    return 0;
}
