#include <iostream>
#include <cstdlib>

/*����*/

using namespace std;

int main()
{
    int a[10]; //��̬���飬��ջ�ϴ����ģ���С���ܸı�

    int num;
    cout << "����Ҫ�������飺" ;
    cin  >> num;
    int *p = (int *)malloc(num*sizeof(int));
    if (NULL != p)
        cout << "malloc�����ɹ���";

    //��̬����
    int *ap = new int[num]();  //()��ʼ��Ϊ0

    for (int *ptr = ap; ptr != ap + num; ++ptr){
        cout << *ptr << ",";
    }

    //��new������delete��������ܻᷢ�����ص��ڴ�й©
    delete[] ap;

    return 0;
}
