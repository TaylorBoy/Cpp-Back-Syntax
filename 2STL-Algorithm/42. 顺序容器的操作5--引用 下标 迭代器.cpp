#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stdexcept>

using namespace std;

/*顺序容器的操作5*/

int main()
{
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "front: " << vec.front() << endl;
    cout << "back : " << vec.back()  << endl << endl;

    //引用
    vector<int>::reference a = vec.front();
    vector<int>::reference b = vec.back();
    cout << "a: " << a;
    cout << "   b: " << b << endl << endl;

    //迭代器
    cout << "迭代器：" << *vec.begin() << "   ";
    cout << *--vec.end() << endl << endl;  //end是最后一个的下一个

    //下标，适用于vector和deque
    cout << "下标：" << endl;  //下标必须存在

    cout << vec[0] << endl << vec[1] << endl << vec[2] << endl << endl;

    // vec.at(index) 下标越界会抛出异常
    cout << "vec.at(index): " << endl;
    cout << vec.at(0) << endl << vec.at(1) << endl << vec.at(2) << endl << endl;

    try{
        cout << vec.at(88) << endl;
    }catch(out_of_range ){
        cout << "***下标越界了！***\n";
    }



    return 0;
}
