#include <iostream>

using namespace std;

/*
    ��̬��(��̬)
    * �������ൽ�����ת��
    * ���û�ָ��ȿ���ָ��������, Ҳ����ָ�����������
    * ֻ��ͨ�����û�ָ������麯���Żᷢ����̬��
 */

class Father
{
public :
    void func_1(){
        cout << "Father: func_1" << endl;
    }

    virtual void Func_2(){
        cout << "Father: func_2" << endl;
    }
};

class Sun : public Father
{
public :
    void func_1(){
        cout << "Sun: func_1" << endl;
    }

    virtual void Func_2(){
        cout << "Sun: func_2" << endl;
    }

};



int main()
{
    Father *f = new Father;
    Father *s = new Sun;

    // ��ͨ����, ������������
    f->func_1();
    s->func_1();
    cout << endl;

    // �麯����ʹ�õ��Ƕ�̬�󶨣�������ȫ���Ǿ�̬�󶨡�
    f->Func_2();
    s->Func_2();

    return 0;
}










