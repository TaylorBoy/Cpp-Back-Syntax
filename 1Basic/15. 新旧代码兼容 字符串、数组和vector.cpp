#include <iostream>
#include <vector>
#include <string>
/*
 * �¾ɴ���ļ���
 * �ַ�����string�������Vector
 **/

using namespace std;

int main()
{
    //�ַ�
    string str("Hei Girl!");
    str += " baby";,

    const char *chs = str.c_str(); //ת��Ϊ�ַ�������
    cout << "str: " << str << endl;
    cout << "chs: " << chs << endl;

    //����
    const size_t arr_size = 6;
    int arr[arr_size] = {1,2,3,4,5,6};

    //              ����  ������
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
