#include <iostream>
#include <string>
using namespace std;

/*
 *  ת��������
        operator int() const;

    ע��:
        1. �����ǳ�Ա����
        2. ����ָ����������
        3. �β��б����Ϊ��
        4. ������ʽ�ķ���һ��ָ�����͵�ֵ
        5. ��Ӧ�øñ�ת������, ͨ������Ϊconst

 *
 */

class Dog
{
public :
    Dog(string n, int a, double w) : name(n), age(a), weight(w) {}

    operator int() const
    {
        return age;
    }

    operator double() const
    {
        return weight;
    }

private:
    int age;
    double weight;
    string name;
};


int main()
{
    int a, b;

    a = 10;
    b = a;

    Dog d("DogBill", 88, 50.5);
    b = d;
    double c = d;

    cout << "b: " << b << "  c = " << c << endl;

    return 0;
}
