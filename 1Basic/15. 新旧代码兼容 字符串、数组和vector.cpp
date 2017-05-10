#include <iostream>
#include <vector>
#include <string>
/*
 * 新旧代码的兼容
 * 字符串和string，数组和Vector
 **/

using namespace std;

int main()
{
    //字符
    string str("Hei Girl!");
    str += " baby";,

    const char *chs = str.c_str(); //转化为字符串类型
    cout << "str: " << str << endl;
    cout << "chs: " << chs << endl;

    //数组
    const size_t arr_size = 6;
    int arr[arr_size] = {1,2,3,4,5,6};

    //              包括  不包括
    vector<int> vec(arr, arr+arr_size);

    cout << "vec: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << ", ";
    }

    vector<int> vec2(arr+1, arr+4);

    cout << endl <<"vec2: ";
    for (vector<int>::iterator it = vec2.begin(); it != vec2.end(); ++it){
        cout << *it << ", ";
    }

    return 0;
}
