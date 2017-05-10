#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec;
    for (int i = 1; i <= 9; ++i)
        vec.push_back(i);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';  cout << endl;

    /// 随机重排，random_shuffle()
    random_shuffle(vec.begin(),vec.end());

    copy(vec.begin(),vec.end(), ostream_iterator<int>(cout, " ")); cout << endl;

    /// 分区,奇偶
    vector<int> vec2;
    for (int i = 1; i < 9; ++i)
        vec2.push_back(i);

    copy(vec2.begin(),vec2.end(), ostream_iterator<int>(cout, " ")); cout << endl;

    //partition, 不稳定，随机排
    vector<int>::iterator pos;
    pos = partition(vec2.begin(),vec2.end(), not1(bind2nd(modulus<int>(),2)));
    copy(vec2.begin(),vec2.end(), ostream_iterator<int>(cout, " ")); cout << endl;

    //稳定排序，stable_partition()
    vector<int> vec3;
    for (int i = 1; i < 9; ++i)
        vec3.push_back(i);

    stable_partition(vec3.begin(),vec3.end(),not1(bind2nd(modulus<int>(),2)));;
    copy(vec3.begin(),vec3.end(), ostream_iterator<int>(cout, " ")); cout << endl;



    return 0;
}
