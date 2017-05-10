#include <iostream>
#include <string>
using namespace std;

/*
 * 静态: static
        * 静态就是只有一个,共用同一个
        * 尽量用静态成员, 少用全局变量,全局函数
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
        //静态变量不属于对象,不能用this关键字
        interest_rate = rate;
    }

private:
    string owner;
    double money;
    static double interest_rate;  //利率,只有一个
    //例外: 静态整形常量可以在此初始化
    static const int CHANG_LIANG = 5;
};

//初始化静态变量, 私有
double Account::interest_rate = 0.015;


///////////////////////////////////////
//              主函数
///////////////////////////////////////
int main()
{
    Account a("doubI", 888);
    Account b("ShzX", 999);

    cout << "Interest Rate: " << a.GetInterestRate() << endl;

    //静态,可以不需要对象来初始化
    Account::SetInterestRate(0.026);

    cout << a.GetName() << ": " << a.GetMoney() << endl;
    cout << b.GetName() << ": " << b.GetMoney() << endl;
    cout << "Interest Rate: " << a.GetInterestRate() << endl;


    return 0;
}
