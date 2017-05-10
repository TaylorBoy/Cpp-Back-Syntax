#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

//二元谓词
bool absLess(int elem1, int elem2)
{
    return abs(elem1) < abs(elem2);
}

int main()
{
    deque<int> deq;

    for (int i = 2; i <= 8; ++i){
        deq.insert(deq.end(),i);
    }

    for (int i = -3; i <= 5; ++i){
        deq.insert(deq.end(),i);
    }

    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it){
        cout << *it << ' ';
    } cout << endl;

    //最小值
    cout << "Min: " << *min_element(deq.begin(), deq.end()) << endl;

    //最大值
    cout << "Max: " << *max_element(deq.begin(), deq.end()) << endl;

    //最小、大值(绝对值)
    cout << "|Min|: " << *min_element(deq.begin(), deq.end(), absLess) << endl;

    cout << "|Max|: " << *max_element(deq.begin(), deq.end(), absLess) << endl;

    return 0;
}
