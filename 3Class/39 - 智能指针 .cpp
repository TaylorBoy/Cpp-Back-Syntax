#include <iostream>
#include <memory>  // ����ָ��, ֻ�ǻ�����
using namespace std;

/*
    ����ָ��
    1. ����ָ��: ���ײ����ڴ�й©(û��delete, ռ���ڴ�)
                 ��ʹnew��delete�����, �������п��ܳ����쳣û�л���delete
    2. ����ָ��:
       * �Զ���: ��ȸ��� / дʱ���� / ���ü��� / �������� / �ƻ��Ը���
       * ʹ��std::auto_ptr����ָ�� (�ƻ��Ը���, ���ڻ���ָ��)
       * ʹ��Boost����ָ��
       * ʹ��ATL�����(msvc++)������ָ��: CComPtr, CComQIPtr��.
*/

class Test
{
    public :
        void print()
        {
            cout << "auto_ptr: class" << endl;
        }
};

int main()
{
    std::auto_ptr<int> pd(new int);
    *pd = 999;

    std::cout << *pd << endl;

    std::auto_ptr<Test> pt(new Test());
    pt->print();

    return 0;
}
