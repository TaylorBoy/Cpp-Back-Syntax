#include <iostream>
#include <cstdlib>

/*数组*/

using namespace std;

int main()
{
    int a[10]; //静态数组，堆栈上创建的，大小不能改变

    int num;
    cout << "你想要多大的数组：" ;
    cin  >> num;
    int *p = (int *)malloc(num*sizeof(int));
    if (NULL != p)
        cout << "malloc创建成功！";

    //动态创建
    int *ap = new int[num]();  //()初始化为0

    for (int *ptr = ap; ptr != ap + num; ++ptr){
        cout << *ptr << ",";
    }

    //有new必须有delete，否则可能会发生严重的内存泄漏
    delete[] ap;

    return 0;
}
