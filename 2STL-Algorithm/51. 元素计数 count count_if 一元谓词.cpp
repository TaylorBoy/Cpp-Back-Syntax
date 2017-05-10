#include <iostream>
#include <algorithm>  //对所有的容器都是可以使用的
#include <vector>
#include <functional> //greater

using namespace std;

/*
 * 算法：元素计数
 */

//一元谓词
bool isEven(int elem)
{
    return (elem % 2) == 0;
}

int main()
{
    vector<int> vec;

    for (int i = 0; i < 9; ++i){
        vec.push_back(i*3);
    }
    vec.push_back(12);
    vec.push_back(12);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << " " ;
    }cout << endl;

    //count                                       固定常量
    cout << "Have " << count(vec.begin(),vec.end(),12) << " \"12\"!\n";

    //count_if                                       一元谓词
    cout << "Have " << count_if(vec.begin(),vec.end(),isEven) << "个偶数!\n";
    //                                               适配器         求模
    cout << "Have " << count_if(vec.begin(),vec.end(),not1(bind2nd(modulus<int>(),2))) << "ou数！\n";
    //                                                函数对象(预定义)
    cout << "have " << count_if(vec.begin(),vec.end(),bind2nd(greater<int>(),11)) << "个>11！\n";

    return 0;
}



