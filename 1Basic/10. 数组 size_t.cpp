#include <iostream>
/*����*/

using namespace std;

int main()
{
    const int array_size = 8;
    int arr[array_size] = {8,9,3,4,2,4};

    //�����±����ͣ�size_t
    for (size_t i = 0; i < array_size; ++i){
        cout << arr[i] << " " ;
    }

    cout << endl;

    //int arr2����ͨ����������

    int *arr2 = arr;
    for (size_t i = 0; i < array_size; ++i){
        cout << arr2[i] << " " ;
    }

    return 0;
}
