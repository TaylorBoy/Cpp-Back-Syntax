#include <iostream>
#include <string>
using namespace std;

/*
 * ��̬: static
        * ��̬����ֻ��һ��,����ͬһ��
        * �����þ�̬��Ա, ����ȫ�ֱ���,ȫ�ֺ���
 *
 */

class Account
{
public :
    Account(string name, double mny)
        :owner(name),money(mny)
    {}

    const string &GetName(void) const  {  return this->owner; }

    double GetMoney() const  {  return this->money; }

    static double GetInterestRate(void)  {  return interest_rate;  }

    static void SetInterestRate(double rate)
    {
        //��̬���������ڶ���,������this�ؼ���
        interest_rate = rate;
    }

private:
    string owner;
    double money;
    static double interest_rate;  //����,ֻ��һ��
    //����: ��̬���γ��������ڴ˳�ʼ��
    static const int CHANG_LIANG = 5;
};

//��ʼ����̬����, ˽��
double Account::interest_rate = 0.015;


///////////////////////////////////////
//              ������
///////////////////////////////////////
int main()
{
    Account a("doubI", 888);
    Account b("ShzX", 999);

    cout << "Interest Rate: " << a.GetInterestRate() << endl;

    //��̬,���Բ���Ҫ��������ʼ��
    Account::SetInterestRate(0.026);

    cout << a.GetName() << ": " << a.GetMoney() << endl;
    cout << b.GetName() << ": " << b.GetMoney() << endl;
    cout << "Interest Rate: " << a.GetInterestRate() << endl;


    return 0;
}
