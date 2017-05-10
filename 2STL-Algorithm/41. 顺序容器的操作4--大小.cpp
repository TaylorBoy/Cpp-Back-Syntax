#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

/*顺序容器的操作4*/

int main()
{
    list<int> list_int;
    list_int.push_back(10);
    list_int.push_back(20);
    list_int.push_back(30);

    cout << "容器的数据个数：" << list_int.size() << endl;

    cout << "容器的max size：" << list_int.max_size() << endl;

    //注意：resize()可能使迭代器失效(增加或者减少时，迭代器指向的位置可能失效)

    //调整大小,调整到10,默认填充0
    list_int.resize(10);

    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it ){
        cout << *it << " ";
    }

    //调整大小，使用固定值填入
    list_int.resize(20, 6);
    cout << endl;
    for (list<int>::iterator it = list_int.begin(); it != list_int.end(); ++it ){
        cout << *it << " ";
    }

    //清空
    list_int.resize(0);

    if (list_int.empty()){
        cout << "\n容器是空的！" << endl;
    }



    return 0;
}
