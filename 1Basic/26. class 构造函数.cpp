#include <iostream>

using namespace std;

/*��Ĺ��캯��*/

class Person{

public:
    /// ���캯�������У�����ͬ����û�з���ֵ
    Person(int money){
        age = 0;
        this->money = money;
        tall = 170;
    }

    /// ���õ�д�������캯���ĳ�ʼ���б�(��ʼ�������ٵ�ʱ��)
//    Person(): age(0),money(0),tall(170){
//        //���Կ���
//    }

//private:
    int age;  //ʹ��Ĭ�ϵĹ��캯��(�޲ι��캯��),��ʼ���������Ϊȫ�ֱ������ʼ��Ϊ0����NULL
    int money;
    int tall;

};

int main()
{
    Person p(999);
    cout << "age: " << p.age << endl;
    cout << "money: " << p.money << endl;
    cout << "tall: " << p.tall << endl;

    return 0;
}
