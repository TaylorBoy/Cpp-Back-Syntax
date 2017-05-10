#include <iostream>

using namespace std;

/*数组形参*/

//传入数组首地址，还需传入数组长度
    /*以下两个相同*/
//void print_1(const int x[], const size_t len);
//void print_1(const int x[10], const size_t len); //长度10没有用
void print_1(const int *x, const size_t len)
{
    cout << "传入数组首地址(指针)：\n";

    for (size_t i = 0; i < len; ++i){
        cout << x[i] << ", ";
    }
}

//数组引用形参
void print_2(int (&x)[10])  //长度10必须写
{
    cout << "\n\n数组引用形参：\n";

    for (size_t i = 0; i < 10; ++i){
        cout << x[i] << ", ";
    }
}

//C++标准库的写法
//传入收地址和指向最后一个的下一个地址。
void print_3(int *bgn, int *end)
{
    cout << "\n\nC++标准库的写法：\n";

    while (bgn != end){
        cout << *bgn++ << ", ";
    }
}

/// 二维数组形参
/// 参数：*x表示数组的第0行，每行有10个元素；一共有row_size行
void print_4(int (*x)[10], int row_size)
{
    cout << "\n\n二维数组的形参：\n";

    for (int i = 0; i != row_size; ++i){
        for (int j = 0; j < 10; ++j){
            cout << x[i][j] << ", ";
        }
        cout << endl;
    }
}

/// C风格字符数组，最后一个字符是NULL
void print_ch(const char *arr)
{
    cout << "\n\nC风格字符数组：\n";

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
