#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

/* search() ν��
 *
 */


//��Ԫν��(��������)
bool checkEven(int elem, bool even)
{
    if (even){
        return elem % 2 == 0;
    }else{
        return elem % 2 == 1;
    }
}

int main()
{
    vector<int> vec;

    for (int i = 1; i < 10; ++i)
        vec.push_back(i);
        vec.push_back(10);
        vec.push_back(10);
        vec.push_back(11);


    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << ' ';

    //���ҹ���
    bool checkEvenArgs[] = {false,true,true,false}; //j o o j

    vector<int>::iterator pos;

    pos = search(vec.begin(),vec.end(), checkEvenArgs,checkEvenArgs+4, checkEven);

    if (vec.end() != pos){
        cout << "\nFound at: " << distance(vec.begin(), pos)+1 <<  endl;
    }else{
        cout << "\nNot Found!\n";
    }


    return 0;
}
