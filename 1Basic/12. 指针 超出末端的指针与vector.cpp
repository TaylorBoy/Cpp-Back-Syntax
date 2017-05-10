#include <iostream>
#include <vector>

/*超出末端的指针与Vector迭代器*/

using namespace std;

int main()
{
    //指针
    const size_t arr_size = 5;
    int arr[arr_size] = {10,20,30,40,50};
    //int *ptr2 = ptr1 + arr_size;  //超出末端的指针

    for (int *p_bgn = arr, *p_end = arr + arr_size; p_bgn != p_end; ++p_bgn){
        cout << *p_bgn << ",";
    }
    cout << endl;

    //Vector
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it){
        cout << *it << ",";
    }


    return 0;
}
