#include <iostream>

//using namespace std;

/*
    �����ռ�: namespace

    * using namespace std;  // ��ͷ�ļ��ﲻҪ��ô��, Ҫдȫ��
    * �������:
        namespace bs = space_name;
        bs::test();
    * ����������: ��ͬ������Ϊͬһ�����ռ�
    * �����ռ����Ƕ��:
        namespace Myname{
            ...
            namespace Name{
            ...
            };
        };

    * ȫ�����ƿռ�: û������
        ::test();
*/

namespace Test
{
    int t = 99;

    // ����Ƕ��
    namespace Print
    {
        void print()
        {
            std::cout << "Test::print()" << std::endl;
        }
    }
}

// ����õ�ʲôдʲô
using std::cout;
using std::endl;

// ����
namespace t = Test;

int main()
{
    cout << "Hello world!" << endl;

    cout << "Test: t = " << Test::t << endl;
    t::Print::print();

    return 0;
}
