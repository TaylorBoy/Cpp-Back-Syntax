#include <iostream>
#include <vector>
#include <list>
#include <string>

/* 顺序容器：
 * vector：快速随机访问
 * list：  快速插入和删除
 * deque： 比向量灵活，两端都可操作

 * 顺序容器适配器：
 * stack：后先进出
 * queue：先进先出
 * priority_queue：最大值和最小值的优先级
 */

using namespace std;

/*顺序容器的定义*/

int main()
{
    vector<string> str_vec;  //使用string默认的构造函数
    str_vec.push_back("Hello");
    str_vec.push_back("C++");
    str_vec.push_back("NiceTU");

    //不能直接使用vector初始化list，但可以用迭代器
    list<string> str_list(str_vec.begin(), str_vec.end());

    //容器里除了放一些基本类型和自定义类型外，也可以放同类型的容器
    vector<vector<string> > lines;  //注意>>要分开

    cout << "没问题！" << endl;

    return 0;
}
