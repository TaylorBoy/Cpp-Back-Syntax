#include <iostream>

using namespace std;

/*
    ��̬��Ա��̳�
    # �����е�static��Ա, �������̳в����ֻ��һ��ʵ��
    # ���������з���static��Ա�ķ���:
      1. ������::��Ա��
      2. ������::��Ա��
      3. ����.��Ա��
      4. ָ��->��Ա��
      5. ��Ա��

*/

class Base{

public :
    static int f_count(void){
        return 100;
    }

protected:
    static const int f_num = 88;
};

class Derived : public Base{

public :
    void func(const Derived &d, Derived *dp){

        cout << Base::f_num << endl;
        cout << Derived::f_num << endl;
        cout << d.f_num << endl;
        cout << dp->f_num << endl;
        cout << f_num << endl;

        cout << endl;

        cout << Base::f_count() << endl;
        cout << Derived::f_count() << endl;
        cout << d.f_count() << endl;
        cout << dp->f_count() << endl;
        cout << f_count() << endl;
    }
};

int main()
{
    cout << "Base func: " << Base::f_count() << endl;

    Derived d;
    d.func(d, &d);


    return 0;
}




