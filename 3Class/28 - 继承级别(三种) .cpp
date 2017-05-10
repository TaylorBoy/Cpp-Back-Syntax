#include <iostream>

using namespace std;

/*
    1. ���ּ̳� (ȱʡ private)
       * ����  : class B : public    A
       * ˽��  : class B : private   A
       * �ܱ���: class B : protected A

    2. �ӿڼ̳к�ʵ�ּ̳�
    3. �޸ļ̳з���(ȥ�������Ա)
    4. Ĭ�ϼ̳з��ʼ���: private (structĬ��public)

*/

///////////////////////////////////////////////
// ����
class A
{
public :
    int a;
protected:
    int b;
private:
    int c;
};

///////////////////////////////////////////////
// ����1
class B1 : public A
{
public :
    void test(){
        cout << a << endl; //a: public
        cout << b << endl; //b: protected, �̳�Ȩ�޲���
        // cΪprivate���ܷ���
        //cout << c << endl; // ����ʹ��using A::c������private�ķ���Ȩ��
    }
};

// ����2
class B2 : protected A
{
public :
    void test(){
        cout << a << endl; //a: protected
        cout << b << endl; //b: protected
        // c�ܱ���
    }

    // 3. �޸ļ̳з���(ȥ�������Ա)
    using A::a; // ʹprotected��public��������main���ܷ���
};

// ����3
class B3 : private A
{
public :
    void test(){
        cout << a << endl; //a: private
        cout << b << endl; //b: private
        // c�ܱ���
        cout << c << endl;
    }

private :
    int a;
    int b;
    int c;
};

////////////////////////////////////////////////
// ����
class C : public B1
{
public :
    void test(){
        cout << a << endl;
        cout << b << endl;
        // c�ܱ���
    }
};


int main()
{
    B2 b2;

    // ʹ��using A::a תΪpublic
    cout << b2.a << endl;

    return 0;
}











