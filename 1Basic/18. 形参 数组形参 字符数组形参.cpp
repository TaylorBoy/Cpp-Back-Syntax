#include <iostream>

using namespace std;

/*�����β�*/

//���������׵�ַ�����贫�����鳤��
    /*����������ͬ*/
//void print_1(const int x[], const size_t len);
//void print_1(const int x[10], const size_t len); //����10û����
void print_1(const int *x, const size_t len)
{
    cout << "���������׵�ַ(ָ��)��\n";

    for (size_t i = 0; i < len; ++i){
        cout << x[i] << ", ";
    }
}

//���������β�
void print_2(int (&x)[10])  //����10����д
{
    cout << "\n\n���������βΣ�\n";

    for (size_t i = 0; i < 10; ++i){
        cout << x[i] << ", ";
    }
}

//C++��׼���д��
//�����յ�ַ��ָ�����һ������һ����ַ��
void print_3(int *bgn, int *end)
{
    cout << "\n\nC++��׼���д����\n";

    while (bgn != end){
        cout << *bgn++ << ", ";
    }
}

/// ��ά�����β�
/// ������*x��ʾ����ĵ�0�У�ÿ����10��Ԫ�أ�һ����row_size��
void print_4(int (*x)[10], int row_size)
{
    cout << "\n\n��ά������βΣ�\n";

    for (int i = 0; i != row_size; ++i){
        for (int j = 0; j < 10; ++j){
            cout << x[i][j] << ", ";
        }
        cout << endl;
    }
}

/// C����ַ����飬���һ���ַ���NULL
void print_ch(const char *arr)
{
    cout << "\n\nC����ַ����飺\n";

    while (*arr != NULL){
        cout << *arr++;
    }
}


int main()
{
    int arr[10] = {14,15,21,23,56,8,78,79,22,94};
    int arr2[][10] = {{14,15,21,23,56,8,78,79,22,94},
                      {15,21,23,56,8,78,79,22,94,1},
                      {21,23,56,8,78,79,22,94,22,33} };
    char *str = "Hello Love! Today is 0403.\n";

    print_1(arr, 10);

    print_2(arr);

    print_3(arr, arr+10);

    print_4(arr2, 3);

    print_ch(str);

    return 0;
}
