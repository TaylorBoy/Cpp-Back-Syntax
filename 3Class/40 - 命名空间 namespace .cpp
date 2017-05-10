#include <iostream>

//using namespace std;

/*
    命名空间: namespace

    * using namespace std;  // 在头文件里不要这么做, 要写全称
    * 定义别名:
        namespace bs = space_name;
        bs::test();
    * 可以有重名: 相同的名称为同一命名空间
    * 命名空间可以嵌套:
        namespace Myname{
            ...
            namespace Name{
            ...
            };
        };

    * 全局名称空间: 没有名称
        ::test();
*/

namespace Test
{
    int t = 99;

    // 可以嵌套
    namespace Print
    {
        void print()
        {
            std::cout << "Test::print()" << std::endl;
        }
    }
}

// 最好用到什么写什么
using std::cout;
using std::endl;

// 别名
namespace t = Test;

int main()
{
    cout << "Hello world!" << endl;

    cout << "Test: t = " << Test::t << endl;
    t::Print::print();

    return 0;
}
